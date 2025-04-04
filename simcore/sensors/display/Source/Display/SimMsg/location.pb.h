// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: location.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_location_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_location_2eproto

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
#include "basic.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_location_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_location_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_location_2eproto;
namespace sim_msg {
class Location;
class LocationDefaultTypeInternal;
extern LocationDefaultTypeInternal _Location_default_instance_;
class Location_EgoLane;
class Location_EgoLaneDefaultTypeInternal;
extern Location_EgoLaneDefaultTypeInternal _Location_EgoLane_default_instance_;
}  // namespace sim_msg
PROTOBUF_NAMESPACE_OPEN
template<> ::sim_msg::Location* Arena::CreateMaybeMessage<::sim_msg::Location>(Arena*);
template<> ::sim_msg::Location_EgoLane* Arena::CreateMaybeMessage<::sim_msg::Location_EgoLane>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sim_msg {

// ===================================================================

class Location_EgoLane :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Location.EgoLane) */ {
 public:
  Location_EgoLane();
  virtual ~Location_EgoLane();

  Location_EgoLane(const Location_EgoLane& from);
  Location_EgoLane(Location_EgoLane&& from) noexcept
    : Location_EgoLane() {
    *this = ::std::move(from);
  }

  inline Location_EgoLane& operator=(const Location_EgoLane& from) {
    CopyFrom(from);
    return *this;
  }
  inline Location_EgoLane& operator=(Location_EgoLane&& from) noexcept {
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
  static const Location_EgoLane& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Location_EgoLane* internal_default_instance() {
    return reinterpret_cast<const Location_EgoLane*>(
               &_Location_EgoLane_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Location_EgoLane& a, Location_EgoLane& b) {
    a.Swap(&b);
  }
  inline void Swap(Location_EgoLane* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Location_EgoLane* New() const final {
    return CreateMaybeMessage<Location_EgoLane>(nullptr);
  }

  Location_EgoLane* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Location_EgoLane>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Location_EgoLane& from);
  void MergeFrom(const Location_EgoLane& from);
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
  void InternalSwap(Location_EgoLane* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Location.EgoLane";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_location_2eproto);
    return ::descriptor_table_location_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLanepkidFieldNumber = 1,
    kSectionpkidFieldNumber = 2,
    kRoadpkidFieldNumber = 3,
    kDist2RefLineFieldNumber = 4,
  };
  // int64 lanepkid = 1;
  void clear_lanepkid();
  ::PROTOBUF_NAMESPACE_ID::int64 lanepkid() const;
  void set_lanepkid(::PROTOBUF_NAMESPACE_ID::int64 value);

  // uint64 sectionpkid = 2;
  void clear_sectionpkid();
  ::PROTOBUF_NAMESPACE_ID::uint64 sectionpkid() const;
  void set_sectionpkid(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // uint64 roadpkid = 3;
  void clear_roadpkid();
  ::PROTOBUF_NAMESPACE_ID::uint64 roadpkid() const;
  void set_roadpkid(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // double dist_2_ref_line = 4;
  void clear_dist_2_ref_line();
  double dist_2_ref_line() const;
  void set_dist_2_ref_line(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.Location.EgoLane)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int64 lanepkid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 sectionpkid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 roadpkid_;
  double dist_2_ref_line_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_location_2eproto;
};
// -------------------------------------------------------------------

class Location :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Location) */ {
 public:
  Location();
  virtual ~Location();

  Location(const Location& from);
  Location(Location&& from) noexcept
    : Location() {
    *this = ::std::move(from);
  }

  inline Location& operator=(const Location& from) {
    CopyFrom(from);
    return *this;
  }
  inline Location& operator=(Location&& from) noexcept {
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
  static const Location& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Location* internal_default_instance() {
    return reinterpret_cast<const Location*>(
               &_Location_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Location& a, Location& b) {
    a.Swap(&b);
  }
  inline void Swap(Location* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Location* New() const final {
    return CreateMaybeMessage<Location>(nullptr);
  }

  Location* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Location>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Location& from);
  void MergeFrom(const Location& from);
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
  void InternalSwap(Location* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Location";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_location_2eproto);
    return ::descriptor_table_location_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Location_EgoLane EgoLane;

  // accessors -------------------------------------------------------

  enum : int {
    kPositionFieldNumber = 2,
    kVelocityFieldNumber = 3,
    kAngularFieldNumber = 4,
    kRpyFieldNumber = 5,
    kAccelerationFieldNumber = 6,
    kEgoLaneFieldNumber = 7,
    kTFieldNumber = 1,
  };
  // .sim_msg.Vec3 position = 2;
  bool has_position() const;
  void clear_position();
  const ::sim_msg::Vec3& position() const;
  ::sim_msg::Vec3* release_position();
  ::sim_msg::Vec3* mutable_position();
  void set_allocated_position(::sim_msg::Vec3* position);

  // .sim_msg.Vec3 velocity = 3;
  bool has_velocity() const;
  void clear_velocity();
  const ::sim_msg::Vec3& velocity() const;
  ::sim_msg::Vec3* release_velocity();
  ::sim_msg::Vec3* mutable_velocity();
  void set_allocated_velocity(::sim_msg::Vec3* velocity);

  // .sim_msg.Vec3 angular = 4;
  bool has_angular() const;
  void clear_angular();
  const ::sim_msg::Vec3& angular() const;
  ::sim_msg::Vec3* release_angular();
  ::sim_msg::Vec3* mutable_angular();
  void set_allocated_angular(::sim_msg::Vec3* angular);

  // .sim_msg.Vec3 rpy = 5;
  bool has_rpy() const;
  void clear_rpy();
  const ::sim_msg::Vec3& rpy() const;
  ::sim_msg::Vec3* release_rpy();
  ::sim_msg::Vec3* mutable_rpy();
  void set_allocated_rpy(::sim_msg::Vec3* rpy);

  // .sim_msg.Vec3 acceleration = 6;
  bool has_acceleration() const;
  void clear_acceleration();
  const ::sim_msg::Vec3& acceleration() const;
  ::sim_msg::Vec3* release_acceleration();
  ::sim_msg::Vec3* mutable_acceleration();
  void set_allocated_acceleration(::sim_msg::Vec3* acceleration);

  // .sim_msg.Location.EgoLane ego_lane = 7;
  bool has_ego_lane() const;
  void clear_ego_lane();
  const ::sim_msg::Location_EgoLane& ego_lane() const;
  ::sim_msg::Location_EgoLane* release_ego_lane();
  ::sim_msg::Location_EgoLane* mutable_ego_lane();
  void set_allocated_ego_lane(::sim_msg::Location_EgoLane* ego_lane);

  // double t = 1;
  void clear_t();
  double t() const;
  void set_t(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.Location)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::sim_msg::Vec3* position_;
  ::sim_msg::Vec3* velocity_;
  ::sim_msg::Vec3* angular_;
  ::sim_msg::Vec3* rpy_;
  ::sim_msg::Vec3* acceleration_;
  ::sim_msg::Location_EgoLane* ego_lane_;
  double t_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_location_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Location_EgoLane

// int64 lanepkid = 1;
inline void Location_EgoLane::clear_lanepkid() {
  lanepkid_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Location_EgoLane::lanepkid() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.lanepkid)
  return lanepkid_;
}
inline void Location_EgoLane::set_lanepkid(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  lanepkid_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.lanepkid)
}

// uint64 sectionpkid = 2;
inline void Location_EgoLane::clear_sectionpkid() {
  sectionpkid_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Location_EgoLane::sectionpkid() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.sectionpkid)
  return sectionpkid_;
}
inline void Location_EgoLane::set_sectionpkid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  sectionpkid_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.sectionpkid)
}

// uint64 roadpkid = 3;
inline void Location_EgoLane::clear_roadpkid() {
  roadpkid_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Location_EgoLane::roadpkid() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.roadpkid)
  return roadpkid_;
}
inline void Location_EgoLane::set_roadpkid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  roadpkid_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.roadpkid)
}

