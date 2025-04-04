// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trajectory.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_trajectory_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_trajectory_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_trajectory_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_trajectory_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_trajectory_2eproto;
namespace sim_msg {
class Prediction;
class PredictionDefaultTypeInternal;
extern PredictionDefaultTypeInternal _Prediction_default_instance_;
class Predictions;
class PredictionsDefaultTypeInternal;
extern PredictionsDefaultTypeInternal _Predictions_default_instance_;
class Trajectory;
class TrajectoryDefaultTypeInternal;
extern TrajectoryDefaultTypeInternal _Trajectory_default_instance_;
class TrajectoryPoint;
class TrajectoryPointDefaultTypeInternal;
extern TrajectoryPointDefaultTypeInternal _TrajectoryPoint_default_instance_;
}  // namespace sim_msg
PROTOBUF_NAMESPACE_OPEN
template<> ::sim_msg::Prediction* Arena::CreateMaybeMessage<::sim_msg::Prediction>(Arena*);
template<> ::sim_msg::Predictions* Arena::CreateMaybeMessage<::sim_msg::Predictions>(Arena*);
template<> ::sim_msg::Trajectory* Arena::CreateMaybeMessage<::sim_msg::Trajectory>(Arena*);
template<> ::sim_msg::TrajectoryPoint* Arena::CreateMaybeMessage<::sim_msg::TrajectoryPoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sim_msg {

// ===================================================================

class TrajectoryPoint :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.TrajectoryPoint) */ {
 public:
  TrajectoryPoint();
  virtual ~TrajectoryPoint();

  TrajectoryPoint(const TrajectoryPoint& from);
  TrajectoryPoint(TrajectoryPoint&& from) noexcept
    : TrajectoryPoint() {
    *this = ::std::move(from);
  }

