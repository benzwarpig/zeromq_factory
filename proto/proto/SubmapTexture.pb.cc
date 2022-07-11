// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SubmapTexture.proto

#include "SubmapTexture.pb.h"

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
PROTOBUF_CONSTEXPR SubmapTexture::SubmapTexture(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.cells_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.slice_pose_)*/nullptr
  , /*decltype(_impl_.width_)*/0
  , /*decltype(_impl_.height_)*/0
  , /*decltype(_impl_.resolution_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SubmapTextureDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SubmapTextureDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SubmapTextureDefaultTypeInternal() {}
  union {
    SubmapTexture _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SubmapTextureDefaultTypeInternal _SubmapTexture_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_SubmapTexture_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SubmapTexture_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SubmapTexture_2eproto = nullptr;

const uint32_t TableStruct_SubmapTexture_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapTexture, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapTexture, _impl_.cells_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapTexture, _impl_.width_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapTexture, _impl_.height_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapTexture, _impl_.resolution_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::SubmapTexture, _impl_.slice_pose_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::SubmapTexture)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_SubmapTexture_default_instance_._instance,
};

const char descriptor_table_protodef_SubmapTexture_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023SubmapTexture.proto\022\005LSLAM\032\nPose.proto"
  "\"r\n\rSubmapTexture\022\r\n\005cells\030\001 \001(\t\022\r\n\005widt"
  "h\030\002 \001(\005\022\016\n\006height\030\003 \001(\005\022\022\n\nresolution\030\004 "
  "\001(\001\022\037\n\nslice_pose\030\005 \001(\0132\013.LSLAM.Poseb\006pr"
  "oto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SubmapTexture_2eproto_deps[1] = {
  &::descriptor_table_Pose_2eproto,
};
static ::_pbi::once_flag descriptor_table_SubmapTexture_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SubmapTexture_2eproto = {
    false, false, 164, descriptor_table_protodef_SubmapTexture_2eproto,
    "SubmapTexture.proto",
    &descriptor_table_SubmapTexture_2eproto_once, descriptor_table_SubmapTexture_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SubmapTexture_2eproto::offsets,
    file_level_metadata_SubmapTexture_2eproto, file_level_enum_descriptors_SubmapTexture_2eproto,
    file_level_service_descriptors_SubmapTexture_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SubmapTexture_2eproto_getter() {
  return &descriptor_table_SubmapTexture_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SubmapTexture_2eproto(&descriptor_table_SubmapTexture_2eproto);
namespace LSLAM {

// ===================================================================

class SubmapTexture::_Internal {
 public:
  static const ::LSLAM::Pose& slice_pose(const SubmapTexture* msg);
};

const ::LSLAM::Pose&
SubmapTexture::_Internal::slice_pose(const SubmapTexture* msg) {
  return *msg->_impl_.slice_pose_;
}
void SubmapTexture::clear_slice_pose() {
  if (GetArenaForAllocation() == nullptr && _impl_.slice_pose_ != nullptr) {
    delete _impl_.slice_pose_;
  }
  _impl_.slice_pose_ = nullptr;
}
SubmapTexture::SubmapTexture(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.SubmapTexture)
}
SubmapTexture::SubmapTexture(const SubmapTexture& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SubmapTexture* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.cells_){}
    , decltype(_impl_.slice_pose_){nullptr}
    , decltype(_impl_.width_){}
    , decltype(_impl_.height_){}
    , decltype(_impl_.resolution_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.cells_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.cells_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_cells().empty()) {
    _this->_impl_.cells_.Set(from._internal_cells(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_slice_pose()) {
    _this->_impl_.slice_pose_ = new ::LSLAM::Pose(*from._impl_.slice_pose_);
  }
  ::memcpy(&_impl_.width_, &from._impl_.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.resolution_) -
    reinterpret_cast<char*>(&_impl_.width_)) + sizeof(_impl_.resolution_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.SubmapTexture)
}

inline void SubmapTexture::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.cells_){}
    , decltype(_impl_.slice_pose_){nullptr}
    , decltype(_impl_.width_){0}
    , decltype(_impl_.height_){0}
    , decltype(_impl_.resolution_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.cells_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.cells_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SubmapTexture::~SubmapTexture() {
  // @@protoc_insertion_point(destructor:LSLAM.SubmapTexture)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SubmapTexture::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.cells_.Destroy();
  if (this != internal_default_instance()) delete _impl_.slice_pose_;
}

void SubmapTexture::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SubmapTexture::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.SubmapTexture)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cells_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.slice_pose_ != nullptr) {
    delete _impl_.slice_pose_;
  }
  _impl_.slice_pose_ = nullptr;
  ::memset(&_impl_.width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.resolution_) -
      reinterpret_cast<char*>(&_impl_.width_)) + sizeof(_impl_.resolution_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SubmapTexture::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string cells = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_cells();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "LSLAM.SubmapTexture.cells"));
        } else
          goto handle_unusual;
        continue;
      // int32 width = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 height = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // double resolution = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _impl_.resolution_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.Pose slice_pose = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_slice_pose(), ptr);
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

uint8_t* SubmapTexture::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.SubmapTexture)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string cells = 1;
  if (!this->_internal_cells().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_cells().data(), static_cast<int>(this->_internal_cells().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "LSLAM.SubmapTexture.cells");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_cells(), target);
  }

  // int32 width = 2;
  if (this->_internal_width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_width(), target);
  }

  // int32 height = 3;
  if (this->_internal_height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_height(), target);
  }

  // double resolution = 4;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_resolution = this->_internal_resolution();
  uint64_t raw_resolution;
  memcpy(&raw_resolution, &tmp_resolution, sizeof(tmp_resolution));
  if (raw_resolution != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(4, this->_internal_resolution(), target);
  }

  // .LSLAM.Pose slice_pose = 5;
  if (this->_internal_has_slice_pose()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::slice_pose(this),
        _Internal::slice_pose(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.SubmapTexture)
  return target;
}

size_t SubmapTexture::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.SubmapTexture)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string cells = 1;
  if (!this->_internal_cells().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_cells());
  }

  // .LSLAM.Pose slice_pose = 5;
  if (this->_internal_has_slice_pose()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.slice_pose_);
  }

  // int32 width = 2;
  if (this->_internal_width() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_width());
  }

  // int32 height = 3;
  if (this->_internal_height() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_height());
  }

  // double resolution = 4;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_resolution = this->_internal_resolution();
  uint64_t raw_resolution;
  memcpy(&raw_resolution, &tmp_resolution, sizeof(tmp_resolution));
  if (raw_resolution != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SubmapTexture::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SubmapTexture::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SubmapTexture::GetClassData() const { return &_class_data_; }


void SubmapTexture::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SubmapTexture*>(&to_msg);
  auto& from = static_cast<const SubmapTexture&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.SubmapTexture)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_cells().empty()) {
    _this->_internal_set_cells(from._internal_cells());
  }
  if (from._internal_has_slice_pose()) {
    _this->_internal_mutable_slice_pose()->::LSLAM::Pose::MergeFrom(
        from._internal_slice_pose());
  }
  if (from._internal_width() != 0) {
    _this->_internal_set_width(from._internal_width());
  }
  if (from._internal_height() != 0) {
    _this->_internal_set_height(from._internal_height());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_resolution = from._internal_resolution();
  uint64_t raw_resolution;
  memcpy(&raw_resolution, &tmp_resolution, sizeof(tmp_resolution));
  if (raw_resolution != 0) {
    _this->_internal_set_resolution(from._internal_resolution());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SubmapTexture::CopyFrom(const SubmapTexture& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.SubmapTexture)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubmapTexture::IsInitialized() const {
  return true;
}

void SubmapTexture::InternalSwap(SubmapTexture* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.cells_, lhs_arena,
      &other->_impl_.cells_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SubmapTexture, _impl_.resolution_)
      + sizeof(SubmapTexture::_impl_.resolution_)
      - PROTOBUF_FIELD_OFFSET(SubmapTexture, _impl_.slice_pose_)>(
          reinterpret_cast<char*>(&_impl_.slice_pose_),
          reinterpret_cast<char*>(&other->_impl_.slice_pose_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SubmapTexture::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SubmapTexture_2eproto_getter, &descriptor_table_SubmapTexture_2eproto_once,
      file_level_metadata_SubmapTexture_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::SubmapTexture*
Arena::CreateMaybeMessage< ::LSLAM::SubmapTexture >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::SubmapTexture >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>