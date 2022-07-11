// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UnexpectPoint.proto

#include "UnexpectPoint.pb.h"

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
PROTOBUF_CONSTEXPR UnexpectPoint::UnexpectPoint(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.near_free_)*/{}
  , /*decltype(_impl_.near_occupancy_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UnexpectPointDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UnexpectPointDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UnexpectPointDefaultTypeInternal() {}
  union {
    UnexpectPoint _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UnexpectPointDefaultTypeInternal _UnexpectPoint_default_instance_;
}  // namespace LSLAM
static ::_pb::Metadata file_level_metadata_UnexpectPoint_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_UnexpectPoint_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_UnexpectPoint_2eproto = nullptr;

const uint32_t TableStruct_UnexpectPoint_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LSLAM::UnexpectPoint, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::LSLAM::UnexpectPoint, _impl_.near_free_),
  PROTOBUF_FIELD_OFFSET(::LSLAM::UnexpectPoint, _impl_.near_occupancy_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::LSLAM::UnexpectPoint)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::LSLAM::_UnexpectPoint_default_instance_._instance,
};

const char descriptor_table_protodef_UnexpectPoint_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023UnexpectPoint.proto\022\005LSLAM\032\013Point.prot"
  "o\"V\n\rUnexpectPoint\022\037\n\tnear_free\030\001 \003(\0132\014."
  "LSLAM.Point\022$\n\016near_occupancy\030\002 \003(\0132\014.LS"
  "LAM.Pointb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_UnexpectPoint_2eproto_deps[1] = {
  &::descriptor_table_Point_2eproto,
};
static ::_pbi::once_flag descriptor_table_UnexpectPoint_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_UnexpectPoint_2eproto = {
    false, false, 137, descriptor_table_protodef_UnexpectPoint_2eproto,
    "UnexpectPoint.proto",
    &descriptor_table_UnexpectPoint_2eproto_once, descriptor_table_UnexpectPoint_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_UnexpectPoint_2eproto::offsets,
    file_level_metadata_UnexpectPoint_2eproto, file_level_enum_descriptors_UnexpectPoint_2eproto,
    file_level_service_descriptors_UnexpectPoint_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_UnexpectPoint_2eproto_getter() {
  return &descriptor_table_UnexpectPoint_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_UnexpectPoint_2eproto(&descriptor_table_UnexpectPoint_2eproto);
namespace LSLAM {

// ===================================================================

class UnexpectPoint::_Internal {
 public:
};

void UnexpectPoint::clear_near_free() {
  _impl_.near_free_.Clear();
}
void UnexpectPoint::clear_near_occupancy() {
  _impl_.near_occupancy_.Clear();
}
UnexpectPoint::UnexpectPoint(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:LSLAM.UnexpectPoint)
}
UnexpectPoint::UnexpectPoint(const UnexpectPoint& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UnexpectPoint* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.near_free_){from._impl_.near_free_}
    , decltype(_impl_.near_occupancy_){from._impl_.near_occupancy_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:LSLAM.UnexpectPoint)
}

inline void UnexpectPoint::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.near_free_){arena}
    , decltype(_impl_.near_occupancy_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

UnexpectPoint::~UnexpectPoint() {
  // @@protoc_insertion_point(destructor:LSLAM.UnexpectPoint)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UnexpectPoint::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.near_free_.~RepeatedPtrField();
  _impl_.near_occupancy_.~RepeatedPtrField();
}

void UnexpectPoint::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UnexpectPoint::Clear() {
// @@protoc_insertion_point(message_clear_start:LSLAM.UnexpectPoint)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.near_free_.Clear();
  _impl_.near_occupancy_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UnexpectPoint::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .LSLAM.Point near_free = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_near_free(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .LSLAM.Point near_occupancy = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_near_occupancy(), ptr);
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

uint8_t* UnexpectPoint::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSLAM.UnexpectPoint)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .LSLAM.Point near_free = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_near_free_size()); i < n; i++) {
    const auto& repfield = this->_internal_near_free(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .LSLAM.Point near_occupancy = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_near_occupancy_size()); i < n; i++) {
    const auto& repfield = this->_internal_near_occupancy(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSLAM.UnexpectPoint)
  return target;
}

size_t UnexpectPoint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LSLAM.UnexpectPoint)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .LSLAM.Point near_free = 1;
  total_size += 1UL * this->_internal_near_free_size();
  for (const auto& msg : this->_impl_.near_free_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .LSLAM.Point near_occupancy = 2;
  total_size += 1UL * this->_internal_near_occupancy_size();
  for (const auto& msg : this->_impl_.near_occupancy_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UnexpectPoint::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UnexpectPoint::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UnexpectPoint::GetClassData() const { return &_class_data_; }


void UnexpectPoint::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UnexpectPoint*>(&to_msg);
  auto& from = static_cast<const UnexpectPoint&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LSLAM.UnexpectPoint)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.near_free_.MergeFrom(from._impl_.near_free_);
  _this->_impl_.near_occupancy_.MergeFrom(from._impl_.near_occupancy_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UnexpectPoint::CopyFrom(const UnexpectPoint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LSLAM.UnexpectPoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnexpectPoint::IsInitialized() const {
  return true;
}

void UnexpectPoint::InternalSwap(UnexpectPoint* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.near_free_.InternalSwap(&other->_impl_.near_free_);
  _impl_.near_occupancy_.InternalSwap(&other->_impl_.near_occupancy_);
}

::PROTOBUF_NAMESPACE_ID::Metadata UnexpectPoint::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_UnexpectPoint_2eproto_getter, &descriptor_table_UnexpectPoint_2eproto_once,
      file_level_metadata_UnexpectPoint_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LSLAM::UnexpectPoint*
Arena::CreateMaybeMessage< ::LSLAM::UnexpectPoint >(Arena* arena) {
  return Arena::CreateMessageInternal< ::LSLAM::UnexpectPoint >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>