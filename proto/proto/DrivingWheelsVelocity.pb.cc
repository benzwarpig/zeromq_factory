// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DrivingWheelsVelocity.proto

#include "DrivingWheelsVelocity.pb.h"

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
PROTOBUF_CONSTEXPR WheelsVelocity::WheelsVelocity(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.left_wheel_velocity_)*/0
  , /*decltype(_impl_.right_wheel_velocity_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct WheelsVelocityDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WheelsVelocityDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~WheelsVelocityDefaultTypeInternal() {}
  union {
    WheelsVelocity _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WheelsVelocityDefaultTypeInternal _WheelsVelocity_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_DrivingWheelsVelocity_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_DrivingWheelsVelocity_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_DrivingWheelsVelocity_2eproto = nullptr;

const uint32_t TableStruct_DrivingWheelsVelocity_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::WheelsVelocity, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::WheelsVelocity, _impl_.left_wheel_velocity_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::WheelsVelocity, _impl_.right_wheel_velocity_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::WheelsVelocity)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_WheelsVelocity_default_instance_._instance,
};

const char descriptor_table_protodef_DrivingWheelsVelocity_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033DrivingWheelsVelocity.proto\022\005LSLAM\"K\n\016"
  "WheelsVelocity\022\033\n\023left_wheel_velocity\030\001 "
  "\001(\005\022\034\n\024right_wheel_velocity\030\002 \001(\005b\006proto"
  "3"
  ;
static ::_pbi::once_flag descriptor_table_DrivingWheelsVelocity_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_DrivingWheelsVelocity_2eproto = {
    false, false, 121, descriptor_table_protodef_DrivingWheelsVelocity_2eproto,
    "DrivingWheelsVelocity.proto",
    &descriptor_table_DrivingWheelsVelocity_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_DrivingWheelsVelocity_2eproto::offsets,
    file_level_metadata_DrivingWheelsVelocity_2eproto, file_level_enum_descriptors_DrivingWheelsVelocity_2eproto,
    file_level_service_descriptors_DrivingWheelsVelocity_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_DrivingWheelsVelocity_2eproto_getter() {
  return &descriptor_table_DrivingWheelsVelocity_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_DrivingWheelsVelocity_2eproto(&descriptor_table_DrivingWheelsVelocity_2eproto);
namespace LSLAM {

// ===================================================================

class WheelsVelocity::_Internal {
 public:
};

WheelsVelocity::WheelsVelocity(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.WheelsVelocity)
}
WheelsVelocity::WheelsVelocity(const WheelsVelocity& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  WheelsVelocity* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.left_wheel_velocity_){}
    , decltype(_impl_.right_wheel_velocity_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.left_wheel_velocity_, &from._impl_.left_wheel_velocity_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.right_wheel_velocity_) -
    reinterpret_cast<char*>(&_impl_.left_wheel_velocity_)) + sizeof(_impl_.right_wheel_velocity_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.WheelsVelocity)
}

inline void WheelsVelocity::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.left_wheel_velocity_){0}
    , decltype(_impl_.right_wheel_velocity_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

WheelsVelocity::~WheelsVelocity() {
  // @@protoc_insertion_point(destructor:LSLAM.WheelsVelocity)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void WheelsVelocity::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void WheelsVelocity::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void WheelsVelocity::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.WheelsVelocity)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.left_wheel_velocity_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.right_wheel_velocity_) -
      reinterpret_cast<char*>(&_impl_.left_wheel_velocity_)) + sizeof(_impl_.right_wheel_velocity_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* WheelsVelocity::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 left_wheel_velocity = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.left_wheel_velocity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 right_wheel_velocity = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.right_wheel_velocity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* WheelsVelocity::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.WheelsVelocity)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 left_wheel_velocity = 1;
  if (this->_internal_left_wheel_velocity() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_left_wheel_velocity(), target);
  }

  // int32 right_wheel_velocity = 2;
  if (this->_internal_right_wheel_velocity() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_right_wheel_velocity(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.WheelsVelocity)
  return target;
}

size_t WheelsVelocity::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.WheelsVelocity)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 left_wheel_velocity = 1;
  if (this->_internal_left_wheel_velocity() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_left_wheel_velocity());
  }

  // int32 right_wheel_velocity = 2;
  if (this->_internal_right_wheel_velocity() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_right_wheel_velocity());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData WheelsVelocity::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    WheelsVelocity::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*WheelsVelocity::GetClassData() const { return &_class_data_; }


void WheelsVelocity::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<WheelsVelocity*>(&to_msg);
  auto& from = static_cast<const WheelsVelocity&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.WheelsVelocity)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_left_wheel_velocity() != 0) {
    _this->_internal_set_left_wheel_velocity(from._internal_left_wheel_velocity());
  }
  if (from._internal_right_wheel_velocity() != 0) {
    _this->_internal_set_right_wheel_velocity(from._internal_right_wheel_velocity());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void WheelsVelocity::CopyFrom(const WheelsVelocity& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.WheelsVelocity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WheelsVelocity::IsInitialized() const {
  return true;
}

void WheelsVelocity::InternalSwap(WheelsVelocity* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WheelsVelocity, _impl_.right_wheel_velocity_)
      + sizeof(WheelsVelocity::_impl_.right_wheel_velocity_)
      - PROTOBUF_FIELD_OFFSET(WheelsVelocity, _impl_.left_wheel_velocity_)>(
          reinterpret_cast<char*>(&_impl_.left_wheel_velocity_),
          reinterpret_cast<char*>(&other->_impl_.left_wheel_velocity_));
}

::PROTOBUF_NAMESPACE_ID::Metadata WheelsVelocity::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_DrivingWheelsVelocity_2eproto_getter, &descriptor_table_DrivingWheelsVelocity_2eproto_once,
      file_level_metadata_DrivingWheelsVelocity_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::WheelsVelocity*
Arena::CreateMaybeMessage< ::LSLAM::WheelsVelocity >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::WheelsVelocity >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>