// Copyright 2024 Tencent Inc. All rights reserved.
//

#include "eval_start_manu_time_check.h"
#include "l4_signal.pb.h"

namespace eval {
const char EvalStartManuTimeCheck::_kpi_name[] = "StartManuTimeCheck";

sim_msg::TestReport_XYPlot EvalStartManuTimeCheck::_s_manu_time_plot;

EvalStartManuTimeCheck::EvalStartManuTimeCheck() { VLOG_0 << "eval algorithm " << _kpi_name << " constructed.\n"; }
bool EvalStartManuTimeCheck::Init(eval::EvalInit &helper) {
  // determine whether the module is valid. If valid, check if kpi is enabled and get the threshold values.
  if (IsModuleValid()) {
    m_KpiEnabled = helper.getGradingKpiByName(_kpi_name, m_Kpi);
    m_defaultThreshDouble = getThreshValueByID_Double(m_Kpi, m_KpiEnabled);
    _manu_ctime = 0.0;
    _manu_signal = 0;
    // output indicator configuration details
    DebugShowKpi();
  }

  // set report info
  if (isReportEnabled()) {
    ReportHelper::SetCaseInfo(_case, m_Kpi);
    ReportHelper::ConfigXYPlot(_s_manu_time_plot, "manu time", "manu time after starting", "t", "s", {"manu_time"},
                               {"s"}, 1);
    ReportHelper::ConfigXYPlotThreshold(_s_manu_time_plot, "", 0, 1, m_defaultThreshDouble, "", 1, 0, INT32_MIN, 0);
  }

  return true;
}
bool EvalStartManuTimeCheck::Step(eval::EvalStep &helper) {
  // check whether the module is valid and whether the indicator is enabled
  if (IsModuleValid() && m_KpiEnabled) {
    EvalMsg algori_msg = _msg_mgr->Get(topic::L4_ALGORITHM_SIGNAL);
    sim_msg::L4AlgorithmSignal _algori_obj;
    // std::string tips = "not receive L4ALFORITHMSIGNAL";
    if (algori_msg.GetPayload().size() > 0) {
      _algori_obj.ParseFromString(algori_msg.GetPayload());
      // int tmp = rand() % 10000 < 10 ? 1 : 0;
      // _algori_obj.mutable_signal()->insert({"main_state", std::to_string(tmp)});
      google::protobuf::Map<std::string, std::string> *signal_map = _algori_obj.mutable_signal();
      // google::protobuf::Map<std::string, std::string>::iterator it = signal_map->find("frame_id");
      // if (it != signal_map->end() && it->second != last_frame_id) {
      google::protobuf::Map<std::string, std::string>::iterator signal_get = signal_map->find("main_state");
      if (signal_get != signal_map->end()) {
        int signal = std::stoi(signal_get->second);
        if (_manu_signal == 0 && signal) {
          _manu_signal = signal;
        } else if (_manu_signal == 0) {
          _manu_ctime += getModuleStepTime();
        }
        VLOG_0 << "receive main_state: " << signal << "\n";
      } else {
        VLOG_0 << "do not find key: main_state.\n";
      }
      //}
    } else {
      VLOG_0 << "do not receive message for L4_ALGORITHM_SIGNAL.\n";
    }
    //  add data to xy-pot
    _detector.Detect(_manu_ctime, m_defaultThreshDouble);
    if (isReportEnabled()) {
      _s_manu_time_plot.mutable_x_axis()->add_axis_data(helper.GetSimTime());
      _s_manu_time_plot.mutable_y_axis()->at(0).add_axis_data(_manu_ctime);
    }
  } else {
    VLOG_0 << _kpi_name << " not enabled.\n";
    return false;
  }
  return true;
}
bool EvalStartManuTimeCheck::Stop(eval::EvalStop &helper) {
  // add report
  if (isReportEnabled()) {
    auto attach = _case.add_steps()->add_attach();
    ReportHelper::AddXYPlot2Attach(*attach, _s_manu_time_plot);
  }
  return true;
}

void EvalStartManuTimeCheck::SetGradingMsg(sim_msg::Grading &msg) {
  // set detected event
  EvalHelper::SetDetectedEvent(msg, _detector, _kpi_name);
}

EvalResult EvalStartManuTimeCheck::IsEvalPass() {
  if (m_KpiEnabled) {
    /**
     * set detected count
     */
    _case.mutable_info()->set_detected_count(_detector.GetCount());

    if (_detector.GetCount() >= m_Kpi.passcondition().value() && m_Kpi.passcondition().value() >= 0.5) {
      return EvalResult(sim_msg::TestReport_TestState_FAIL, "above the max manu time");
    } else {
      return EvalResult(sim_msg::TestReport_TestState_PASS, "manu time check pass");
    }
  }

  return EvalResult(sim_msg::TestReport_TestState_PASS, "manu time check skipped");
}

bool EvalStartManuTimeCheck::ShouldStopScenario(std::string &reason) {
  auto ret = _detector.GetCount() >= m_Kpi.finishcondition().value() && m_Kpi.finishcondition().value() >= 0.5;
  if (ret) reason = "above count of max manu check time";
  /**
   *  set request stop
   */
  _case.mutable_info()->set_request_stop(ret);
  return ret;
}
}  // namespace eval