  inline TrajectoryPoint& operator=(const TrajectoryPoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrajectoryPoint& operator=(TrajectoryPoint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TrajectoryPoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TrajectoryPoint* internal_default_instance() {
    return reinterpret_cast<const TrajectoryPoint*>(
               &_TrajectoryPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TrajectoryPoint& a, TrajectoryPoint& b) {
    a.Swap(&b);
  }
  inline void Swap(TrajectoryPoint* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TrajectoryPoint* New() const final {
    return CreateMaybeMessage<TrajectoryPoint>(nullptr);
  }

  TrajectoryPoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TrajectoryPoint>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TrajectoryPoint& from);
  void MergeFrom(const TrajectoryPoint& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TrajectoryPoint* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.TrajectoryPoint";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trajectory_2eproto);
    return ::descriptor_table_trajectory_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kTFieldNumber = 3,
    kVFieldNumber = 4,
    kThetaFieldNumber = 5,
    kKappaFieldNumber = 6,
    kSFieldNumber = 7,
    kAFieldNumber = 8,
    kZFieldNumber = 9,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);

  // double t = 3;
  void clear_t();
  double t() const;
  void set_t(double value);

  // double v = 4;
  void clear_v();
  double v() const;
  void set_v(double value);

  // double theta = 5;
  void clear_theta();
  double theta() const;
  void set_theta(double value);

  // double kappa = 6;
  void clear_kappa();
  double kappa() const;
  void set_kappa(double value);

  // double s = 7;
  void clear_s();
  double s() const;
  void set_s(double value);

  // double a = 8;
  void clear_a();
  double a() const;
  void set_a(double value);

  // double z = 9;
  void clear_z();
  double z() const;
  void set_z(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.TrajectoryPoint)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  double t_;
  double v_;
  double theta_;
  double kappa_;
  double s_;
  double a_;
  double z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trajectory_2eproto;
};
// -------------------------------------------------------------------

class Trajectory :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Trajectory) */ {
 public:
  Trajectory();
  virtual ~Trajectory();

  Trajectory(const Trajectory& from);
  Trajectory(Trajectory&& from) noexcept
    : Trajectory() {
    *this = ::std::move(from);
  }

  inline Trajectory& operator=(const Trajectory& from) {
    CopyFrom(from);
    return *this;
  }
  inline Trajectory& operator=(Trajectory&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Trajectory& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Trajectory* internal_default_instance() {
    return reinterpret_cast<const Trajectory*>(
               &_Trajectory_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Trajectory& a, Trajectory& b) {
    a.Swap(&b);
  }
  inline void Swap(Trajectory* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Trajectory* New() const final {
    return CreateMaybeMessage<Trajectory>(nullptr);
  }

  Trajectory* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Trajectory>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Trajectory& from);
  void MergeFrom(const Trajectory& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Trajectory* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Trajectory";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trajectory_2eproto);
    return ::descriptor_table_trajectory_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointFieldNumber = 1,
    kAFieldNumber = 2,
    kTypeFieldNumber = 3,
    kFlagFieldNumber = 4,
  };
  // repeated .sim_msg.TrajectoryPoint point = 1;
  int point_size() const;
  void clear_point();
  ::sim_msg::TrajectoryPoint* mutable_point(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >*
      mutable_point();
  const ::sim_msg::TrajectoryPoint& point(int index) const;
  ::sim_msg::TrajectoryPoint* add_point();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >&
      point() const;

  // float a = 2;
  void clear_a();
  float a() const;
  void set_a(float value);

  // int32 type = 3;
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::int32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 flag = 4;
  void clear_flag();
  ::PROTOBUF_NAMESPACE_ID::int32 flag() const;
  void set_flag(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:sim_msg.Trajectory)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint > point_;
  float a_;
  ::PROTOBUF_NAMESPACE_ID::int32 type_;
  ::PROTOBUF_NAMESPACE_ID::int32 flag_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trajectory_2eproto;
};
// -------------------------------------------------------------------

class Prediction :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Prediction) */ {
 public:
  Prediction();
  virtual ~Prediction();

  Prediction(const Prediction& from);
  Prediction(Prediction&& from) noexcept
    : Prediction() {
    *this = ::std::move(from);
  }

  inline Prediction& operator=(const Prediction& from) {
    CopyFrom(from);
    return *this;
  }
  inline Prediction& operator=(Prediction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Prediction& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Prediction* internal_default_instance() {
    return reinterpret_cast<const Prediction*>(
               &_Prediction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Prediction& a, Prediction& b) {
    a.Swap(&b);
  }
  inline void Swap(Prediction* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Prediction* New() const final {
    return CreateMaybeMessage<Prediction>(nullptr);
  }

  Prediction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Prediction>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Prediction& from);
  void MergeFrom(const Prediction& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Prediction* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Prediction";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trajectory_2eproto);
    return ::descriptor_table_trajectory_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // repeated .sim_msg.TrajectoryPoint point = 2;
  int point_size() const;
  void clear_point();
  ::sim_msg::TrajectoryPoint* mutable_point(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >*
      mutable_point();
  const ::sim_msg::TrajectoryPoint& point(int index) const;
  ::sim_msg::TrajectoryPoint* add_point();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >&
      point() const;

  // int64 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int64 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:sim_msg.Prediction)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint > point_;
  ::PROTOBUF_NAMESPACE_ID::int64 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trajectory_2eproto;
};
// -------------------------------------------------------------------

class Predictions :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Predictions) */ {
 public:
  Predictions();
  virtual ~Predictions();

  Predictions(const Predictions& from);
  Predictions(Predictions&& from) noexcept
    : Predictions() {
    *this = ::std::move(from);
  }

  inline Predictions& operator=(const Predictions& from) {
    CopyFrom(from);
    return *this;
  }
  inline Predictions& operator=(Predictions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Predictions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Predictions* internal_default_instance() {
    return reinterpret_cast<const Predictions*>(
               &_Predictions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Predictions& a, Predictions& b) {
    a.Swap(&b);
  }
  inline void Swap(Predictions* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Predictions* New() const final {
    return CreateMaybeMessage<Predictions>(nullptr);
  }

  Predictions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Predictions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Predictions& from);
  void MergeFrom(const Predictions& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Predictions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Predictions";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_trajectory_2eproto);
    return ::descriptor_table_trajectory_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kObsFieldNumber = 1,
  };
  // repeated .sim_msg.Prediction obs = 1;
  int obs_size() const;
  void clear_obs();
  ::sim_msg::Prediction* mutable_obs(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Prediction >*
      mutable_obs();
  const ::sim_msg::Prediction& obs(int index) const;
  ::sim_msg::Prediction* add_obs();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Prediction >&
      obs() const;

  // @@protoc_insertion_point(class_scope:sim_msg.Predictions)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Prediction > obs_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trajectory_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrajectoryPoint

// double x = 1;
inline void TrajectoryPoint::clear_x() {
  x_ = 0;
}
inline double TrajectoryPoint::x() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.x)
  return x_;
}
inline void TrajectoryPoint::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.x)
}

// double y = 2;
inline void TrajectoryPoint::clear_y() {
  y_ = 0;
}
inline double TrajectoryPoint::y() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.y)
  return y_;
}
inline void TrajectoryPoint::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.y)
}

// double t = 3;
inline void TrajectoryPoint::clear_t() {
  t_ = 0;
}
inline double TrajectoryPoint::t() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.t)
  return t_;
}
inline void TrajectoryPoint::set_t(double value) {
  
  t_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.t)
}

// double v = 4;
inline void TrajectoryPoint::clear_v() {
  v_ = 0;
}
inline double TrajectoryPoint::v() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.v)
  return v_;
}
inline void TrajectoryPoint::set_v(double value) {
  
  v_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.v)
}

// double theta = 5;
inline void TrajectoryPoint::clear_theta() {
  theta_ = 0;
}
inline double TrajectoryPoint::theta() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.theta)
  return theta_;
}
inline void TrajectoryPoint::set_theta(double value) {
  
  theta_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.theta)
}

