// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PointCloudWithIntensities.proto

#include "PointCloudWithIntensities.pb.h"

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
PROTOBUF_CONSTEXPR Point3dWithTime::Point3dWithTime(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_.y_)*/0
  , /*decltype(_impl_.z_)*/0
  , /*decltype(_impl_.time_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct Point3dWithTimeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Point3dWithTimeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Point3dWithTimeDefaultTypeInternal() {}
  union {
    Point3dWithTime _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Point3dWithTimeDefaultTypeInternal _Point3dWithTime_default_instance_;
PROTOBUF_CONSTEXPR PointCloudWithIntensities::PointCloudWithIntensities(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.points_)*/{}
  , /*decltype(_impl_.intensities_)*/{}
  , /*decltype(_impl_.header_)*/nullptr
  , /*decltype(_impl_.lidar_error_type_)*/0
  , /*decltype(_impl_.lidar_error_code_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PointCloudWithIntensitiesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PointCloudWithIntensitiesDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PointCloudWithIntensitiesDefaultTypeInternal() {}
  union {
    PointCloudWithIntensities _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PointCloudWithIntensitiesDefaultTypeInternal _PointCloudWithIntensities_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_PointCloudWithIntensities_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_PointCloudWithIntensities_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_PointCloudWithIntensities_2eproto = nullptr;

const uint32_t TableStruct_PointCloudWithIntensities_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::Point3dWithTime, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::Point3dWithTime, _impl_.x_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::Point3dWithTime, _impl_.y_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::Point3dWithTime, _impl_.z_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::Point3dWithTime, _impl_.time_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::PointCloudWithIntensities, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::PointCloudWithIntensities, _impl_.header_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::PointCloudWithIntensities, _impl_.points_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::PointCloudWithIntensities, _impl_.intensities_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::PointCloudWithIntensities, _impl_.lidar_error_type_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::PointCloudWithIntensities, _impl_.lidar_error_code_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::Point3dWithTime)},
  { 12, -1, -1, sizeof(::LSLAM::PointCloudWithIntensities)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_Point3dWithTime_default_instance_._instance,
  &::LSLAM::_PointCloudWithIntensities_default_instance_._instance,
};

const char descriptor_table_protodef_PointCloudWithIntensities_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037PointCloudWithIntensities.proto\022\005LSLAM"
  "\032\014Header.proto\"@\n\017Point3dWithTime\022\t\n\001x\030\001"
  " \001(\001\022\t\n\001y\030\002 \001(\001\022\t\n\001z\030\003 \001(\001\022\014\n\004time\030\004 \001(\001"
  "\"\302\001\n\031PointCloudWithIntensities\022\035\n\006header"
  "\030\001 \001(\0132\r.LSLAM.Header\022&\n\006points\030\002 \003(\0132\026."
  "LSLAM.Point3dWithTime\022\023\n\013intensities\030\003 \003"
  "(\001\022/\n\020lidar_error_type\030\004 \001(\0162\025.LSLAM.Lid"
  "arErrorType\022\030\n\020lidar_error_code\030\005 \001(\005*W\n"
  "\016LidarErrorType\022\014\n\010NO_ERROR\020\000\022\035\n\031LIDAR_C"
  "OMMUNICATION_ERROR\020\001\022\030\n\024LIDAR_HARDWARE_E"
  "RROR\020\002b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_PointCloudWithIntensities_2eproto_deps[1] = {
  &::descriptor_table_Header_2eproto,
};
static ::_pbi::once_flag descriptor_table_PointCloudWithIntensities_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_PointCloudWithIntensities_2eproto = {
    false, false, 414, descriptor_table_protodef_PointCloudWithIntensities_2eproto,
    "PointCloudWithIntensities.proto",
    &descriptor_table_PointCloudWithIntensities_2eproto_once, descriptor_table_PointCloudWithIntensities_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_PointCloudWithIntensities_2eproto::offsets,
    file_level_metadata_PointCloudWithIntensities_2eproto, file_level_enum_descriptors_PointCloudWithIntensities_2eproto,
    file_level_service_descriptors_PointCloudWithIntensities_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_PointCloudWithIntensities_2eproto_getter() {
  return &descriptor_table_PointCloudWithIntensities_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_PointCloudWithIntensities_2eproto(&descriptor_table_PointCloudWithIntensities_2eproto);
namespace LSLAM {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LidarErrorType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_PointCloudWithIntensities_2eproto);
  return file_level_enum_descriptors_PointCloudWithIntensities_2eproto[0];
}
bool LidarErrorType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class Point3dWithTime::_Internal {
 public:
};

Point3dWithTime::Point3dWithTime(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.Point3dWithTime)
}
Point3dWithTime::Point3dWithTime(const Point3dWithTime& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Point3dWithTime* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){}
    , decltype(_impl_.y_){}
    , decltype(_impl_.z_){}
    , decltype(_impl_.time_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.time_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.time_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.Point3dWithTime)
}

inline void Point3dWithTime::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){0}
    , decltype(_impl_.y_){0}
    , decltype(_impl_.z_){0}
    , decltype(_impl_.time_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Point3dWithTime::~Point3dWithTime() {
  // @@protoc_insertion_point(destructor:LSLAM.Point3dWithTime)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Point3dWithTime::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Point3dWithTime::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Point3dWithTime::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.Point3dWithTime)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.time_) -
      reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.time_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Point3dWithTime::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
      // double time = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _impl_.time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

uint8_t* Point3dWithTime::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.Point3dWithTime)
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

  // double time = 4;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_time = this->_internal_time();
  uint64_t raw_time;
  memcpy(&raw_time, &tmp_time, sizeof(tmp_time));
  if (raw_time != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(4, this->_internal_time(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.Point3dWithTime)
  return target;
}

size_t Point3dWithTime::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.Point3dWithTime)
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

  // double time = 4;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_time = this->_internal_time();
  uint64_t raw_time;
  memcpy(&raw_time, &tmp_time, sizeof(tmp_time));
  if (raw_time != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Point3dWithTime::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Point3dWithTime::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Point3dWithTime::GetClassData() const { return &_class_data_; }


void Point3dWithTime::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Point3dWithTime*>(&to_msg);
  auto& from = static_cast<const Point3dWithTime&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.Point3dWithTime)
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
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_time = from._internal_time();
  uint64_t raw_time;
  memcpy(&raw_time, &tmp_time, sizeof(tmp_time));
  if (raw_time != 0) {
    _this->_internal_set_time(from._internal_time());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Point3dWithTime::CopyFrom(const Point3dWithTime& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.Point3dWithTime)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Point3dWithTime::IsInitialized() const {
  return true;
}

void Point3dWithTime::InternalSwap(Point3dWithTime* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Point3dWithTime, _impl_.time_)
      + sizeof(Point3dWithTime::_impl_.time_)
      - PROTOBUF_FIELD_OFFSET(Point3dWithTime, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Point3dWithTime::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_PointCloudWithIntensities_2eproto_getter, &descriptor_table_PointCloudWithIntensities_2eproto_once,
      file_level_metadata_PointCloudWithIntensities_2eproto[0]);
}

// ===================================================================

class PointCloudWithIntensities::_Internal {
 public:
  static const ::LSLAM::Header& header(const PointCloudWithIntensities* msg);
};

const ::LSLAM::Header&
PointCloudWithIntensities::_Internal::header(const PointCloudWithIntensities* msg) {
  return *msg->_impl_.header_;
}
void PointCloudWithIntensities::clear_header() {
  if (GetArenaForAllocation() == nullptr && _impl_.header_ != nullptr) {
    delete _impl_.header_;
  }
  _impl_.header_ = nullptr;
}
PointCloudWithIntensities::PointCloudWithIntensities(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.PointCloudWithIntensities)
}
PointCloudWithIntensities::PointCloudWithIntensities(const PointCloudWithIntensities& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PointCloudWithIntensities* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.points_){from._impl_.points_}
    , decltype(_impl_.intensities_){from._impl_.intensities_}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.lidar_error_type_){}
    , decltype(_impl_.lidar_error_code_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    _this->_impl_.header_ = new ::LSLAM::Header(*from._impl_.header_);
  }
  ::memcpy(&_impl_.lidar_error_type_, &from._impl_.lidar_error_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.lidar_error_code_) -
    reinterpret_cast<char*>(&_impl_.lidar_error_type_)) + sizeof(_impl_.lidar_error_code_));
  // @@protoc_insertion_point(copy_constructor:LSLAM.PointCloudWithIntensities)
}

inline void PointCloudWithIntensities::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.points_){arena}
    , decltype(_impl_.intensities_){arena}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.lidar_error_type_){0}
    , decltype(_impl_.lidar_error_code_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

PointCloudWithIntensities::~PointCloudWithIntensities() {
  // @@protoc_insertion_point(destructor:LSLAM.PointCloudWithIntensities)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PointCloudWithIntensities::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.points_.~RepeatedPtrField();
  _impl_.intensities_.~RepeatedField();
  if (this != internal_default_instance()) delete _impl_.header_;
}

void PointCloudWithIntensities::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PointCloudWithIntensities::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.PointCloudWithIntensities)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.points_.Clear();
  _impl_.intensities_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.header_ != nullptr) {
    delete _impl_.header_;
  }
  _impl_.header_ = nullptr;
  ::memset(&_impl_.lidar_error_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.lidar_error_code_) -
      reinterpret_cast<char*>(&_impl_.lidar_error_type_)) + sizeof(_impl_.lidar_error_code_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PointCloudWithIntensities::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .LSLAM.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .LSLAM.Point3dWithTime points = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_points(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated double intensities = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_intensities(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 25) {
          _internal_add_intensities(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // .LSLAM.LidarErrorType lidar_error_type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_lidar_error_type(static_cast<::LSLAM::LidarErrorType>(val));
        } else
          goto handle_unusual;
        continue;
      // int32 lidar_error_code = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.lidar_error_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* PointCloudWithIntensities::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.PointCloudWithIntensities)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .LSLAM.Header header = 1;
  if (this->_internal_has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::header(this),
        _Internal::header(this).GetCachedSize(), target, stream);
  }

  // repeated .LSLAM.Point3dWithTime points = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_points_size()); i < n; i++) {
    const auto& repfield = this->_internal_points(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated double intensities = 3;
  if (this->_internal_intensities_size() > 0) {
    target = stream->WriteFixedPacked(3, _internal_intensities(), target);
  }

  // .LSLAM.LidarErrorType lidar_error_type = 4;
  if (this->_internal_lidar_error_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_lidar_error_type(), target);
  }

  // int32 lidar_error_code = 5;
  if (this->_internal_lidar_error_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_lidar_error_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.PointCloudWithIntensities)
  return target;
}

size_t PointCloudWithIntensities::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.PointCloudWithIntensities)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .LSLAM.Point3dWithTime points = 2;
  total_size += 1UL * this->_internal_points_size();
  for (const auto& msg : this->_impl_.points_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated double intensities = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_intensities_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    total_size += data_size;
  }

  // .LSLAM.Header header = 1;
  if (this->_internal_has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.header_);
  }

  // .LSLAM.LidarErrorType lidar_error_type = 4;
  if (this->_internal_lidar_error_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_lidar_error_type());
  }

  // int32 lidar_error_code = 5;
  if (this->_internal_lidar_error_code() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_lidar_error_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PointCloudWithIntensities::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PointCloudWithIntensities::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PointCloudWithIntensities::GetClassData() const { return &_class_data_; }


void PointCloudWithIntensities::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PointCloudWithIntensities*>(&to_msg);
  auto& from = static_cast<const PointCloudWithIntensities&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.PointCloudWithIntensities)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.points_.MergeFrom(from._impl_.points_);
  _this->_impl_.intensities_.MergeFrom(from._impl_.intensities_);
  if (from._internal_has_header()) {
    _this->_internal_mutable_header()->::LSLAM::Header::MergeFrom(
        from._internal_header());
  }
  if (from._internal_lidar_error_type() != 0) {
    _this->_internal_set_lidar_error_type(from._internal_lidar_error_type());
  }
  if (from._internal_lidar_error_code() != 0) {
    _this->_internal_set_lidar_error_code(from._internal_lidar_error_code());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PointCloudWithIntensities::CopyFrom(const PointCloudWithIntensities& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.PointCloudWithIntensities)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PointCloudWithIntensities::IsInitialized() const {
  return true;
}

void PointCloudWithIntensities::InternalSwap(PointCloudWithIntensities* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.points_.InternalSwap(&other->_impl_.points_);
  _impl_.intensities_.InternalSwap(&other->_impl_.intensities_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PointCloudWithIntensities, _impl_.lidar_error_code_)
      + sizeof(PointCloudWithIntensities::_impl_.lidar_error_code_)
      - PROTOBUF_FIELD_OFFSET(PointCloudWithIntensities, _impl_.header_)>(
          reinterpret_cast<char*>(&_impl_.header_),
          reinterpret_cast<char*>(&other->_impl_.header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PointCloudWithIntensities::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_PointCloudWithIntensities_2eproto_getter, &descriptor_table_PointCloudWithIntensities_2eproto_once,
      file_level_metadata_PointCloudWithIntensities_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::Point3dWithTime*
Arena::CreateMaybeMessage< ::LSLAM::Point3dWithTime >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::Point3dWithTime >(arena);
}
template<> PROTOBUF_NOINLINE ::LSLAM::PointCloudWithIntensities*
Arena::CreateMaybeMessage< ::LSLAM::PointCloudWithIntensities >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::PointCloudWithIntensities >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
