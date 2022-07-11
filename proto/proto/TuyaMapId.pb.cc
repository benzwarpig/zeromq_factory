// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TuyaMapId.proto

#include "TuyaMapId.pb.h"

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
PROTOBUF_CONSTEXPR TuyaMapId::TuyaMapId(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.version_before_firmware_upgrade_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.tuya_map_id_)*/0
  , /*decltype(_impl_.firmware_upgrade_flag_value_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TuyaMapIdDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TuyaMapIdDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TuyaMapIdDefaultTypeInternal() {}
  union {
    TuyaMapId _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TuyaMapIdDefaultTypeInternal _TuyaMapId_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_TuyaMapId_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_TuyaMapId_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_TuyaMapId_2eproto = nullptr;

const uint32_t TableStruct_TuyaMapId_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::TuyaMapId, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::TuyaMapId, _impl_.tuya_map_id_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::TuyaMapId, _impl_.version_before_firmware_upgrade_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::TuyaMapId, _impl_.firmware_upgrade_flag_value_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::TuyaMapId)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_TuyaMapId_default_instance_._instance,
};

const char descriptor_table_protodef_TuyaMapId_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017TuyaMapId.proto\022\005LSLAM\"n\n\tTuyaMapId\022\023\n"
  "\013tuya_map_id\030\001 \001(\005\022\'\n\037version_before_fir"
  "mware_upgrade\030\002 \001(\t\022#\n\033firmware_upgrade_"
  "flag_value\030\003 \001(\005b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_TuyaMapId_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_TuyaMapId_2eproto = {
    false, false, 144, descriptor_table_protodef_TuyaMapId_2eproto,
    "TuyaMapId.proto",
    &descriptor_table_TuyaMapId_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_TuyaMapId_2eproto::offsets,
    file_level_metadata_TuyaMapId_2eproto, file_level_enum_descriptors_TuyaMapId_2eproto,
    file_level_service_descriptors_TuyaMapId_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_TuyaMapId_2eproto_getter() {
  return &descriptor_table_TuyaMapId_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_TuyaMapId_2eproto(&descriptor_table_TuyaMapId_2eproto);
namespace LSLAM {

// ===================================================================

class TuyaMapId::_Internal {
 public:
};

TuyaMapId::TuyaMapId(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.TuyaMapId)
}
TuyaMapId::TuyaMapId(const TuyaMapId& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TuyaMapId* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.version_before_firmware_upgrade_){}
    , decltype(_impl_.tuya_map_id_){}
    , decltype(_impl_.firmware_upgrade_flag_value_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.version_before_firmware_upgrade_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.version_before_firmware_upgrade_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_version_before_firmware_upgrade().empty()) {
    _this->_impl_.version_before_firmware_upgrade_.Set(from._internal_version_before_firmware_upgrade(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.tuya_map_id_, &from._impl_.tuya_map_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.firmware_upgrade_flag_value_) -
    reinterpret_cast<char*>(&_impl_.tuya_map_id_)) + sizeof(_impl_.firmware_upgrade_flag_value_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.TuyaMapId)
}

inline void TuyaMapId::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.version_before_firmware_upgrade_){}
    , decltype(_impl_.tuya_map_id_){0}
    , decltype(_impl_.firmware_upgrade_flag_value_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.version_before_firmware_upgrade_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.version_before_firmware_upgrade_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TuyaMapId::~TuyaMapId() {
  // @@protoc_insertion_point(destructor:LSLAM.TuyaMapId)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TuyaMapId::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.version_before_firmware_upgrade_.Destroy();
}

void TuyaMapId::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TuyaMapId::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.TuyaMapId)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.version_before_firmware_upgrade_.ClearToEmpty();
  ::memset(&_impl_.tuya_map_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.firmware_upgrade_flag_value_) -
      reinterpret_cast<char*>(&_impl_.tuya_map_id_)) + sizeof(_impl_.firmware_upgrade_flag_value_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TuyaMapId::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 tuya_map_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.tuya_map_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string version_before_firmware_upgrade = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_version_before_firmware_upgrade();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "LSLAM.TuyaMapId.version_before_firmware_upgrade"));
        } else
          goto handle_unusual;
        continue;
      // int32 firmware_upgrade_flag_value = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.firmware_upgrade_flag_value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* TuyaMapId::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.TuyaMapId)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 tuya_map_id = 1;
  if (this->_internal_tuya_map_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_tuya_map_id(), target);
  }

  // string version_before_firmware_upgrade = 2;
  if (!this->_internal_version_before_firmware_upgrade().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_version_before_firmware_upgrade().data(), static_cast<int>(this->_internal_version_before_firmware_upgrade().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "LSLAM.TuyaMapId.version_before_firmware_upgrade");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_version_before_firmware_upgrade(), target);
  }

  // int32 firmware_upgrade_flag_value = 3;
  if (this->_internal_firmware_upgrade_flag_value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_firmware_upgrade_flag_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.TuyaMapId)
  return target;
}

size_t TuyaMapId::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.TuyaMapId)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string version_before_firmware_upgrade = 2;
  if (!this->_internal_version_before_firmware_upgrade().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_version_before_firmware_upgrade());
  }

  // int32 tuya_map_id = 1;
  if (this->_internal_tuya_map_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_tuya_map_id());
  }

  // int32 firmware_upgrade_flag_value = 3;
  if (this->_internal_firmware_upgrade_flag_value() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_firmware_upgrade_flag_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TuyaMapId::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TuyaMapId::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TuyaMapId::GetClassData() const { return &_class_data_; }


void TuyaMapId::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TuyaMapId*>(&to_msg);
  auto& from = static_cast<const TuyaMapId&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.TuyaMapId)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_version_before_firmware_upgrade().empty()) {
    _this->_internal_set_version_before_firmware_upgrade(from._internal_version_before_firmware_upgrade());
  }
  if (from._internal_tuya_map_id() != 0) {
    _this->_internal_set_tuya_map_id(from._internal_tuya_map_id());
  }
  if (from._internal_firmware_upgrade_flag_value() != 0) {
    _this->_internal_set_firmware_upgrade_flag_value(from._internal_firmware_upgrade_flag_value());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TuyaMapId::CopyFrom(const TuyaMapId& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.TuyaMapId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TuyaMapId::IsInitialized() const {
  return true;
}

void TuyaMapId::InternalSwap(TuyaMapId* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.version_before_firmware_upgrade_, lhs_arena,
      &other->_impl_.version_before_firmware_upgrade_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TuyaMapId, _impl_.firmware_upgrade_flag_value_)
      + sizeof(TuyaMapId::_impl_.firmware_upgrade_flag_value_)
      - PROTOBUF_FIELD_OFFSET(TuyaMapId, _impl_.tuya_map_id_)>(
          reinterpret_cast<char*>(&_impl_.tuya_map_id_),
          reinterpret_cast<char*>(&other->_impl_.tuya_map_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TuyaMapId::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_TuyaMapId_2eproto_getter, &descriptor_table_TuyaMapId_2eproto_once,
      file_level_metadata_TuyaMapId_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::TuyaMapId*
Arena::CreateMaybeMessage< ::LSLAM::TuyaMapId >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::TuyaMapId >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
