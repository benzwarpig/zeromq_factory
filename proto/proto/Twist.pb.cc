// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Twist.proto

#include "Twist.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace LSLAM {
PROTOBUF_CONSTEXPR Twist::Twist(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.linear_)*/nullptr
  , /*decltype(_impl_.angular_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TwistDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TwistDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TwistDefaultTypeInternal() {}
  union {
    Twist _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TwistDefaultTypeInternal _Twist_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_Twist_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Twist_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Twist_2eproto = nullptr;

const uint32_t TableStruct_Twist_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::Twist, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::Twist, _impl_.linear_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::Twist, _impl_.angular_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::Twist)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_Twist_default_instance_._instance,
};

const char descriptor_table_protodef_Twist_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Twist.proto\022\005LSLAM\032\016Vector3d.proto\"J\n\005"
  "Twist\022\037\n\006linear\030\001 \001(\0132\017.LSLAM.Vector3d\022 "
  "\n\007angular\030\002 \001(\0132\017.LSLAM.Vector3db\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Twist_2eproto_deps[1] = {
  &::descriptor_table_Vector3d_2eproto,
};
static ::_pbi::once_flag descriptor_table_Twist_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Twist_2eproto = {
    false, false, 120, descriptor_table_protodef_Twist_2eproto,
    "Twist.proto",
    &descriptor_table_Twist_2eproto_once, descriptor_table_Twist_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_Twist_2eproto::offsets,
    file_level_metadata_Twist_2eproto, file_level_enum_descriptors_Twist_2eproto,
    file_level_service_descriptors_Twist_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Twist_2eproto_getter() {
  return &descriptor_table_Twist_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Twist_2eproto(&descriptor_table_Twist_2eproto);
namespace LSLAM {

// ===================================================================

class Twist::_Internal {
 public:
  static const ::LSLAM::Vector3d& linear(const Twist* msg);
  static const ::LSLAM::Vector3d& angular(const Twist* msg);
};

const ::LSLAM::Vector3d&
Twist::_Internal::linear(const Twist* msg) {
  return *msg->_impl_.linear_;
}
const ::LSLAM::Vector3d&
Twist::_Internal::angular(const Twist* msg) {
  return *msg->_impl_.angular_;
}
void Twist::clear_linear() {
  if (GetArenaForAllocation() == nullptr && _impl_.linear_ != nullptr) {
    delete _impl_.linear_;
  }
  _impl_.linear_ = nullptr;
}
void Twist::clear_angular() {
  if (GetArenaForAllocation() == nullptr && _impl_.angular_ != nullptr) {
    delete _impl_.angular_;
  }
  _impl_.angular_ = nullptr;
}
Twist::Twist(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.Twist)
}
Twist::Twist(const Twist& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Twist* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.linear_){nullptr}
    , decltype(_impl_.angular_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_linear()) {
    _this->_impl_.linear_ = new ::LSLAM::Vector3d(*from._impl_.linear_);
  }
  if (from._internal_has_angular()) {
    _this->_impl_.angular_ = new ::LSLAM::Vector3d(*from._impl_.angular_);
  }
  // @@protoc_insertion_point(copy_constructor:LSLAM.Twist)
}

inline void Twist::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.linear_){nullptr}
    , decltype(_impl_.angular_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Twist::~Twist() {
  // @@protoc_insertion_point(destructor:LSLAM.Twist)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Twist::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.linear_;
  if (this != internal_default_instance()) delete _impl_.angular_;
}

void Twist::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Twist::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.Twist)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.linear_ != nullptr) {
    delete _impl_.linear_;
  }
  _impl_.linear_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.angular_ != nullptr) {
    delete _impl_.angular_;
  }
  _impl_.angular_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Twist::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .LSLAM.Vector3d linear = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.Vector3d angular = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_angular(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Twist::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.Twist)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .LSLAM.Vector3d linear = 1;
  if (this->_internal_has_linear()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::linear(this),
        _Internal::linear(this).GetCachedSize(), target, stream);
  }

  // .LSLAM.Vector3d angular = 2;
  if (this->_internal_has_angular()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::angular(this),
        _Internal::angular(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.Twist)
  return target;
}

size_t Twist::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.Twist)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .LSLAM.Vector3d linear = 1;
  if (this->_internal_has_linear()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.linear_);
  }

  // .LSLAM.Vector3d angular = 2;
  if (this->_internal_has_angular()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.angular_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Twist::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Twist::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Twist::GetClassData() const { return &_class_data_; }


void Twist::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Twist*>(&to_msg);
  auto& from = static_cast<const Twist&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.Twist)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_linear()) {
    _this->_internal_mutable_linear()->::LSLAM::Vector3d::MergeFrom(
        from._internal_linear());
  }
  if (from._internal_has_angular()) {
    _this->_internal_mutable_angular()->::LSLAM::Vector3d::MergeFrom(
        from._internal_angular());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Twist::CopyFrom(const Twist& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.Twist)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Twist::IsInitialized() const {
  return true;
}

void Twist::InternalSwap(Twist* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Twist, _impl_.angular_)
      + sizeof(Twist::_impl_.angular_)
      - PROTOBUF_FIELD_OFFSET(Twist, _impl_.linear_)>(
          reinterpret_cast<char*>(&_impl_.linear_),
          reinterpret_cast<char*>(&other->_impl_.linear_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Twist::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Twist_2eproto_getter, &descriptor_table_Twist_2eproto_once,
      file_level_metadata_Twist_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::Twist*
Arena::CreateMaybeMessage< ::LSLAM::Twist >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::Twist >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