// double dist_2_ref_line = 4;
inline void Location_EgoLane::clear_dist_2_ref_line() {
  dist_2_ref_line_ = 0;
}
inline double Location_EgoLane::dist_2_ref_line() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.dist_2_ref_line)
  return dist_2_ref_line_;
}
inline void Location_EgoLane::set_dist_2_ref_line(double value) {
  
  dist_2_ref_line_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.dist_2_ref_line)
}

// -------------------------------------------------------------------

// Location

// double t = 1;
inline void Location::clear_t() {
  t_ = 0;
}
inline double Location::t() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.t)
  return t_;
}
inline void Location::set_t(double value) {
  
  t_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.t)
}

// .sim_msg.Vec3 position = 2;
inline bool Location::has_position() const {
  return this != internal_default_instance() && position_ != nullptr;
}
inline const ::sim_msg::Vec3& Location::position() const {
  const ::sim_msg::Vec3* p = position_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.position)
  return p != nullptr ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_position() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.position)
  
  ::sim_msg::Vec3* temp = position_;
  position_ = nullptr;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_position() {
  
  if (position_ == nullptr) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    position_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.position)
  return position_;
}
inline void Location::set_allocated_position(::sim_msg::Vec3* position) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_);
  }
  if (position) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      position = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.position)
}

