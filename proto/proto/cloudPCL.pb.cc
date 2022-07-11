// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cloudPCL.proto

#include "cloudPCL.pb.h"

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
PROTOBUF_CONSTEXPR PT::PT(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_.y_)*/0
  , /*decltype(_impl_.z_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PTDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PTDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PTDefaultTypeInternal() {}
  union {
    PT _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PTDefaultTypeInternal _PT_default_instance_;
PROTOBUF_CONSTEXPR cloudPt::cloudPt(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.pt_)*/{}
  , /*decltype(_impl_.stamp_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct cloudPtDefaultTypeInternal {
  PROTOBUF_CONSTEXPR cloudPtDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~cloudPtDefaultTypeInternal() {}
  union {
    cloudPt _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 cloudPtDefaultTypeInternal _cloudPt_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_cloudPCL_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_cloudPCL_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_cloudPCL_2eproto = nullptr;

const uint32_t TableStruct_cloudPCL_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::PT, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::PT, _impl_.x_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::PT, _impl_.y_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::PT, _impl_.z_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::cloudPt, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::cloudPt, _impl_.pt_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::cloudPt, _impl_.stamp_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::PT)},
  { 11, -1, -1, sizeof(::LSLAM::cloudPt)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_PT_default_instance_._instance,
  &::LSLAM::_cloudPt_default_instance_._instance,
};

const char descriptor_table_protodef_cloudPCL_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016cloudPCL.proto\022\005LSLAM\"%\n\002PT\022\t\n\001x\030\001 \001(\001"
  "\022\t\n\001y\030\002 \001(\001\022\t\n\001z\030\003 \001(\001\"/\n\007cloudPt\022\025\n\002pt\030"
  "\001 \003(\0132\t.LSLAM.PT\022\r\n\005stamp\030\002 \001(\003b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_cloudPCL_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cloudPCL_2eproto = {
    false, false, 119, descriptor_table_protodef_cloudPCL_2eproto,
    "cloudPCL.proto",
    &descriptor_table_cloudPCL_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_cloudPCL_2eproto::offsets,
    file_level_metadata_cloudPCL_2eproto, file_level_enum_descriptors_cloudPCL_2eproto,
    file_level_service_descriptors_cloudPCL_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cloudPCL_2eproto_getter() {
  return &descriptor_table_cloudPCL_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cloudPCL_2eproto(&descriptor_table_cloudPCL_2eproto);
namespace LSLAM {

// ===================================================================

class PT::_Internal {
 public:
};

PT::PT(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.PT)
}
PT::PT(const PT& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PT* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){}
    , decltype(_impl_.y_){}
    , decltype(_impl_.z_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.z_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.z_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.PT)
}

inline void PT::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){0}
    , decltype(_impl_.y_){0}
    , decltype(_impl_.z_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

PT::~PT() {
  // @@protoc_insertion_point(destructor:LSLAM.PT)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PT::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void PT::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PT::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.PT)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.z_) -
      reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.z_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PT::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _impl_.y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // double z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _impl_.z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

uint8_t* PT::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.PT)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_x = this->_internal_x();
  uint64_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_x(), target);
  }

  // double y = 2;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_y = this->_internal_y();
  uint64_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_y(), target);
  }

  // double z = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_z = this->_internal_z();
  uint64_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.PT)
  return target;
}

size_t PT::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.PT)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double x = 1;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_x = this->_internal_x();
  uint64_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    total_size += 1 + 8;
  }

  // double y = 2;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_y = this->_internal_y();
  uint64_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    total_size += 1 + 8;
  }

  // double z = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_z = this->_internal_z();
  uint64_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PT::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PT::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PT::GetClassData() const { return &_class_data_; }


void PT::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PT*>(&to_msg);
  auto& from = static_cast<const PT&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.PT)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_x = from._internal_x();
  uint64_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    _this->_internal_set_x(from._internal_x());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_y = from._internal_y();
  uint64_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    _this->_internal_set_y(from._internal_y());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_z = from._internal_z();
  uint64_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    _this->_internal_set_z(from._internal_z());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PT::CopyFrom(const PT& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.PT)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PT::IsInitialized() const {
  return true;
}

void PT::InternalSwap(PT* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PT, _impl_.z_)
      + sizeof(PT::_impl_.z_)
      - PROTOBUF_FIELD_OFFSET(PT, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PT::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cloudPCL_2eproto_getter, &descriptor_table_cloudPCL_2eproto_once,
      file_level_metadata_cloudPCL_2eproto[0]);
}

// ===================================================================

class cloudPt::_Internal {
 public:
};

cloudPt::cloudPt(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.cloudPt)
}
cloudPt::cloudPt(const cloudPt& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  cloudPt* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.pt_){from._impl_.pt_}
    , decltype(_impl_.stamp_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.stamp_ = from._impl_.stamp_;
  // @@protoc_insertion_point(copy_constructor:LSLAM.cloudPt)
}

inline void cloudPt::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.pt_){arena}
    , decltype(_impl_.stamp_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

cloudPt::~cloudPt() {
  // @@protoc_insertion_point(destructor:LSLAM.cloudPt)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void cloudPt::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.pt_.~RepeatedPtrField();
}

void cloudPt::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void cloudPt::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.cloudPt)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.pt_.Clear();
  _impl_.stamp_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* cloudPt::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .LSLAM.PT pt = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_pt(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // int64 stamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.stamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* cloudPt::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.cloudPt)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .LSLAM.PT pt = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_pt_size()); i < n; i++) {
    const auto& repfield = this->_internal_pt(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // int64 stamp = 2;
  if (this->_internal_stamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_stamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.cloudPt)
  return target;
}

size_t cloudPt::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.cloudPt)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .LSLAM.PT pt = 1;
  total_size += 1UL * this->_internal_pt_size();
  for (const auto& msg : this->_impl_.pt_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int64 stamp = 2;
  if (this->_internal_stamp() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_stamp());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData cloudPt::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    cloudPt::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*cloudPt::GetClassData() const { return &_class_data_; }


void cloudPt::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<cloudPt*>(&to_msg);
  auto& from = static_cast<const cloudPt&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.cloudPt)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.pt_.MergeFrom(from._impl_.pt_);
  if (from._internal_stamp() != 0) {
    _this->_internal_set_stamp(from._internal_stamp());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void cloudPt::CopyFrom(const cloudPt& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.cloudPt)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool cloudPt::IsInitialized() const {
  return true;
}

void cloudPt::InternalSwap(cloudPt* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.pt_.InternalSwap(&other->_impl_.pt_);
  swap(_impl_.stamp_, other->_impl_.stamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata cloudPt::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cloudPCL_2eproto_getter, &descriptor_table_cloudPCL_2eproto_once,
      file_level_metadata_cloudPCL_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::PT*
Arena::CreateMaybeMessage< ::LSLAM::PT >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::PT >(arena);
}
template<> PROTOBUF_NOINLINE ::LSLAM::cloudPt*
Arena::CreateMaybeMessage< ::LSLAM::cloudPt >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::cloudPt >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>