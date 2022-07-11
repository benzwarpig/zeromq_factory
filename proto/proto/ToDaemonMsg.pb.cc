// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ToDaemonMsg.proto

#include "ToDaemonMsg.pb.h"

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
PROTOBUF_CONSTEXPR RobotTaskAndState::RobotTaskAndState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.robot_task_state_)*/0
  , /*decltype(_impl_.robot_start_up_task_)*/0
  , /*decltype(_impl_.robot_last_task_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RobotTaskAndStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RobotTaskAndStateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RobotTaskAndStateDefaultTypeInternal() {}
  union {
    RobotTaskAndState _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RobotTaskAndStateDefaultTypeInternal _RobotTaskAndState_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_ToDaemonMsg_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_ToDaemonMsg_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ToDaemonMsg_2eproto = nullptr;

const uint32_t TableStruct_ToDaemonMsg_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotTaskAndState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotTaskAndState, _impl_.robot_task_state_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotTaskAndState, _impl_.robot_start_up_task_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::RobotTaskAndState, _impl_.robot_last_task_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::RobotTaskAndState)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_RobotTaskAndState_default_instance_._instance,
};

const char descriptor_table_protodef_ToDaemonMsg_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021ToDaemonMsg.proto\022\005LSLAM\"\270\001\n\021RobotTask"
  "AndState\0223\n\020robot_task_state\030\001 \001(\0162\031.LSL"
  "AM.RobotTaskStateType\0228\n\023robot_start_up_"
  "task\030\002 \001(\0162\033.LSLAM.RobotStartUpTaskType\022"
  "4\n\017robot_last_task\030\003 \001(\0162\033.LSLAM.RobotSt"
  "artUpTaskType*\221\002\n\024RobotStartUpTaskType\022\022"
  "\n\016SU_UNUSED_TASK\020\000\022\023\n\017SU_EXPLORE_TASK\020\001\022"
  "\021\n\rSU_SWEEP_TASK\020\002\022\017\n\013SU_MOP_TASK\020\003\022\031\n\025S"
  "U_SWEEP_AND_MOP_TASK\020\004\022\024\n\020SU_RECHARGE_TA"
  "SK\020\005\022\022\n\016SU_TIMING_TASK\020\006\022\033\n\027SU_AIM_POINT"
  "_CLEAN_TASK\020\007\022\035\n\031SU_SELECT_AREA_CLEAN_TA"
  "SK\020\010\022\023\n\017SU_STANDBY_TASK\020\t\022\026\n\022SU_EDGE_CLE"
  "AN_TASK\020\n*\277\001\n\022RobotTaskStateType\022\017\n\013TASK"
  "_UNUSED\020\000\022\021\n\rTASK_COMPLETE\020\001\022\016\n\nTASK_STA"
  "RT\020\002\022\016\n\nTASK_PAUSE\020\003\022\020\n\014TASK_RUNNING\020\004\022\017"
  "\n\013FAUIL_PAUSE\020\005\022\016\n\nTASK_BEGIN\020\006\022\021\n\rTASK_"
  "CONTINUE\020\007\022\014\n\010TASK_END\020\010\022\021\n\rTASK_BEGININ"
  "G\020\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_ToDaemonMsg_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ToDaemonMsg_2eproto = {
    false, false, 691, descriptor_table_protodef_ToDaemonMsg_2eproto,
    "ToDaemonMsg.proto",
    &descriptor_table_ToDaemonMsg_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_ToDaemonMsg_2eproto::offsets,
    file_level_metadata_ToDaemonMsg_2eproto, file_level_enum_descriptors_ToDaemonMsg_2eproto,
    file_level_service_descriptors_ToDaemonMsg_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ToDaemonMsg_2eproto_getter() {
  return &descriptor_table_ToDaemonMsg_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ToDaemonMsg_2eproto(&descriptor_table_ToDaemonMsg_2eproto);
namespace LSLAM {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RobotStartUpTaskType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ToDaemonMsg_2eproto);
  return file_level_enum_descriptors_ToDaemonMsg_2eproto[0];
}
bool RobotStartUpTaskType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RobotTaskStateType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ToDaemonMsg_2eproto);
  return file_level_enum_descriptors_ToDaemonMsg_2eproto[1];
}
bool RobotTaskStateType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class RobotTaskAndState::_Internal {
 public:
};

RobotTaskAndState::RobotTaskAndState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.RobotTaskAndState)
}
RobotTaskAndState::RobotTaskAndState(const RobotTaskAndState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  RobotTaskAndState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.robot_task_state_){}
    , decltype(_impl_.robot_start_up_task_){}
    , decltype(_impl_.robot_last_task_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.robot_task_state_, &from._impl_.robot_task_state_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.robot_last_task_) -
    reinterpret_cast<char*>(&_impl_.robot_task_state_)) + sizeof(_impl_.robot_last_task_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.RobotTaskAndState)
}

inline void RobotTaskAndState::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.robot_task_state_){0}
    , decltype(_impl_.robot_start_up_task_){0}
    , decltype(_impl_.robot_last_task_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

RobotTaskAndState::~RobotTaskAndState() {
  // @@protoc_insertion_point(destructor:LSLAM.RobotTaskAndState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RobotTaskAndState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void RobotTaskAndState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RobotTaskAndState::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.RobotTaskAndState)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.robot_task_state_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.robot_last_task_) -
      reinterpret_cast<char*>(&_impl_.robot_task_state_)) + sizeof(_impl_.robot_last_task_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RobotTaskAndState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .LSLAM.RobotTaskStateType robot_task_state = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_task_state(static_cast<::LSLAM::RobotTaskStateType>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.RobotStartUpTaskType robot_start_up_task = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_start_up_task(static_cast<::LSLAM::RobotStartUpTaskType>(val));
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.RobotStartUpTaskType robot_last_task = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_robot_last_task(static_cast<::LSLAM::RobotStartUpTaskType>(val));
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

uint8_t* RobotTaskAndState::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.RobotTaskAndState)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .LSLAM.RobotTaskStateType robot_task_state = 1;
  if (this->_internal_robot_task_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_robot_task_state(), target);
  }

  // .LSLAM.RobotStartUpTaskType robot_start_up_task = 2;
  if (this->_internal_robot_start_up_task() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_robot_start_up_task(), target);
  }

  // .LSLAM.RobotStartUpTaskType robot_last_task = 3;
  if (this->_internal_robot_last_task() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_robot_last_task(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.RobotTaskAndState)
  return target;
}

size_t RobotTaskAndState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.RobotTaskAndState)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .LSLAM.RobotTaskStateType robot_task_state = 1;
  if (this->_internal_robot_task_state() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_task_state());
  }

  // .LSLAM.RobotStartUpTaskType robot_start_up_task = 2;
  if (this->_internal_robot_start_up_task() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_start_up_task());
  }

  // .LSLAM.RobotStartUpTaskType robot_last_task = 3;
  if (this->_internal_robot_last_task() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_robot_last_task());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RobotTaskAndState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RobotTaskAndState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RobotTaskAndState::GetClassData() const { return &_class_data_; }


void RobotTaskAndState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RobotTaskAndState*>(&to_msg);
  auto& from = static_cast<const RobotTaskAndState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.RobotTaskAndState)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_robot_task_state() != 0) {
    _this->_internal_set_robot_task_state(from._internal_robot_task_state());
  }
  if (from._internal_robot_start_up_task() != 0) {
    _this->_internal_set_robot_start_up_task(from._internal_robot_start_up_task());
  }
  if (from._internal_robot_last_task() != 0) {
    _this->_internal_set_robot_last_task(from._internal_robot_last_task());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RobotTaskAndState::CopyFrom(const RobotTaskAndState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.RobotTaskAndState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotTaskAndState::IsInitialized() const {
  return true;
}

void RobotTaskAndState::InternalSwap(RobotTaskAndState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RobotTaskAndState, _impl_.robot_last_task_)
      + sizeof(RobotTaskAndState::_impl_.robot_last_task_)
      - PROTOBUF_FIELD_OFFSET(RobotTaskAndState, _impl_.robot_task_state_)>(
          reinterpret_cast<char*>(&_impl_.robot_task_state_),
          reinterpret_cast<char*>(&other->_impl_.robot_task_state_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RobotTaskAndState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ToDaemonMsg_2eproto_getter, &descriptor_table_ToDaemonMsg_2eproto_once,
      file_level_metadata_ToDaemonMsg_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::RobotTaskAndState*
Arena::CreateMaybeMessage< ::LSLAM::RobotTaskAndState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::RobotTaskAndState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