// .sim_msg.Vec3 velocity = 3;
inline bool Location::has_velocity() const {
  return this != internal_default_instance() && velocity_ != nullptr;
}
inline const ::sim_msg::Vec3& Location::velocity() const {
  const ::sim_msg::Vec3* p = velocity_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.velocity)
  return p != nullptr ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_velocity() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.velocity)
  
  ::sim_msg::Vec3* temp = velocity_;
  velocity_ = nullptr;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_velocity() {
  
  if (velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.velocity)
  return velocity_;
}
inline void Location::set_allocated_velocity(::sim_msg::Vec3* velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(velocity_);
  }
  if (velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, velocity, submessage_arena);
    }
    
  } else {
    
  }
  velocity_ = velocity;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.velocity)
}

// .sim_msg.Vec3 angular = 4;
inline bool Location::has_angular() const {
  return this != internal_default_instance() && angular_ != nullptr;
}
inline const ::sim_msg::Vec3& Location::angular() const {
  const ::sim_msg::Vec3* p = angular_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.angular)
  return p != nullptr ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_angular() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.angular)
  
  ::sim_msg::Vec3* temp = angular_;
  angular_ = nullptr;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_angular() {
  
  if (angular_ == nullptr) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    angular_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.angular)
  return angular_;
}
inline void Location::set_allocated_angular(::sim_msg::Vec3* angular) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(angular_);
  }
  if (angular) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      angular = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, angular, submessage_arena);
    }
    
  } else {
    
  }
  angular_ = angular;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.angular)
}

// .sim_msg.Vec3 rpy = 5;
inline bool Location::has_rpy() const {
  return this != internal_default_instance() && rpy_ != nullptr;
}
inline const ::sim_msg::Vec3& Location::rpy() const {
  const ::sim_msg::Vec3* p = rpy_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.rpy)
  return p != nullptr ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_rpy() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.rpy)
  
  ::sim_msg::Vec3* temp = rpy_;
  rpy_ = nullptr;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_rpy() {
  
  if (rpy_ == nullptr) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    rpy_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.rpy)
  return rpy_;
}
inline void Location::set_allocated_rpy(::sim_msg::Vec3* rpy) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(rpy_);
  }
  if (rpy) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      rpy = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rpy, submessage_arena);
    }
    
  } else {
    
  }
  rpy_ = rpy;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.rpy)
}

// .sim_msg.Vec3 acceleration = 6;
inline bool Location::has_acceleration() const {
  return this != internal_default_instance() && acceleration_ != nullptr;
}
inline const ::sim_msg::Vec3& Location::acceleration() const {
  const ::sim_msg::Vec3* p = acceleration_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.acceleration)
  return p != nullptr ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_acceleration() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.acceleration)
  
  ::sim_msg::Vec3* temp = acceleration_;
  acceleration_ = nullptr;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_acceleration() {
  
  if (acceleration_ == nullptr) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    acceleration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.acceleration)
  return acceleration_;
}
inline void Location::set_allocated_acceleration(::sim_msg::Vec3* acceleration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(acceleration_);
  }
  if (acceleration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      acceleration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, acceleration, submessage_arena);
    }
    
  } else {
    
  }
  acceleration_ = acceleration;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.acceleration)
}

// .sim_msg.Location.EgoLane ego_lane = 7;
inline bool Location::has_ego_lane() const {
  return this != internal_default_instance() && ego_lane_ != nullptr;
}
inline void Location::clear_ego_lane() {
  if (GetArenaNoVirtual() == nullptr && ego_lane_ != nullptr) {
    delete ego_lane_;
  }
  ego_lane_ = nullptr;
}
inline const ::sim_msg::Location_EgoLane& Location::ego_lane() const {
  const ::sim_msg::Location_EgoLane* p = ego_lane_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.ego_lane)
  return p != nullptr ? *p : *reinterpret_cast<const ::sim_msg::Location_EgoLane*>(
      &::sim_msg::_Location_EgoLane_default_instance_);
}
inline ::sim_msg::Location_EgoLane* Location::release_ego_lane() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.ego_lane)
  
  ::sim_msg::Location_EgoLane* temp = ego_lane_;
  ego_lane_ = nullptr;
  return temp;
}
inline ::sim_msg::Location_EgoLane* Location::mutable_ego_lane() {
  
  if (ego_lane_ == nullptr) {
    auto* p = CreateMaybeMessage<::sim_msg::Location_EgoLane>(GetArenaNoVirtual());
    ego_lane_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.ego_lane)
  return ego_lane_;
}
inline void Location::set_allocated_ego_lane(::sim_msg::Location_EgoLane* ego_lane) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete ego_lane_;
  }
  if (ego_lane) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ego_lane = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ego_lane, submessage_arena);
    }
    
  } else {
    
  }
  ego_lane_ = ego_lane;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.ego_lane)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_location_2eproto
