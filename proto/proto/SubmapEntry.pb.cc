// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SubmapEntry.proto

#include "SubmapEntry.pb.h"

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
PROTOBUF_CONSTEXPR SubmapEntry::SubmapEntry(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.pose_)*/nullptr
  , /*decltype(_impl_.trajectory_id_)*/0
  , /*decltype(_impl_.submap_index_)*/0
  , /*decltype(_impl_.submap_version_)*/0
  , /*decltype(_impl_.is_frozen_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SubmapEntryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SubmapEntryDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SubmapEntryDefaultTypeInternal() {}
  union {
    SubmapEntry _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SubmapEntryDefaultTypeInternal _SubmapEntry_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_SubmapEntry_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SubmapEntry_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SubmapEntry_2eproto = nullptr;

const uint32_t TableStruct_SubmapEntry_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapEntry, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapEntry, _impl_.trajectory_id_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapEntry, _impl_.submap_index_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapEntry, _impl_.submap_version_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapEntry, _impl_.pose_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapEntry, _impl_.is_frozen_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::SubmapEntry)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_SubmapEntry_default_instance_._instance,
};

const char descriptor_table_protodef_SubmapEntry_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021SubmapEntry.proto\022\005LSLAM\032\nPose.proto\"\200"
  "\001\n\013SubmapEntry\022\025\n\rtrajectory_id\030\001 \001(\005\022\024\n"
  "\014submap_index\030\002 \001(\005\022\026\n\016submap_version\030\003 "
  "\001(\005\022\031\n\004pose\030\004 \001(\0132\013.LSLAM.Pose\022\021\n\tis_fro"
  "zen\030\005 \001(\010b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SubmapEntry_2eproto_deps[1] = {
  &::descriptor_table_Pose_2eproto,
};
static ::_pbi::once_flag descriptor_table_SubmapEntry_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SubmapEntry_2eproto = {
    false, false, 177, descriptor_table_protodef_SubmapEntry_2eproto,
    "SubmapEntry.proto",
    &descriptor_table_SubmapEntry_2eproto_once, descriptor_table_SubmapEntry_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SubmapEntry_2eproto::offsets,
    file_level_metadata_SubmapEntry_2eproto, file_level_enum_descriptors_SubmapEntry_2eproto,
    file_level_service_descriptors_SubmapEntry_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SubmapEntry_2eproto_getter() {
  return &descriptor_table_SubmapEntry_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SubmapEntry_2eproto(&descriptor_table_SubmapEntry_2eproto);
namespace LSLAM {

// ===================================================================

class SubmapEntry::_Internal {
 public:
  static const ::LSLAM::Pose& pose(const SubmapEntry* msg);
};

const ::LSLAM::Pose&
SubmapEntry::_Internal::pose(const SubmapEntry* msg) {
  return *msg->_impl_.pose_;
}
void SubmapEntry::clear_pose() {
  if (GetArenaForAllocation() == nullptr && _impl_.pose_ != nullptr) {
    delete _impl_.pose_;
  }
  _impl_.pose_ = nullptr;
}
SubmapEntry::SubmapEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.SubmapEntry)
}
SubmapEntry::SubmapEntry(const SubmapEntry& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SubmapEntry* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.pose_){nullptr}
    , decltype(_impl_.trajectory_id_){}
    , decltype(_impl_.submap_index_){}
    , decltype(_impl_.submap_version_){}
    , decltype(_impl_.is_frozen_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_pose()) {
    _this->_impl_.pose_ = new ::LSLAM::Pose(*from._impl_.pose_);
  }
  ::memcpy(&_impl_.trajectory_id_, &from._impl_.trajectory_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.is_frozen_) -
    reinterpret_cast<char*>(&_impl_.trajectory_id_)) + sizeof(_impl_.is_frozen_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.SubmapEntry)
}

inline void SubmapEntry::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.pose_){nullptr}
    , decltype(_impl_.trajectory_id_){0}
    , decltype(_impl_.submap_index_){0}
    , decltype(_impl_.submap_version_){0}
    , decltype(_impl_.is_frozen_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SubmapEntry::~SubmapEntry() {
  // @@protoc_insertion_point(destructor:LSLAM.SubmapEntry)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SubmapEntry::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.pose_;
}

void SubmapEntry::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SubmapEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.SubmapEntry)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.pose_ != nullptr) {
    delete _impl_.pose_;
  }
  _impl_.pose_ = nullptr;
  ::memset(&_impl_.trajectory_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.is_frozen_) -
      reinterpret_cast<char*>(&_impl_.trajectory_id_)) + sizeof(_impl_.is_frozen_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SubmapEntry::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 trajectory_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.trajectory_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 submap_index = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.submap_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 submap_version = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.submap_version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.Pose pose = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool is_frozen = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.is_frozen_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* SubmapEntry::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.SubmapEntry)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 trajectory_id = 1;
  if (this->_internal_trajectory_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_trajectory_id(), target);
  }

  // int32 submap_index = 2;
  if (this->_internal_submap_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_submap_index(), target);
  }

  // int32 submap_version = 3;
  if (this->_internal_submap_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_submap_version(), target);
  }

  // .LSLAM.Pose pose = 4;
  if (this->_internal_has_pose()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::pose(this),
        _Internal::pose(this).GetCachedSize(), target, stream);
  }

  // bool is_frozen = 5;
  if (this->_internal_is_frozen() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_is_frozen(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.SubmapEntry)
  return target;
}

size_t SubmapEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.SubmapEntry)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .LSLAM.Pose pose = 4;
  if (this->_internal_has_pose()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.pose_);
  }

  // int32 trajectory_id = 1;
  if (this->_internal_trajectory_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_trajectory_id());
  }

  // int32 submap_index = 2;
  if (this->_internal_submap_index() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_submap_index());
  }

  // int32 submap_version = 3;
  if (this->_internal_submap_version() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_submap_version());
  }

  // bool is_frozen = 5;
  if (this->_internal_is_frozen() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SubmapEntry::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SubmapEntry::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SubmapEntry::GetClassData() const { return &_class_data_; }


void SubmapEntry::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SubmapEntry*>(&to_msg);
  auto& from = static_cast<const SubmapEntry&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.SubmapEntry)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_pose()) {
    _this->_internal_mutable_pose()->::LSLAM::Pose::MergeFrom(
        from._internal_pose());
  }
  if (from._internal_trajectory_id() != 0) {
    _this->_internal_set_trajectory_id(from._internal_trajectory_id());
  }
  if (from._internal_submap_index() != 0) {
    _this->_internal_set_submap_index(from._internal_submap_index());
  }
  if (from._internal_submap_version() != 0) {
    _this->_internal_set_submap_version(from._internal_submap_version());
  }
  if (from._internal_is_frozen() != 0) {
    _this->_internal_set_is_frozen(from._internal_is_frozen());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SubmapEntry::CopyFrom(const SubmapEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.SubmapEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubmapEntry::IsInitialized() const {
  return true;
}

void SubmapEntry::InternalSwap(SubmapEntry* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SubmapEntry, _impl_.is_frozen_)
      + sizeof(SubmapEntry::_impl_.is_frozen_)
      - PROTOBUF_FIELD_OFFSET(SubmapEntry, _impl_.pose_)>(
          reinterpret_cast<char*>(&_impl_.pose_),
          reinterpret_cast<char*>(&other->_impl_.pose_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SubmapEntry::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SubmapEntry_2eproto_getter, &descriptor_table_SubmapEntry_2eproto_once,
      file_level_metadata_SubmapEntry_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::SubmapEntry*
Arena::CreateMaybeMessage< ::LSLAM::SubmapEntry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::SubmapEntry >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
