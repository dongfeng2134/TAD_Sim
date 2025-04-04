// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_version.proto
#pragma warning (disable : 4125)

#include "osi_version.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_osi_5fversion_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InterfaceVersion_osi_5fversion_2eproto;
namespace osi3 {
class InterfaceVersionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<InterfaceVersion> _instance;
} _InterfaceVersion_default_instance_;
}  // namespace osi3
static void InitDefaultsscc_info_InterfaceVersion_osi_5fversion_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::osi3::_InterfaceVersion_default_instance_;
    new (ptr) ::osi3::InterfaceVersion();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::osi3::InterfaceVersion::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InterfaceVersion_osi_5fversion_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_InterfaceVersion_osi_5fversion_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_osi_5fversion_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_osi_5fversion_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_osi_5fversion_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_osi_5fversion_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, version_major_),
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, version_minor_),
  PROTOBUF_FIELD_OFFSET(::osi3::InterfaceVersion, version_patch_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::osi3::InterfaceVersion)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_InterfaceVersion_default_instance_),
};

const char descriptor_table_protodef_osi_5fversion_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021osi_version.proto\022\004osi3\032 google/protob"
  "uf/descriptor.proto\"W\n\020InterfaceVersion\022"
  "\025\n\rversion_major\030\001 \001(\r\022\025\n\rversion_minor\030"
  "\002 \001(\r\022\025\n\rversion_patch\030\003 \001(\r:Y\n\031current_"
  "interface_version\022\034.google.protobuf.File"
  "Options\030\350\370\004 \001(\0132\026.osi3.InterfaceVersionB"
  "\024H\001\302\306\'\002\010\003\302\306\'\002\020\005\302\306\'\002\030\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_osi_5fversion_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_osi_5fversion_2eproto_sccs[1] = {
  &scc_info_InterfaceVersion_osi_5fversion_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_osi_5fversion_2eproto_once;
static bool descriptor_table_osi_5fversion_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_osi_5fversion_2eproto = {
  &descriptor_table_osi_5fversion_2eproto_initialized, descriptor_table_protodef_osi_5fversion_2eproto, "osi_version.proto", 269,
  &descriptor_table_osi_5fversion_2eproto_once, descriptor_table_osi_5fversion_2eproto_sccs, descriptor_table_osi_5fversion_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_osi_5fversion_2eproto::offsets,
  file_level_metadata_osi_5fversion_2eproto, 1, file_level_enum_descriptors_osi_5fversion_2eproto, file_level_service_descriptors_osi_5fversion_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_osi_5fversion_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_osi_5fversion_2eproto), true);
namespace osi3 {

// ===================================================================

void InterfaceVersion::InitAsDefaultInstance() {
}
class InterfaceVersion::_Internal {
 public:
};

InterfaceVersion::InterfaceVersion()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:osi3.InterfaceVersion)
}
InterfaceVersion::InterfaceVersion(const InterfaceVersion& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&version_major_, &from.version_major_,
    static_cast<size_t>(reinterpret_cast<char*>(&version_patch_) -
    reinterpret_cast<char*>(&version_major_)) + sizeof(version_patch_));
  // @@protoc_insertion_point(copy_constructor:osi3.InterfaceVersion)
}

void InterfaceVersion::SharedCtor() {
  ::memset(&version_major_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_patch_) -
      reinterpret_cast<char*>(&version_major_)) + sizeof(version_patch_));
}

InterfaceVersion::~InterfaceVersion() {
  // @@protoc_insertion_point(destructor:osi3.InterfaceVersion)
  SharedDtor();
}

void InterfaceVersion::SharedDtor() {
}

void InterfaceVersion::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InterfaceVersion& InterfaceVersion::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_InterfaceVersion_osi_5fversion_2eproto.base);
  return *internal_default_instance();
}


void InterfaceVersion::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.InterfaceVersion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&version_major_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_patch_) -
      reinterpret_cast<char*>(&version_major_)) + sizeof(version_patch_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* InterfaceVersion::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 version_major = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          version_major_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 version_minor = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          version_minor_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 version_patch = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          version_patch_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool InterfaceVersion::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:osi3.InterfaceVersion)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 version_major = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_major_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 version_minor = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_minor_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 version_patch = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_patch_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:osi3.InterfaceVersion)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:osi3.InterfaceVersion)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void InterfaceVersion::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:osi3.InterfaceVersion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 version_major = 1;
  if (this->version_major() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(1, this->version_major(), output);
  }

  // uint32 version_minor = 2;
  if (this->version_minor() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(2, this->version_minor(), output);
  }

  // uint32 version_patch = 3;
  if (this->version_patch() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(3, this->version_patch(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:osi3.InterfaceVersion)
}

::PROTOBUF_NAMESPACE_ID::uint8* InterfaceVersion::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.InterfaceVersion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 version_major = 1;
  if (this->version_major() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->version_major(), target);
  }

  // uint32 version_minor = 2;
  if (this->version_minor() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->version_minor(), target);
  }

  // uint32 version_patch = 3;
  if (this->version_patch() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->version_patch(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.InterfaceVersion)
  return target;
}

size_t InterfaceVersion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.InterfaceVersion)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 version_major = 1;
  if (this->version_major() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->version_major());
  }

  // uint32 version_minor = 2;
  if (this->version_minor() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->version_minor());
  }

  // uint32 version_patch = 3;
  if (this->version_patch() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->version_patch());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InterfaceVersion::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:osi3.InterfaceVersion)
  GOOGLE_DCHECK_NE(&from, this);
  const InterfaceVersion* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<InterfaceVersion>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:osi3.InterfaceVersion)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:osi3.InterfaceVersion)
    MergeFrom(*source);
  }
}

void InterfaceVersion::MergeFrom(const InterfaceVersion& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.InterfaceVersion)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.version_major() != 0) {
    set_version_major(from.version_major());
  }
  if (from.version_minor() != 0) {
    set_version_minor(from.version_minor());
  }
  if (from.version_patch() != 0) {
    set_version_patch(from.version_patch());
  }
}

void InterfaceVersion::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:osi3.InterfaceVersion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InterfaceVersion::CopyFrom(const InterfaceVersion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.InterfaceVersion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InterfaceVersion::IsInitialized() const {
  return true;
}

void InterfaceVersion::InternalSwap(InterfaceVersion* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(version_major_, other->version_major_);
  swap(version_minor_, other->version_minor_);
  swap(version_patch_, other->version_patch_);
}

::PROTOBUF_NAMESPACE_ID::Metadata InterfaceVersion::GetMetadata() const {
  return GetMetadataStatic();
}

::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::osi3::InterfaceVersion >, 11, false >
  current_interface_version(kCurrentInterfaceVersionFieldNumber, *::osi3::InterfaceVersion::internal_default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::InterfaceVersion* Arena::CreateMaybeMessage< ::osi3::InterfaceVersion >(Arena* arena) {
  return Arena::CreateInternal< ::osi3::InterfaceVersion >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
