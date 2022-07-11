// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RobotState.proto

#include "RobotState.pb.h"

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
PROTOBUF_CONSTEXPR State::State(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.remain_battery_)*/0u
  , /*decltype(_impl_.robot_motion_state_)*/0u
  , /*decltype(_impl_.previous_robot_motion_state_)*/0u
  , /*decltype(_impl_.robot_erro_state_)*/0u
  , /*decltype(_impl_.robot_abnormal_state_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StateDefaultTypeInternal() {}
  union {
    State _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StateDefaultTypeInternal _State_default_instance_;
PROTOBUF_CONSTEXPR RobotState::RobotState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.state_)*/nullptr
  , /*decltype(_impl_.user_number_)*/0u
  , /*decltype(_impl_.firm_version_)*/0u
  , /*decltype(_impl_.robot_key_state_)*/0
  , /*decltype(_impl_.partner_key_state_)*/0
  , /*decltype(_impl_.edge_distance_)*/0
  , /*decltype(_impl_.is_robot_pose_trapped_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RobotStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RobotStateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RobotStateDefaultTypeInternal() {}
  union {
    RobotState _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RobotStateDefaultTypeInternal _RobotState_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_RobotState_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_RobotState_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_RobotState_2eproto = nullptr;

const uint32_t TableStruct_RobotState_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::State, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::State, _impl_.remain_battery_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::State, _impl_.robot_motion_state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::State, _impl_.previous_robot_motion_state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::State, _impl_.robot_erro_state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::State, _impl_.robot_abnormal_state_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _impl_.user_number_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _impl_.firm_version_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _impl_.robot_key_state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _impl_.partner_key_state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _impl_.state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _impl_.edge_distance_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotState, _impl_.is_robot_pose_trapped_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::State)},
  { 13, -1, -1, sizeof(::LSLAM::RobotState)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_State_default_instance_._instance,
  &::LSLAM::_RobotState_default_instance_._instance,
};

const char descriptor_table_protodef_RobotState_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020RobotState.proto\022\005LSLAM\"\230\001\n\005State\022\026\n\016r"
  "emain_battery\030\001 \001(\r\022\032\n\022robot_motion_stat"
  "e\030\002 \001(\r\022#\n\033previous_robot_motion_state\030\003"
  " \001(\r\022\030\n\020robot_erro_state\030\004 \001(\r\022\034\n\024robot_"
  "abnormal_state\030\005 \001(\r\"\350\001\n\nRobotState\022\023\n\013u"
  "ser_number\030\001 \001(\r\022\024\n\014firm_version\030\002 \001(\r\022,"
  "\n\017robot_key_state\030\003 \001(\0162\023.LSLAM.KeyState"
  "Type\022.\n\021partner_key_state\030\004 \001(\0162\023.LSLAM."
  "KeyStateType\022\033\n\005state\030\005 \001(\0132\014.LSLAM.Stat"
  "e\022\025\n\redge_distance\030\006 \001(\005\022\035\n\025is_robot_pos"
  "e_trapped\030\007 \001(\010*\205\001\n\014KeyStateType\022\013\n\007KeyI"
  "dle\020\000\022\013\n\007kKey1Up\020\001\022\013\n\007kKey2Up\020\002\022\017\n\013kKey1"
  "double\020\003\022\017\n\013kKey2double\020\004\022\r\n\tkKey1Long\020\005"
  "\022\r\n\tkKey2Long\020\006\022\016\n\nkKeyGropup\020\007b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_RobotState_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_RobotState_2eproto = {
    false, false, 559, descriptor_table_protodef_RobotState_2eproto,
    "RobotState.proto",
    &descriptor_table_RobotState_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_RobotState_2eproto::offsets,
    file_level_metadata_RobotState_2eproto, file_level_enum_descriptors_RobotState_2eproto,
    file_level_service_descriptors_RobotState_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_RobotState_2eproto_getter() {
  return &descriptor_table_RobotState_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_RobotState_2eproto(&descriptor_table_RobotState_2eproto);
namespace LSLAM {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* KeyStateType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_RobotState_2eproto);
  return file_level_enum_descriptors_RobotState_2eproto[0];
}
bool KeyStateType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class State::_Internal {
 public:
};

State::State(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.State)
}
State::State(const State& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  State* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.remain_battery_){}
    , decltype(_impl_.robot_motion_state_){}
    , decltype(_impl_.previous_robot_motion_state_){}
    , decltype(_impl_.robot_erro_state_){}
    , decltype(_impl_.robot_abnormal_state_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.remain_battery_, &from._impl_.remain_battery_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.robot_abnormal_state_) -
    reinterpret_cast<char*>(&_impl_.remain_battery_)) + sizeof(_impl_.robot_abnormal_state_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.State)
}

inline void State::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.remain_battery_){0u}
    , decltype(_impl_.robot_motion_state_){0u}
    , decltype(_impl_.previous_robot_motion_state_){0u}
    , decltype(_impl_.robot_erro_state_){0u}
    , decltype(_impl_.robot_abnormal_state_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

State::~State() {
  // @@protoc_insertion_point(destructor:LSLAM.State)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void State::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void State::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void State::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.State)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.remain_battery_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.robot_abnormal_state_) -
      reinterpret_cast<char*>(&_impl_.remain_battery_)) + sizeof(_impl_.robot_abnormal_state_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* State::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 remain_battery = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.remain_battery_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 robot_motion_state = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.robot_motion_state_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 previous_robot_motion_state = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.previous_robot_motion_state_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 robot_erro_state = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.robot_erro_state_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 robot_abnormal_state = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.robot_abnormal_state_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* State::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.State)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 remain_battery = 1;
  if (this->_internal_remain_battery() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_remain_battery(), target);
  }

  // uint32 robot_motion_state = 2;
  if (this->_internal_robot_motion_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_robot_motion_state(), target);
  }

  // uint32 previous_robot_motion_state = 3;
  if (this->_internal_previous_robot_motion_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_previous_robot_motion_state(), target);
  }

  // uint32 robot_erro_state = 4;
  if (this->_internal_robot_erro_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_robot_erro_state(), target);
  }

  // uint32 robot_abnormal_state = 5;
  if (this->_internal_robot_abnormal_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(5, this->_internal_robot_abnormal_state(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.State)
  return target;
}

size_t State::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.State)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 remain_battery = 1;
  if (this->_internal_remain_battery() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_remain_battery());
  }

  // uint32 robot_motion_state = 2;
  if (this->_internal_robot_motion_state() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_robot_motion_state());
  }

  // uint32 previous_robot_motion_state = 3;
  if (this->_internal_previous_robot_motion_state() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_previous_robot_motion_state());
  }

  // uint32 robot_erro_state = 4;
  if (this->_internal_robot_erro_state() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_robot_erro_state());
  }

  // uint32 robot_abnormal_state = 5;
  if (this->_internal_robot_abnormal_state() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_robot_abnormal_state());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData State::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    State::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*State::GetClassData() const { return &_class_data_; }


void State::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<State*>(&to_msg);
  auto& from = static_cast<const State&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.State)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_remain_battery() != 0) {
    _this->_internal_set_remain_battery(from._internal_remain_battery());
  }
  if (from._internal_robot_motion_state() != 0) {
    _this->_internal_set_robot_motion_state(from._internal_robot_motion_state());
  }
  if (from._internal_previous_robot_motion_state() != 0) {
    _this->_internal_set_previous_robot_motion_state(from._internal_previous_robot_motion_state());
  }
  if (from._internal_robot_erro_state() != 0) {
    _this->_internal_set_robot_erro_state(from._internal_robot_erro_state());
  }
  if (from._internal_robot_abnormal_state() != 0) {
    _this->_internal_set_robot_abnormal_state(from._internal_robot_abnormal_state());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void State::CopyFrom(const State& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.State)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool State::IsInitialized() const {
  return true;
}

void State::InternalSwap(State* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(State, _impl_.robot_abnormal_state_)
      + sizeof(State::_impl_.robot_abnormal_state_)
      - PROTOBUF_FIELD_OFFSET(State, _impl_.remain_battery_)>(
          reinterpret_cast<char*>(&_impl_.remain_battery_),
          reinterpret_cast<char*>(&other->_impl_.remain_battery_));
}

::PROTOBUF_NAMESPACE_ID::Metadata State::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_RobotState_2eproto_getter, &descriptor_table_RobotState_2eproto_once,
      file_level_metadata_RobotState_2eproto[0]);
}

// ===================================================================

class RobotState::_Internal {
 public:
  static const ::LSLAM::State& state(const RobotState* msg);
};

const ::LSLAM::State&
RobotState::_Internal::state(const RobotState* msg) {
  return *msg->_impl_.state_;
}
RobotState::RobotState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.RobotState)
}
RobotState::RobotState(const RobotState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  RobotState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.state_){nullptr}
    , decltype(_impl_.user_number_){}
    , decltype(_impl_.firm_version_){}
    , decltype(_impl_.robot_key_state_){}
    , decltype(_impl_.partner_key_state_){}
    , decltype(_impl_.edge_distance_){}
    , decltype(_impl_.is_robot_pose_trapped_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_state()) {
    _this->_impl_.state_ = new ::LSLAM::State(*from._impl_.state_);
  }
  ::memcpy(&_impl_.user_number_, &from._impl_.user_number_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.is_robot_pose_trapped_) -
    reinterpret_cast<char*>(&_impl_.user_number_)) + sizeof(_impl_.is_robot_pose_trapped_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.RobotState)
}

inline void RobotState::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.state_){nullptr}
    , decltype(_impl_.user_number_){0u}
    , decltype(_impl_.firm_version_){0u}
    , decltype(_impl_.robot_key_state_){0}
    , decltype(_impl_.partner_key_state_){0}
    , decltype(_impl_.edge_distance_){0}
    , decltype(_impl_.is_robot_pose_trapped_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

RobotState::~RobotState() {
  // @@protoc_insertion_point(destructor:LSLAM.RobotState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RobotState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.state_;
}

void RobotState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RobotState::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.RobotState)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.state_ != nullptr) {
    delete _impl_.state_;
  }
  _impl_.state_ = nullptr;
  ::memset(&_impl_.user_number_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.is_robot_pose_trapped_) -
      reinterpret_cast<char*>(&_impl_.user_number_)) + sizeof(_impl_.is_robot_pose_trapped_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RobotState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 user_number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.user_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 firm_version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.firm_version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.KeyStateType robot_key_state = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_key_state(static_cast<::LSLAM::KeyStateType>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.KeyStateType partner_key_state = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_partner_key_state(static_cast<::LSLAM::KeyStateType>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.State state = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_state(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 edge_distance = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.edge_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool is_robot_pose_trapped = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.is_robot_pose_trapped_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* RobotState::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.RobotState)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 user_number = 1;
  if (this->_internal_user_number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_user_number(), target);
  }

  // uint32 firm_version = 2;
  if (this->_internal_firm_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_firm_version(), target);
  }

  // .LSLAM.KeyStateType robot_key_state = 3;
  if (this->_internal_robot_key_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_robot_key_state(), target);
  }

  // .LSLAM.KeyStateType partner_key_state = 4;
  if (this->_internal_partner_key_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_partner_key_state(), target);
  }

  // .LSLAM.State state = 5;
  if (this->_internal_has_state()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::state(this),
        _Internal::state(this).GetCachedSize(), target, stream);
  }

  // int32 edge_distance = 6;
  if (this->_internal_edge_distance() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_edge_distance(), target);
  }

  // bool is_robot_pose_trapped = 7;
  if (this->_internal_is_robot_pose_trapped() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_is_robot_pose_trapped(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.RobotState)
  return target;
}

size_t RobotState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.RobotState)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .LSLAM.State state = 5;
  if (this->_internal_has_state()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.state_);
  }

  // uint32 user_number = 1;
  if (this->_internal_user_number() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_user_number());
  }

  // uint32 firm_version = 2;
  if (this->_internal_firm_version() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_firm_version());
  }

  // .LSLAM.KeyStateType robot_key_state = 3;
  if (this->_internal_robot_key_state() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_key_state());
  }

  // .LSLAM.KeyStateType partner_key_state = 4;
  if (this->_internal_partner_key_state() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_partner_key_state());
  }

  // int32 edge_distance = 6;
  if (this->_internal_edge_distance() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_edge_distance());
  }

  // bool is_robot_pose_trapped = 7;
  if (this->_internal_is_robot_pose_trapped() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RobotState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RobotState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RobotState::GetClassData() const { return &_class_data_; }


void RobotState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RobotState*>(&to_msg);
  auto& from = static_cast<const RobotState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.RobotState)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_state()) {
    _this->_internal_mutable_state()->::LSLAM::State::MergeFrom(
        from._internal_state());
  }
  if (from._internal_user_number() != 0) {
    _this->_internal_set_user_number(from._internal_user_number());
  }
  if (from._internal_firm_version() != 0) {
    _this->_internal_set_firm_version(from._internal_firm_version());
  }
  if (from._internal_robot_key_state() != 0) {
    _this->_internal_set_robot_key_state(from._internal_robot_key_state());
  }
  if (from._internal_partner_key_state() != 0) {
    _this->_internal_set_partner_key_state(from._internal_partner_key_state());
  }
  if (from._internal_edge_distance() != 0) {
    _this->_internal_set_edge_distance(from._internal_edge_distance());
  }
  if (from._internal_is_robot_pose_trapped() != 0) {
    _this->_internal_set_is_robot_pose_trapped(from._internal_is_robot_pose_trapped());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RobotState::CopyFrom(const RobotState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.RobotState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotState::IsInitialized() const {
  return true;
}

void RobotState::InternalSwap(RobotState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RobotState, _impl_.is_robot_pose_trapped_)
      + sizeof(RobotState::_impl_.is_robot_pose_trapped_)
      - PROTOBUF_FIELD_OFFSET(RobotState, _impl_.state_)>(
          reinterpret_cast<char*>(&_impl_.state_),
          reinterpret_cast<char*>(&other->_impl_.state_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RobotState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_RobotState_2eproto_getter, &descriptor_table_RobotState_2eproto_once,
      file_level_metadata_RobotState_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::State*
Arena::CreateMaybeMessage< ::LSLAM::State >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::State >(arena);
}
template<> PROTOBUF_NOINLINE ::LSLAM::RobotState*
Arena::CreateMaybeMessage< ::LSLAM::RobotState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::RobotState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
