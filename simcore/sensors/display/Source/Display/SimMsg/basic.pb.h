// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: basic.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_basic_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_basic_2eproto

#pragma warning(disable : 4946) 

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
#define PROTOBUF_INTERNAL_EXPORT_basic_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_basic_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_basic_2eproto;
namespace sim_msg {
class Vec2;
class Vec2DefaultTypeInternal;
extern Vec2DefaultTypeInternal _Vec2_default_instance_;
class Vec3;
class Vec3DefaultTypeInternal;
extern Vec3DefaultTypeInternal _Vec3_default_instance_;
class Vec4;
class Vec4DefaultTypeInternal;
extern Vec4DefaultTypeInternal _Vec4_default_instance_;
}  // namespace sim_msg
PROTOBUF_NAMESPACE_OPEN
template<> ::sim_msg::Vec2* Arena::CreateMaybeMessage<::sim_msg::Vec2>(Arena*);
template<> ::sim_msg::Vec3* Arena::CreateMaybeMessage<::sim_msg::Vec3>(Arena*);
template<> ::sim_msg::Vec4* Arena::CreateMaybeMessage<::sim_msg::Vec4>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sim_msg {

// ===================================================================

class Vec2 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Vec2) */ {
 public:
  Vec2();
  virtual ~Vec2();

  Vec2(const Vec2& from);
  Vec2(Vec2&& from) noexcept
    : Vec2() {
    *this = ::std::move(from);
  }

  inline Vec2& operator=(const Vec2& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vec2& operator=(Vec2&& from) noexcept {
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
  static const Vec2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vec2* internal_default_instance() {
    return reinterpret_cast<const Vec2*>(
               &_Vec2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vec2& a, Vec2& b) {
    a.Swap(&b);
  }
  inline void Swap(Vec2* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vec2* New() const final {
    return CreateMaybeMessage<Vec2>(nullptr);
  }

  Vec2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vec2>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vec2& from);
  void MergeFrom(const Vec2& from);
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
  void InternalSwap(Vec2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Vec2";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_basic_2eproto);
    return ::descriptor_table_basic_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.Vec2)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_basic_2eproto;
};
// -------------------------------------------------------------------

class Vec3 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Vec3) */ {
 public:
  Vec3();
  virtual ~Vec3();

  Vec3(const Vec3& from);
  Vec3(Vec3&& from) noexcept
    : Vec3() {
    *this = ::std::move(from);
  }

  inline Vec3& operator=(const Vec3& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vec3& operator=(Vec3&& from) noexcept {
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
  static const Vec3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vec3* internal_default_instance() {
    return reinterpret_cast<const Vec3*>(
               &_Vec3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Vec3& a, Vec3& b) {
    a.Swap(&b);
  }
  inline void Swap(Vec3* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vec3* New() const final {
    return CreateMaybeMessage<Vec3>(nullptr);
  }

  Vec3* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vec3>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vec3& from);
  void MergeFrom(const Vec3& from);
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
  void InternalSwap(Vec3* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Vec3";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_basic_2eproto);
    return ::descriptor_table_basic_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);

  // double z = 3;
  void clear_z();
  double z() const;
  void set_z(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.Vec3)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  double z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_basic_2eproto;
};
// -------------------------------------------------------------------

class Vec4 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.Vec4) */ {
 public:
  Vec4();
  virtual ~Vec4();

  Vec4(const Vec4& from);
  Vec4(Vec4&& from) noexcept
    : Vec4() {
    *this = ::std::move(from);
  }

  inline Vec4& operator=(const Vec4& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vec4& operator=(Vec4&& from) noexcept {
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
  static const Vec4& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vec4* internal_default_instance() {
    return reinterpret_cast<const Vec4*>(
               &_Vec4_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Vec4& a, Vec4& b) {
    a.Swap(&b);
  }
  inline void Swap(Vec4* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vec4* New() const final {
    return CreateMaybeMessage<Vec4>(nullptr);
  }

  Vec4* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vec4>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vec4& from);
  void MergeFrom(const Vec4& from);
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
  void InternalSwap(Vec4* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.Vec4";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_basic_2eproto);
    return ::descriptor_table_basic_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
    kWFieldNumber = 4,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);

  // double z = 3;
  void clear_z();
  double z() const;
  void set_z(double value);

  // double w = 4;
  void clear_w();
  double w() const;
  void set_w(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.Vec4)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  double z_;
  double w_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_basic_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vec2

// double x = 1;
inline void Vec2::clear_x() {
  x_ = 0;
}
inline double Vec2::x() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec2.x)
  return x_;
}
inline void Vec2::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec2.x)
}

// double y = 2;
inline void Vec2::clear_y() {
  y_ = 0;
}
inline double Vec2::y() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec2.y)
  return y_;
}
inline void Vec2::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec2.y)
}

// -------------------------------------------------------------------

// Vec3

// double x = 1;
inline void Vec3::clear_x() {
  x_ = 0;
}
inline double Vec3::x() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec3.x)
  return x_;
}
inline void Vec3::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec3.x)
}

// double y = 2;
inline void Vec3::clear_y() {
  y_ = 0;
}
inline double Vec3::y() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec3.y)
  return y_;
}
inline void Vec3::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec3.y)
}

// double z = 3;
inline void Vec3::clear_z() {
  z_ = 0;
}
inline double Vec3::z() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec3.z)
  return z_;
}
inline void Vec3::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec3.z)
}

// -------------------------------------------------------------------

// Vec4

// double x = 1;
inline void Vec4::clear_x() {
  x_ = 0;
}
inline double Vec4::x() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec4.x)
  return x_;
}
inline void Vec4::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec4.x)
}

// double y = 2;
inline void Vec4::clear_y() {
  y_ = 0;
}
inline double Vec4::y() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec4.y)
  return y_;
}
inline void Vec4::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec4.y)
}

// double z = 3;
inline void Vec4::clear_z() {
  z_ = 0;
}
inline double Vec4::z() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec4.z)
  return z_;
}
inline void Vec4::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec4.z)
}

// double w = 4;
inline void Vec4::clear_w() {
  w_ = 0;
}
inline double Vec4::w() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec4.w)
  return w_;
}
inline void Vec4::set_w(double value) {
  
  w_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec4.w)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_basic_2eproto