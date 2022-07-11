// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CleanMotorMsgState.proto

#include "CleanMotorMsgState.pb.h"

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
PROTOBUF_CONSTEXPR ControlMotorAndPartner::ControlMotorAndPartner(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.clean_mode_)*/0
  , /*decltype(_impl_.robot_main_brush_)*/0
  , /*decltype(_impl_.robot_edge_brush_)*/0
  , /*decltype(_impl_.robot_mop_brush_)*/0
  , /*decltype(_impl_.robot_fan_motor_)*/0
  , /*decltype(_impl_.robot_waterbox_switch_)*/0
  , /*decltype(_impl_.partner_abnormal_state_)*/0u
  , /*decltype(_impl_.echo_front_distance_)*/0
  , /*decltype(_impl_.direction_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ControlMotorAndPartnerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ControlMotorAndPartnerDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ControlMotorAndPartnerDefaultTypeInternal() {}
  union {
    ControlMotorAndPartner _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ControlMotorAndPartnerDefaultTypeInternal _ControlMotorAndPartner_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_CleanMotorMsgState_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_CleanMotorMsgState_2eproto[3];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CleanMotorMsgState_2eproto = nullptr;

const uint32_t TableStruct_CleanMotorMsgState_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.clean_mode_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.robot_main_brush_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.robot_edge_brush_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.robot_mop_brush_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.robot_fan_motor_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.robot_waterbox_switch_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.partner_abnormal_state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.echo_front_distance_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::ControlMotorAndPartner, _impl_.direction_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::ControlMotorAndPartner)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_ControlMotorAndPartner_default_instance_._instance,
};

const char descriptor_table_protodef_CleanMotorMsgState_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030CleanMotorMsgState.proto\022\005LSLAM\"\244\007\n\026Co"
  "ntrolMotorAndPartner\022;\n\nclean_mode\030\001 \001(\016"
  "2\'.LSLAM.ControlMotorAndPartner.CleanMod"
  "e\022G\n\020robot_main_brush\030\002 \001(\0162-.LSLAM.Cont"
  "rolMotorAndPartner.CleanMotorState\022G\n\020ro"
  "bot_edge_brush\030\003 \001(\0162-.LSLAM.ControlMoto"
  "rAndPartner.CleanMotorState\022F\n\017robot_mop"
  "_brush\030\004 \001(\0162-.LSLAM.ControlMotorAndPart"
  "ner.CleanMotorState\022F\n\017robot_fan_motor\030\005"
  " \001(\0162-.LSLAM.ControlMotorAndPartner.Clea"
  "nMotorState\022L\n\025robot_waterbox_switch\030\006 \001"
  "(\0162-.LSLAM.ControlMotorAndPartner.CleanM"
  "otorState\022\036\n\026partner_abnormal_state\030\007 \001("
  "\r\022\033\n\023echo_front_distance\030\010 \001(\005\022G\n\tdirect"
  "ion\030\t \001(\01624.LSLAM.ControlMotorAndPartner"
  ".RemoteControlDirection\"i\n\tCleanMode\022\026\n\022"
  "CLEAN_MODE_STANDBY\020\000\022\031\n\025CLEAN_MODE_CONVE"
  "NTION\020\001\022\022\n\016CLEAN_MODE_MUT\020\002\022\025\n\021CLEAN_MOD"
  "E_STRONG\020\003\"\201\001\n\017CleanMotorState\022\025\n\021CLEAN_"
  "MOTOR_CLOSE\020\000\022\024\n\020CLEAN_MOTOR_OPEN\020\001\022\023\n\017C"
  "LEAN_MOTOR_LOW\020\002\022\026\n\022CLEAN_MOTOR_MEDIUM\020\003"
  "\022\024\n\020CLEAN_MOTOR_HIGH\020\004\"h\n\026RemoteControlD"
  "irection\022\n\n\006DEFAIL\020\000\022\013\n\007FORWARD\020\001\022\014\n\010BAC"
  "KWARD\020\002\022\r\n\tTRUN_LEFT\020\003\022\016\n\nTURN_RIGHT\020\004\022\010"
  "\n\004STOP\020\005b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CleanMotorMsgState_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CleanMotorMsgState_2eproto = {
    false, false, 976, descriptor_table_protodef_CleanMotorMsgState_2eproto,
    "CleanMotorMsgState.proto",
    &descriptor_table_CleanMotorMsgState_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_CleanMotorMsgState_2eproto::offsets,
    file_level_metadata_CleanMotorMsgState_2eproto, file_level_enum_descriptors_CleanMotorMsgState_2eproto,
    file_level_service_descriptors_CleanMotorMsgState_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CleanMotorMsgState_2eproto_getter() {
  return &descriptor_table_CleanMotorMsgState_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CleanMotorMsgState_2eproto(&descriptor_table_CleanMotorMsgState_2eproto);
namespace LSLAM {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ControlMotorAndPartner_CleanMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CleanMotorMsgState_2eproto);
  return file_level_enum_descriptors_CleanMotorMsgState_2eproto[0];
}
bool ControlMotorAndPartner_CleanMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ControlMotorAndPartner_CleanMode ControlMotorAndPartner::CLEAN_MODE_STANDBY;
constexpr ControlMotorAndPartner_CleanMode ControlMotorAndPartner::CLEAN_MODE_CONVENTION;
constexpr ControlMotorAndPartner_CleanMode ControlMotorAndPartner::CLEAN_MODE_MUT;
constexpr ControlMotorAndPartner_CleanMode ControlMotorAndPartner::CLEAN_MODE_STRONG;
constexpr ControlMotorAndPartner_CleanMode ControlMotorAndPartner::CleanMode_MIN;
constexpr ControlMotorAndPartner_CleanMode ControlMotorAndPartner::CleanMode_MAX;
constexpr int ControlMotorAndPartner::CleanMode_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ControlMotorAndPartner_CleanMotorState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CleanMotorMsgState_2eproto);
  return file_level_enum_descriptors_CleanMotorMsgState_2eproto[1];
}
bool ControlMotorAndPartner_CleanMotorState_IsValid(int value) {
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

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ControlMotorAndPartner_CleanMotorState ControlMotorAndPartner::CLEAN_MOTOR_CLOSE;
constexpr ControlMotorAndPartner_CleanMotorState ControlMotorAndPartner::CLEAN_MOTOR_OPEN;
constexpr ControlMotorAndPartner_CleanMotorState ControlMotorAndPartner::CLEAN_MOTOR_LOW;
constexpr ControlMotorAndPartner_CleanMotorState ControlMotorAndPartner::CLEAN_MOTOR_MEDIUM;
constexpr ControlMotorAndPartner_CleanMotorState ControlMotorAndPartner::CLEAN_MOTOR_HIGH;
constexpr ControlMotorAndPartner_CleanMotorState ControlMotorAndPartner::CleanMotorState_MIN;
constexpr ControlMotorAndPartner_CleanMotorState ControlMotorAndPartner::CleanMotorState_MAX;
constexpr int ControlMotorAndPartner::CleanMotorState_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ControlMotorAndPartner_RemoteControlDirection_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CleanMotorMsgState_2eproto);
  return file_level_enum_descriptors_CleanMotorMsgState_2eproto[2];
}
bool ControlMotorAndPartner_RemoteControlDirection_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::DEFAIL;
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::FORWARD;
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::BACKWARD;
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::TRUN_LEFT;
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::TURN_RIGHT;
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::STOP;
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::RemoteControlDirection_MIN;
constexpr ControlMotorAndPartner_RemoteControlDirection ControlMotorAndPartner::RemoteControlDirection_MAX;
constexpr int ControlMotorAndPartner::RemoteControlDirection_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ControlMotorAndPartner::_Internal {
 public:
};

ControlMotorAndPartner::ControlMotorAndPartner(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.ControlMotorAndPartner)
}
ControlMotorAndPartner::ControlMotorAndPartner(const ControlMotorAndPartner& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ControlMotorAndPartner* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.clean_mode_){}
    , decltype(_impl_.robot_main_brush_){}
    , decltype(_impl_.robot_edge_brush_){}
    , decltype(_impl_.robot_mop_brush_){}
    , decltype(_impl_.robot_fan_motor_){}
    , decltype(_impl_.robot_waterbox_switch_){}
    , decltype(_impl_.partner_abnormal_state_){}
    , decltype(_impl_.echo_front_distance_){}
    , decltype(_impl_.direction_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.clean_mode_, &from._impl_.clean_mode_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.direction_) -
    reinterpret_cast<char*>(&_impl_.clean_mode_)) + sizeof(_impl_.direction_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.ControlMotorAndPartner)
}

inline void ControlMotorAndPartner::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.clean_mode_){0}
    , decltype(_impl_.robot_main_brush_){0}
    , decltype(_impl_.robot_edge_brush_){0}
    , decltype(_impl_.robot_mop_brush_){0}
    , decltype(_impl_.robot_fan_motor_){0}
    , decltype(_impl_.robot_waterbox_switch_){0}
    , decltype(_impl_.partner_abnormal_state_){0u}
    , decltype(_impl_.echo_front_distance_){0}
    , decltype(_impl_.direction_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ControlMotorAndPartner::~ControlMotorAndPartner() {
  // @@protoc_insertion_point(destructor:LSLAM.ControlMotorAndPartner)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ControlMotorAndPartner::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ControlMotorAndPartner::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ControlMotorAndPartner::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.ControlMotorAndPartner)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.clean_mode_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.direction_) -
      reinterpret_cast<char*>(&_impl_.clean_mode_)) + sizeof(_impl_.direction_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ControlMotorAndPartner::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .LSLAM.ControlMotorAndPartner.CleanMode clean_mode = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_clean_mode(static_cast<::LSLAM::ControlMotorAndPartner_CleanMode>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_main_brush = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_main_brush(static_cast<::LSLAM::ControlMotorAndPartner_CleanMotorState>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_edge_brush = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_edge_brush(static_cast<::LSLAM::ControlMotorAndPartner_CleanMotorState>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_mop_brush = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_mop_brush(static_cast<::LSLAM::ControlMotorAndPartner_CleanMotorState>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_fan_motor = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_fan_motor(static_cast<::LSLAM::ControlMotorAndPartner_CleanMotorState>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_waterbox_switch = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_waterbox_switch(static_cast<::LSLAM::ControlMotorAndPartner_CleanMotorState>(val));
        } else
          goto handle_unusual;
        continue;
      // uint32 partner_abnormal_state = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.partner_abnormal_state_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 echo_front_distance = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.echo_front_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.ControlMotorAndPartner.RemoteControlDirection direction = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_direction(static_cast<::LSLAM::ControlMotorAndPartner_RemoteControlDirection>(val));
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

uint8_t* ControlMotorAndPartner::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.ControlMotorAndPartner)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .LSLAM.ControlMotorAndPartner.CleanMode clean_mode = 1;
  if (this->_internal_clean_mode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_clean_mode(), target);
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_main_brush = 2;
  if (this->_internal_robot_main_brush() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_robot_main_brush(), target);
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_edge_brush = 3;
  if (this->_internal_robot_edge_brush() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_robot_edge_brush(), target);
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_mop_brush = 4;
  if (this->_internal_robot_mop_brush() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_robot_mop_brush(), target);
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_fan_motor = 5;
  if (this->_internal_robot_fan_motor() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_robot_fan_motor(), target);
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_waterbox_switch = 6;
  if (this->_internal_robot_waterbox_switch() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      6, this->_internal_robot_waterbox_switch(), target);
  }

  // uint32 partner_abnormal_state = 7;
  if (this->_internal_partner_abnormal_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(7, this->_internal_partner_abnormal_state(), target);
  }

  // int32 echo_front_distance = 8;
  if (this->_internal_echo_front_distance() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(8, this->_internal_echo_front_distance(), target);
  }

  // .LSLAM.ControlMotorAndPartner.RemoteControlDirection direction = 9;
  if (this->_internal_direction() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      9, this->_internal_direction(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.ControlMotorAndPartner)
  return target;
}

size_t ControlMotorAndPartner::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.ControlMotorAndPartner)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .LSLAM.ControlMotorAndPartner.CleanMode clean_mode = 1;
  if (this->_internal_clean_mode() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_clean_mode());
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_main_brush = 2;
  if (this->_internal_robot_main_brush() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_main_brush());
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_edge_brush = 3;
  if (this->_internal_robot_edge_brush() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_edge_brush());
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_mop_brush = 4;
  if (this->_internal_robot_mop_brush() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_mop_brush());
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_fan_motor = 5;
  if (this->_internal_robot_fan_motor() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_fan_motor());
  }

  // .LSLAM.ControlMotorAndPartner.CleanMotorState robot_waterbox_switch = 6;
  if (this->_internal_robot_waterbox_switch() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_waterbox_switch());
  }

  // uint32 partner_abnormal_state = 7;
  if (this->_internal_partner_abnormal_state() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_partner_abnormal_state());
  }

  // int32 echo_front_distance = 8;
  if (this->_internal_echo_front_distance() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_echo_front_distance());
  }

  // .LSLAM.ControlMotorAndPartner.RemoteControlDirection direction = 9;
  if (this->_internal_direction() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_direction());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ControlMotorAndPartner::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ControlMotorAndPartner::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ControlMotorAndPartner::GetClassData() const { return &_class_data_; }


void ControlMotorAndPartner::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ControlMotorAndPartner*>(&to_msg);
  auto& from = static_cast<const ControlMotorAndPartner&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.ControlMotorAndPartner)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_clean_mode() != 0) {
    _this->_internal_set_clean_mode(from._internal_clean_mode());
  }
  if (from._internal_robot_main_brush() != 0) {
    _this->_internal_set_robot_main_brush(from._internal_robot_main_brush());
  }
  if (from._internal_robot_edge_brush() != 0) {
    _this->_internal_set_robot_edge_brush(from._internal_robot_edge_brush());
  }
  if (from._internal_robot_mop_brush() != 0) {
    _this->_internal_set_robot_mop_brush(from._internal_robot_mop_brush());
  }
  if (from._internal_robot_fan_motor() != 0) {
    _this->_internal_set_robot_fan_motor(from._internal_robot_fan_motor());
  }
  if (from._internal_robot_waterbox_switch() != 0) {
    _this->_internal_set_robot_waterbox_switch(from._internal_robot_waterbox_switch());
  }
  if (from._internal_partner_abnormal_state() != 0) {
    _this->_internal_set_partner_abnormal_state(from._internal_partner_abnormal_state());
  }
  if (from._internal_echo_front_distance() != 0) {
    _this->_internal_set_echo_front_distance(from._internal_echo_front_distance());
  }
  if (from._internal_direction() != 0) {
    _this->_internal_set_direction(from._internal_direction());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ControlMotorAndPartner::CopyFrom(const ControlMotorAndPartner& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.ControlMotorAndPartner)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ControlMotorAndPartner::IsInitialized() const {
  return true;
}

void ControlMotorAndPartner::InternalSwap(ControlMotorAndPartner* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ControlMotorAndPartner, _impl_.direction_)
      + sizeof(ControlMotorAndPartner::_impl_.direction_)
      - PROTOBUF_FIELD_OFFSET(ControlMotorAndPartner, _impl_.clean_mode_)>(
          reinterpret_cast<char*>(&_impl_.clean_mode_),
          reinterpret_cast<char*>(&other->_impl_.clean_mode_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ControlMotorAndPartner::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CleanMotorMsgState_2eproto_getter, &descriptor_table_CleanMotorMsgState_2eproto_once,
      file_level_metadata_CleanMotorMsgState_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::ControlMotorAndPartner*
Arena::CreateMaybeMessage< ::LSLAM::ControlMotorAndPartner >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::ControlMotorAndPartner >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>