// double kappa = 6;
inline void TrajectoryPoint::clear_kappa() {
  kappa_ = 0;
}
inline double TrajectoryPoint::kappa() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.kappa)
  return kappa_;
}
inline void TrajectoryPoint::set_kappa(double value) {
  
  kappa_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.kappa)
}

// double s = 7;
inline void TrajectoryPoint::clear_s() {
  s_ = 0;
}
inline double TrajectoryPoint::s() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.s)
  return s_;
}
inline void TrajectoryPoint::set_s(double value) {
  
  s_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.s)
}

// double a = 8;
inline void TrajectoryPoint::clear_a() {
  a_ = 0;
}
inline double TrajectoryPoint::a() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.a)
  return a_;
}
inline void TrajectoryPoint::set_a(double value) {
  
  a_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.a)
}

// double z = 9;
inline void TrajectoryPoint::clear_z() {
  z_ = 0;
}
inline double TrajectoryPoint::z() const {
  // @@protoc_insertion_point(field_get:sim_msg.TrajectoryPoint.z)
  return z_;
}
inline void TrajectoryPoint::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.TrajectoryPoint.z)
}

// -------------------------------------------------------------------

// Trajectory

// repeated .sim_msg.TrajectoryPoint point = 1;
inline int Trajectory::point_size() const {
  return point_.size();
}
inline void Trajectory::clear_point() {
  point_.Clear();
}
inline ::sim_msg::TrajectoryPoint* Trajectory::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.Trajectory.point)
  return point_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >*
Trajectory::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.Trajectory.point)
  return &point_;
}
inline const ::sim_msg::TrajectoryPoint& Trajectory::point(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.Trajectory.point)
  return point_.Get(index);
}
inline ::sim_msg::TrajectoryPoint* Trajectory::add_point() {
  // @@protoc_insertion_point(field_add:sim_msg.Trajectory.point)
  return point_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >&
Trajectory::point() const {
  // @@protoc_insertion_point(field_list:sim_msg.Trajectory.point)
  return point_;
}

// float a = 2;
inline void Trajectory::clear_a() {
  a_ = 0;
}
inline float Trajectory::a() const {
  // @@protoc_insertion_point(field_get:sim_msg.Trajectory.a)
  return a_;
}
inline void Trajectory::set_a(float value) {
  
  a_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Trajectory.a)
}

// int32 type = 3;
inline void Trajectory::clear_type() {
  type_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Trajectory::type() const {
  // @@protoc_insertion_point(field_get:sim_msg.Trajectory.type)
  return type_;
}
inline void Trajectory::set_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Trajectory.type)
}

// int32 flag = 4;
inline void Trajectory::clear_flag() {
  flag_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Trajectory::flag() const {
  // @@protoc_insertion_point(field_get:sim_msg.Trajectory.flag)
  return flag_;
}
inline void Trajectory::set_flag(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  flag_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Trajectory.flag)
}

// -------------------------------------------------------------------

// Prediction

// int64 id = 1;
inline void Prediction::clear_id() {
  id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Prediction::id() const {
  // @@protoc_insertion_point(field_get:sim_msg.Prediction.id)
  return id_;
}
inline void Prediction::set_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Prediction.id)
}

// repeated .sim_msg.TrajectoryPoint point = 2;
inline int Prediction::point_size() const {
  return point_.size();
}
inline void Prediction::clear_point() {
  point_.Clear();
}
inline ::sim_msg::TrajectoryPoint* Prediction::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.Prediction.point)
  return point_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >*
Prediction::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.Prediction.point)
  return &point_;
}
inline const ::sim_msg::TrajectoryPoint& Prediction::point(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.Prediction.point)
  return point_.Get(index);
}
inline ::sim_msg::TrajectoryPoint* Prediction::add_point() {
  // @@protoc_insertion_point(field_add:sim_msg.Prediction.point)
  return point_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::TrajectoryPoint >&
Prediction::point() const {
  // @@protoc_insertion_point(field_list:sim_msg.Prediction.point)
  return point_;
}

// -------------------------------------------------------------------

// Predictions

// repeated .sim_msg.Prediction obs = 1;
inline int Predictions::obs_size() const {
  return obs_.size();
}
inline void Predictions::clear_obs() {
  obs_.Clear();
}
inline ::sim_msg::Prediction* Predictions::mutable_obs(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.Predictions.obs)
  return obs_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Prediction >*
Predictions::mutable_obs() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.Predictions.obs)
  return &obs_;
}
inline const ::sim_msg::Prediction& Predictions::obs(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.Predictions.obs)
  return obs_.Get(index);
}
inline ::sim_msg::Prediction* Predictions::add_obs() {
  // @@protoc_insertion_point(field_add:sim_msg.Predictions.obs)
  return obs_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Prediction >&
Predictions::obs() const {
  // @@protoc_insertion_point(field_list:sim_msg.Predictions.obs)
  return obs_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_trajectory_2eproto
