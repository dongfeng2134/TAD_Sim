// Copyright 2024 Tencent Inc. All rights reserved.
//

#pragma once

#include <map>
#include <memory>
#include <string>

#include "c_terrain_interface.h"
#include "txcar_base.h"
#include "txcar_math.h"

#include "car.pb.h"
#include "location.pb.h"
#include "vehicle_geometry.pb.h"

// forward declaration of input and output of car model
struct ExtU_TxCar_Hybrid_T;
struct ExtY_TxCar_Hybrid_T;

namespace tx_car {
// global steer ratio
extern double constSteerRatio;
extern const double constFlipSteer;
extern const int constFlipTerrain;

// gravity
extern const double constGravity;

class TxCarImp_Hybrid;
using TxCarImp_HybridPtr = std::shared_ptr<TxCarImp_Hybrid>;

/**
 * @brief txcar implementation
 */
class TxCarImp_Hybrid final : public TxCarBase {
 public:
  TxCarImp_Hybrid();
  virtual ~TxCarImp_Hybrid();

 public:
  virtual void init(const TxCarInit &car_init) override;
  virtual void step(double t_ms) override;
  virtual void stop() override;

 public:
  // set model init state
  void setCarInit(const TxCarInit &car_init);

  // mdl valid check
  bool isModelValid();

  // get/set protobuf message
  std::string getMsgByTopic(const std::string &topic);
  void setMsgByTopic(const std::string &topic, const std::string &payload);

 protected:
  // model manager
  void releaseMDL();
  void initMDL();

  // msg convert
  void controlToVehicle(ExtU_TxCar_Hybrid_T &car_u, const std::string &ctrl_payload);
  void controlV2ToVehicle(ExtU_TxCar_Hybrid_T &car_u, const std::string &ctrl_payload);
  void vehicleToChassis(double t_ms, const ExtU_TxCar_Hybrid_T &car_u, const ExtY_TxCar_Hybrid_T &car_y,
                        std::string &chassis_payload);
  void vehicleToLocation(double t_ms, const ExtY_TxCar_Hybrid_T &car_y, std::string &loc_payload);

  // reset terrain
  void resetTerrain();

  // reset vehicle
  void resetVehicle();

  // get output point offset from CG
  Eigen::Vector3d getOffsetFromCG();

  /*
      calculate z of wheels
      flu_inertia_pos: body position in FLU intertia coordinate
      flu_intertia_rot: body rot in FLU intertia coordinate
      l_offset: longititude offset in FLU body frame
      w_offset: lateral offset in FLU body frame
  */
  Eigen::Vector3d calWheelsZ(const Eigen::Vector3d &FLU_Pos, const Eigen::Matrix3d &FLU_Rot, double l_offset,
                             double w_offset, double &mu);

 private:
  // vehicle parameter
  tx_car::car mCarParam;

  // vehicle init
  TxCarInit m_carParam;

  // map origin
  Point3d mMapOrigin;

  // protobuf messages
  std::map<std::string, std::string> mMsgs;

  // terrain
  terrain::CTerrainInterface mTerrain;

  // vehicle geometry combination and start location
  sim_msg::VehicleGeometoryList m_geometry_comb;
  sim_msg::Location mStartLocation;

  // math
  TxCarMath m_math;

  // ego geometry and rotation
  double mCgToFrontAxle, mCgToRearAxle, mCgHeight, mWheelBase, mHalfTrack, m_mu,
      mWheelRadius;  // wheel base, track width, mu
  Eigen::Matrix3d m_ROT_ego_ENU;
  Eigen::Vector3d m_Pos_ego_ENU;

  // max brake pressure, unit Pa
  double mMaxBrakePressure;

  // calculate acc when speed is extremely low ( less than 1.0 m/s )
  Eigen::Vector3d mPreVelocity;

  // control payload monitor
  MsgWatchDog m_ctrl_watch_dog, m_ctrlV2_watch_dog;
};
}  // namespace tx_car
