// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrajectoryTraceBackPart.proto

#include "TrajectoryTraceBackPart.pb.h"

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
PROTOBUF_CONSTEXPR TrajectoryTraceBackPart::TrajectoryTraceBackPart(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.trajectory_points_)*/{}
  , /*decltype(_impl_.aim_points_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TrajectoryTraceBackPartDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrajectoryTraceBackPartDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrajectoryTraceBackPartDefaultTypeInternal() {}
  union {
    TrajectoryTraceBackPart _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrajectoryTraceBackPartDefaultTypeInternal _TrajectoryTraceBackPart_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_TrajectoryTraceBackPart_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_TrajectoryTraceBackPart_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_TrajectoryTraceBackPart_2eproto = nullptr;

const uint32_t TableStruct_TrajectoryTraceBackPart_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::TrajectoryTraceBackPart, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::TrajectoryTraceBackPart, _impl_.trajectory_points_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::TrajectoryTraceBackPart, _impl_.aim_points_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::TrajectoryTraceBackPart)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_TrajectoryTraceBackPart_default_instance_._instance,
};

const char descriptor_table_protodef_TrajectoryTraceBackPart_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035TrajectoryTraceBackPart.proto\022\005LSLAM\032\013"
  "Point.proto\"d\n\027TrajectoryTraceBackPart\022\'"
  "\n\021trajectory_points\030\001 \003(\0132\014.LSLAM.Point\022"
  " \n\naim_points\030\002 \003(\0132\014.LSLAM.Pointb\006proto"
  "3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_TrajectoryTraceBackPart_2eproto_deps[1] = {
  &::descriptor_table_Point_2eproto,
};
static ::_pbi::once_flag descriptor_table_TrajectoryTraceBackPart_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_TrajectoryTraceBackPart_2eproto = {
    false, false, 161, descriptor_table_protodef_TrajectoryTraceBackPart_2eproto,
    "TrajectoryTraceBackPart.proto",
    &descriptor_table_TrajectoryTraceBackPart_2eproto_once, descriptor_table_TrajectoryTraceBackPart_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_TrajectoryTraceBackPart_2eproto::offsets,
    file_level_metadata_TrajectoryTraceBackPart_2eproto, file_level_enum_descriptors_TrajectoryTraceBackPart_2eproto,
    file_level_service_descriptors_TrajectoryTraceBackPart_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_TrajectoryTraceBackPart_2eproto_getter() {
  return &descriptor_table_TrajectoryTraceBackPart_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_TrajectoryTraceBackPart_2eproto(&descriptor_table_TrajectoryTraceBackPart_2eproto);
namespace LSLAM {

// ===================================================================

class TrajectoryTraceBackPart::_Internal {
 public:
};

void TrajectoryTraceBackPart::clear_trajectory_points() {
  _impl_.trajectory_points_.Clear();
}
void TrajectoryTraceBackPart::clear_aim_points() {
  _impl_.aim_points_.Clear();
}
TrajectoryTraceBackPart::TrajectoryTraceBackPart(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.TrajectoryTraceBackPart)
}
TrajectoryTraceBackPart::TrajectoryTraceBackPart(const TrajectoryTraceBackPart& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TrajectoryTraceBackPart* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.trajectory_points_){from._impl_.trajectory_points_}
    , decltype(_impl_.aim_points_){from._impl_.aim_points_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:LSLAM.TrajectoryTraceBackPart)
}

inline void TrajectoryTraceBackPart::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.trajectory_points_){arena}
    , decltype(_impl_.aim_points_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

TrajectoryTraceBackPart::~TrajectoryTraceBackPart() {
  // @@protoc_insertion_point(destructor:LSLAM.TrajectoryTraceBackPart)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrajectoryTraceBackPart::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.trajectory_points_.~RepeatedPtrField();
  _impl_.aim_points_.~RepeatedPtrField();
}

void TrajectoryTraceBackPart::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TrajectoryTraceBackPart::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.TrajectoryTraceBackPart)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.trajectory_points_.Clear();
  _impl_.aim_points_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TrajectoryTraceBackPart::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .LSLAM.Point trajectory_points = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_trajectory_points(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .LSLAM.Point aim_points = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_aim_points(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* TrajectoryTraceBackPart::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.TrajectoryTraceBackPart)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .LSLAM.Point trajectory_points = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_trajectory_points_size()); i < n; i++) {
    const auto& repfield = this->_internal_trajectory_points(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .LSLAM.Point aim_points = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_aim_points_size()); i < n; i++) {
    const auto& repfield = this->_internal_aim_points(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.TrajectoryTraceBackPart)
  return target;
}

size_t TrajectoryTraceBackPart::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.TrajectoryTraceBackPart)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .LSLAM.Point trajectory_points = 1;
  total_size += 1UL * this->_internal_trajectory_points_size();
  for (const auto& msg : this->_impl_.trajectory_points_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .LSLAM.Point aim_points = 2;
  total_size += 1UL * this->_internal_aim_points_size();
  for (const auto& msg : this->_impl_.aim_points_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TrajectoryTraceBackPart::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TrajectoryTraceBackPart::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TrajectoryTraceBackPart::GetClassData() const { return &_class_data_; }


void TrajectoryTraceBackPart::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TrajectoryTraceBackPart*>(&to_msg);
  auto& from = static_cast<const TrajectoryTraceBackPart&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.TrajectoryTraceBackPart)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.trajectory_points_.MergeFrom(from._impl_.trajectory_points_);
  _this->_impl_.aim_points_.MergeFrom(from._impl_.aim_points_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TrajectoryTraceBackPart::CopyFrom(const TrajectoryTraceBackPart& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.TrajectoryTraceBackPart)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrajectoryTraceBackPart::IsInitialized() const {
  return true;
}

void TrajectoryTraceBackPart::InternalSwap(TrajectoryTraceBackPart* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.trajectory_points_.InternalSwap(&other->_impl_.trajectory_points_);
  _impl_.aim_points_.InternalSwap(&other->_impl_.aim_points_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TrajectoryTraceBackPart::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_TrajectoryTraceBackPart_2eproto_getter, &descriptor_table_TrajectoryTraceBackPart_2eproto_once,
      file_level_metadata_TrajectoryTraceBackPart_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::TrajectoryTraceBackPart*
Arena::CreateMaybeMessage< ::LSLAM::TrajectoryTraceBackPart >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::TrajectoryTraceBackPart >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
