// Copyright 2024 Tencent Inc. All rights reserved.
//

#include "inc/writer_ecu.h"
#include "inc/proto_helper.h"

EcuParaWriter::EcuParaWriter() {}

void EcuParaWriter::fillPowEcu(tx_car::car &m_car) {
  auto ecu = m_car.mutable_ecu();

  // max acc
  tx_car::setRealScalar(ecu->mutable_ecu_max_acc(), "ecu max acc", "", "m|s2", 10.0);
  tx_car::setRealScalar(ecu->mutable_ecu_max_dec(), "ecu max dec", "", "m|s2", -10.0);

  // soft ems
  auto ems = m_car.mutable_ecu()->mutable_soft_ems();
  tx_car::setRealScalar(ems->mutable_engmaxtrq(), "engine maximum torque", "", "Nm", 515);
  tx_car::setRealScalar(ems->mutable_eng_acc_p(), "P of PID control for EMS", "", "N/A", 0.2);
  tx_car::setRealScalar(ems->mutable_eng_acc_i(), "I of PID control for EMS", "", "N/A", 0.01);
  tx_car::setRealScalar(ems->mutable_eng_acc_d(), "D of PID control for EMS", "", "N/A", 0.0);
  tx_car::setRealScalar(ems->mutable_eng_idl_speed(), "engine idle speed", "", "rpm", 750.0);

  // soft vcu
  auto vcu = m_car.mutable_ecu()->mutable_soft_vcu();
  tx_car::setRealScalar(vcu->mutable_motormaxtrq(), "total motor maximum torque", "", "Nm", 380.0 * 2.0);

  tx_car::setRealScalar(vcu->mutable_fwdmotortorquesplitratio(), "4wd torque slipt ratio",
                        "only used in 4WD EV CAR, defined as "
                        "(Tfront/(Tfront+Trear)), range [0,1]",
                        "null", 0.5);
  tx_car::setRealScalar(vcu->mutable_vcu_acc_p(), "P of PID control for VCU", "", "N/A", 0.8);
  tx_car::setRealScalar(vcu->mutable_vcu_acc_i(), "I of PID control for VCU", "", "N/A", 0.03);
  tx_car::setRealScalar(vcu->mutable_vcu_acc_d(), "D of PID control for VCU", "", "N/A", 0.0);
  tx_car::setRealScalar(vcu->mutable_vcu_power_regeneration_ratio(), "power ratio for regeneration",
                        "power ratio for regeneration", "N/A", 0.3);

  // abs
  auto abs = m_car.mutable_ecu()->mutable_soft_abs();
  tx_car::setRealScalar(abs->mutable_abs_enable(), "if enable ABS", "", "0/1", 0);
  tx_car::setRealScalar(abs->mutable_slip_ratio_ref(), "ABS enable slip ratio", "", "N/A", 0.25);
  tx_car::setRealScalar(abs->mutable_slip_ratio_disable_ref(), "ABS disable slip ratio", "", "N/A", 0.1);
  tx_car::setRealScalar(abs->mutable_abs_brake_pressure(), "brake pressure ratio when ABS is active",
                        "brake pressure ratio when ABS is active, range [0,1]", "N/A", 0.2);
  tx_car::setRealScalar(abs->mutable_brake_p(), "P of PID for brake", "", "N/A", 0.1);
  tx_car::setRealScalar(abs->mutable_brake_i(), "I of PID for brake", "", "N/A", 0.01);
  tx_car::setRealScalar(abs->mutable_brake_d(), "D of PID for brake", "", "N/A", 0.0);
  /*
  tx_car::setRealScalar(
          abs->mutable_max_main_cylinder_pressure(),
          "max brake main cylinder pressure, [0,1]",
          "",
          "Pa",
          20e6
  );
  tx_car::setRealScalar(
          abs->mutable_max_main_cylinder_pressure(),
          "max brake main cylinder pressure",
          "",
          "Pa",
          20e6
  );
  tx_car::setRealScalar(
          abs->mutable_rear_brake_ratio(),
          "ratio for rear brake",
          "",
          "N/A",
          0.6
  );
  tx_car::setRealScalar(
          abs->mutable_brake_time_const(),
          "brake hydraulic fluid time const",
          "brake pressure will reach 95% of target at 3rd of this time const",
          "s",
          0.06
  );

  auto brake_map = abs->mutable_brake_table();
  double brake_acc[] = { 0,1.5,3,4.5,6,7.5,9,10.5,12,13.5,15 };
  double brake_prs[] = { 0, 0.1, 0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9, 1.0 };
  tx_car::set1DMapInfo(brake_map, "Brake table", "brake target acc(absolute
  value) vs brake pressure([0,1])");
  tx_car::setRealAxis(brake_map->mutable_u0_axis(), "brake target acc", "brake
  target acc(absolute value)", "m|s2", brake_acc, 11);
  tx_car::setRealAxis(brake_map->mutable_y0_axis(), "brake pressure", "brake
  pressure([0,1])", "N/A", brake_prs, 11);
  */
}

