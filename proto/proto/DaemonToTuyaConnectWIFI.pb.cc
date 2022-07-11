// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DaemonToTuyaConnectWIFI.proto

#include "DaemonToTuyaConnectWIFI.pb.h"

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
PROTOBUF_CONSTEXPR DistributionNetworkBegin::DistributionNetworkBegin(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.distribution_network_begin_)*/0
  , /*decltype(_impl_.battery_level_)*/0
  , /*decltype(_impl_.upper_strata_firmware_update_)*/0
  , /*decltype(_impl_.bottom_firmware_update_)*/0
  , /*decltype(_impl_.charging_)*/0
  , /*decltype(_impl_.charging_completed_)*/0
  , /*decltype(_impl_.daemon_to_tuya_error_message_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct DistributionNetworkBeginDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DistributionNetworkBeginDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DistributionNetworkBeginDefaultTypeInternal() {}
  union {
    DistributionNetworkBegin _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DistributionNetworkBeginDefaultTypeInternal _DistributionNetworkBegin_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_DaemonToTuyaConnectWIFI_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_DaemonToTuyaConnectWIFI_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_DaemonToTuyaConnectWIFI_2eproto = nullptr;

const uint32_t TableStruct_DaemonToTuyaConnectWIFI_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _impl_.distribution_network_begin_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _impl_.battery_level_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _impl_.upper_strata_firmware_update_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _impl_.bottom_firmware_update_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _impl_.charging_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _impl_.charging_completed_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::DistributionNetworkBegin, _impl_.daemon_to_tuya_error_message_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::DistributionNetworkBegin)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_DistributionNetworkBegin_default_instance_._instance,
};

const char descriptor_table_protodef_DaemonToTuyaConnectWIFI_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035DaemonToTuyaConnectWIFI.proto\022\005LSLAM\"\204"
  "\002\n\030DistributionNetworkBegin\022\"\n\032distribut"
  "ion_network_begin\030\001 \001(\005\022\025\n\rbattery_level"
  "\030\002 \001(\005\022$\n\034upper_strata_firmware_update\030\003"
  " \001(\005\022\036\n\026bottom_firmware_update\030\004 \001(\005\022\020\n\010"
  "charging\030\005 \001(\005\022\032\n\022charging_completed\030\006 \001"
  "(\005\0229\n\034daemon_to_tuya_error_message\030\007 \001(\016"
  "2\023.LSLAM.ErrorMessage*\203\001\n\014ErrorMessage\022\r"
  "\n\tEM_UNUSED\020\000\022\024\n\020EM_DONOT_DISTURB\020\001\022\032\n\026E"
  "M_LOWER_BETTERY_SLEEP\020\002\022\035\n\031EM_LOWER_BETT"
  "ERY_RECHARGE\020\003\022\023\n\017EM_ROBOT_RUNING\020\004b\006pro"
  "to3"
  ;
static ::_pbi::once_flag descriptor_table_DaemonToTuyaConnectWIFI_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_DaemonToTuyaConnectWIFI_2eproto = {
    false, false, 443, descriptor_table_protodef_DaemonToTuyaConnectWIFI_2eproto,
    "DaemonToTuyaConnectWIFI.proto",
    &descriptor_table_DaemonToTuyaConnectWIFI_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_DaemonToTuyaConnectWIFI_2eproto::offsets,
    file_level_metadata_DaemonToTuyaConnectWIFI_2eproto, file_level_enum_descriptors_DaemonToTuyaConnectWIFI_2eproto,
    file_level_service_descriptors_DaemonToTuyaConnectWIFI_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_DaemonToTuyaConnectWIFI_2eproto_getter() {
  return &descriptor_table_DaemonToTuyaConnectWIFI_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_DaemonToTuyaConnectWIFI_2eproto(&descriptor_table_DaemonToTuyaConnectWIFI_2eproto);
namespace LSLAM {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorMessage_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_DaemonToTuyaConnectWIFI_2eproto);
  return file_level_enum_descriptors_DaemonToTuyaConnectWIFI_2eproto[0];
}
bool ErrorMessage_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class DistributionNetworkBegin::_Internal {
 public:
};

DistributionNetworkBegin::DistributionNetworkBegin(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.DistributionNetworkBegin)
}
DistributionNetworkBegin::DistributionNetworkBegin(const DistributionNetworkBegin& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  DistributionNetworkBegin* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.distribution_network_begin_){}
    , decltype(_impl_.battery_level_){}
    , decltype(_impl_.upper_strata_firmware_update_){}
    , decltype(_impl_.bottom_firmware_update_){}
    , decltype(_impl_.charging_){}
    , decltype(_impl_.charging_completed_){}
    , decltype(_impl_.daemon_to_tuya_error_message_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.distribution_network_begin_, &from._impl_.distribution_network_begin_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.daemon_to_tuya_error_message_) -
    reinterpret_cast<char*>(&_impl_.distribution_network_begin_)) + sizeof(_impl_.daemon_to_tuya_error_message_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.DistributionNetworkBegin)
}

inline void DistributionNetworkBegin::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.distribution_network_begin_){0}
    , decltype(_impl_.battery_level_){0}
    , decltype(_impl_.upper_strata_firmware_update_){0}
    , decltype(_impl_.bottom_firmware_update_){0}
    , decltype(_impl_.charging_){0}
    , decltype(_impl_.charging_completed_){0}
    , decltype(_impl_.daemon_to_tuya_error_message_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

DistributionNetworkBegin::~DistributionNetworkBegin() {
  // @@protoc_insertion_point(destructor:LSLAM.DistributionNetworkBegin)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DistributionNetworkBegin::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void DistributionNetworkBegin::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void DistributionNetworkBegin::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.DistributionNetworkBegin)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.distribution_network_begin_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.daemon_to_tuya_error_message_) -
      reinterpret_cast<char*>(&_impl_.distribution_network_begin_)) + sizeof(_impl_.daemon_to_tuya_error_message_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DistributionNetworkBegin::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 distribution_network_begin = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.distribution_network_begin_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 battery_level = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.battery_level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 upper_strata_firmware_update = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.upper_strata_firmware_update_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 bottom_firmware_update = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.bottom_firmware_update_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 charging = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.charging_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 charging_completed = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.charging_completed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.ErrorMessage daemon_to_tuya_error_message = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_daemon_to_tuya_error_message(static_cast<::LSLAM::ErrorMessage>(val));
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

uint8_t* DistributionNetworkBegin::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.DistributionNetworkBegin)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 distribution_network_begin = 1;
  if (this->_internal_distribution_network_begin() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_distribution_network_begin(), target);
  }

  // int32 battery_level = 2;
  if (this->_internal_battery_level() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_battery_level(), target);
  }

  // int32 upper_strata_firmware_update = 3;
  if (this->_internal_upper_strata_firmware_update() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_upper_strata_firmware_update(), target);
  }

  // int32 bottom_firmware_update = 4;
  if (this->_internal_bottom_firmware_update() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_bottom_firmware_update(), target);
  }

  // int32 charging = 5;
  if (this->_internal_charging() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_charging(), target);
  }

  // int32 charging_completed = 6;
  if (this->_internal_charging_completed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_charging_completed(), target);
  }

  // .LSLAM.ErrorMessage daemon_to_tuya_error_message = 7;
  if (this->_internal_daemon_to_tuya_error_message() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      7, this->_internal_daemon_to_tuya_error_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.DistributionNetworkBegin)
  return target;
}

size_t DistributionNetworkBegin::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.DistributionNetworkBegin)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 distribution_network_begin = 1;
  if (this->_internal_distribution_network_begin() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_distribution_network_begin());
  }

  // int32 battery_level = 2;
  if (this->_internal_battery_level() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_battery_level());
  }

  // int32 upper_strata_firmware_update = 3;
  if (this->_internal_upper_strata_firmware_update() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_upper_strata_firmware_update());
  }

  // int32 bottom_firmware_update = 4;
  if (this->_internal_bottom_firmware_update() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_bottom_firmware_update());
  }

  // int32 charging = 5;
  if (this->_internal_charging() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_charging());
  }

  // int32 charging_completed = 6;
  if (this->_internal_charging_completed() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_charging_completed());
  }

  // .LSLAM.ErrorMessage daemon_to_tuya_error_message = 7;
  if (this->_internal_daemon_to_tuya_error_message() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_daemon_to_tuya_error_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DistributionNetworkBegin::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    DistributionNetworkBegin::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DistributionNetworkBegin::GetClassData() const { return &_class_data_; }


void DistributionNetworkBegin::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<DistributionNetworkBegin*>(&to_msg);
  auto& from = static_cast<const DistributionNetworkBegin&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.DistributionNetworkBegin)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_distribution_network_begin() != 0) {
    _this->_internal_set_distribution_network_begin(from._internal_distribution_network_begin());
  }
  if (from._internal_battery_level() != 0) {
    _this->_internal_set_battery_level(from._internal_battery_level());
  }
  if (from._internal_upper_strata_firmware_update() != 0) {
    _this->_internal_set_upper_strata_firmware_update(from._internal_upper_strata_firmware_update());
  }
  if (from._internal_bottom_firmware_update() != 0) {
    _this->_internal_set_bottom_firmware_update(from._internal_bottom_firmware_update());
  }
  if (from._internal_charging() != 0) {
    _this->_internal_set_charging(from._internal_charging());
  }
  if (from._internal_charging_completed() != 0) {
    _this->_internal_set_charging_completed(from._internal_charging_completed());
  }
  if (from._internal_daemon_to_tuya_error_message() != 0) {
    _this->_internal_set_daemon_to_tuya_error_message(from._internal_daemon_to_tuya_error_message());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DistributionNetworkBegin::CopyFrom(const DistributionNetworkBegin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.DistributionNetworkBegin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DistributionNetworkBegin::IsInitialized() const {
  return true;
}

void DistributionNetworkBegin::InternalSwap(DistributionNetworkBegin* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DistributionNetworkBegin, _impl_.daemon_to_tuya_error_message_)
      + sizeof(DistributionNetworkBegin::_impl_.daemon_to_tuya_error_message_)
      - PROTOBUF_FIELD_OFFSET(DistributionNetworkBegin, _impl_.distribution_network_begin_)>(
          reinterpret_cast<char*>(&_impl_.distribution_network_begin_),
          reinterpret_cast<char*>(&other->_impl_.distribution_network_begin_));
}

::PROTOBUF_NAMESPACE_ID::Metadata DistributionNetworkBegin::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_DaemonToTuyaConnectWIFI_2eproto_getter, &descriptor_table_DaemonToTuyaConnectWIFI_2eproto_once,
      file_level_metadata_DaemonToTuyaConnectWIFI_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::DistributionNetworkBegin*
Arena::CreateMaybeMessage< ::LSLAM::DistributionNetworkBegin >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::DistributionNetworkBegin >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>