void EcuParaWriter::fillHCU(tx_car::car &m_car) {
  // get ecu
  auto &ecu = *m_car.mutable_ecu();

  // mutable hcu
  auto hcu = ecu.mutable_soft_hcu();

  // fill default hcu
  tx_car::setRealScalar(hcu->mutable_pwr_dmnd_ev(), "Power demand for EV", "", "w", 40000);
  tx_car::setRealScalar(hcu->mutable_pwr_dmnd_hybrid(), "Power demand for Hybrid", "", "w", 60000);
  tx_car::setRealScalar(hcu->mutable_pwr_default_charge(), "Default charge power", "", "w", 3300);
  tx_car::setRealScalar(hcu->mutable_pwr_max_charge(), "Max charge power", "", "w", 50000);
  tx_car::setRealScalar(hcu->mutable_pwr_max_regen(), "Max regenerate power", "", "w", 30000);
  tx_car::setRealScalar(hcu->mutable_pwr_max_system(), "Max system power", "", "w", 165000);
  tx_car::setRealScalar(hcu->mutable_pwr_max_system(), "time const of engine avaliable power", "", "s", 0.1);
  tx_car::setRealScalar(hcu->mutable_hev_4wd_front_pwr_ratio(),
                        "ratio of front power ratio, only works when P4 Motor enabled", "", "N/A", 0.5);
  tx_car::setRealScalar(hcu->mutable_soc_start_charging(), "soc when start charging battery", "", "%", 25);
  tx_car::setRealScalar(hcu->mutable_soc_end_charging(), "soc when stop charging battery", "", "%", 70);
  tx_car::setRealScalar(hcu->mutable_soc_min_required(), "minium required soc to work in EV or HEV modes", "", "%", 10);

  // optimal engine power
  double eng_optimal_spd_rpm[] = {0, 400, 800, 1200, 1600, 2000, 2400, 2800, 3200, 3600, 4000, 5000, 6000};
  double eng_optimal_pwr_kw[] = {0, 0, 5, 7, 10, 14, 20, 27, 35, 44, 54, 65, 77};
  tx_car::set1DMapInfo(hcu->mutable_optimal_engine_pwr(), "optimal engine power vs speed",
                       "optimal engine power vs speed");
  tx_car::setRealAxis(hcu->mutable_optimal_engine_pwr()->mutable_u0_axis(), "engine speed", "", "rpm",
                      eng_optimal_spd_rpm, 13);
  tx_car::setRealAxis(hcu->mutable_optimal_engine_pwr()->mutable_y0_axis(), "engine power",
                      "optimal engine power at specific engine speed", "kw", eng_optimal_pwr_kw, 13);

  // inverse optimal engine power
  double inv_eng_optimal_spd_rpm[] = {400, 1100, 1600, 2200, 2600, 3000, 3200, 3400, 3600, 3800, 4000};
  double inv_eng_optimal_pwr_kw[] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
}
