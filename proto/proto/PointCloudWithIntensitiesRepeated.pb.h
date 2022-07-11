// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PointCloudWithIntensitiesRepeated.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PointCloudWithIntensitiesRepeated_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PointCloudWithIntensitiesRepeated_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "PointCloudWithIntensities.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PointCloudWithIntensitiesRepeated_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PointCloudWithIntensitiesRepeated_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PointCloudWithIntensitiesRepeated_2eproto;
namespace LSLAM {
class PointCloudWithIntensitiesRepeated;
struct PointCloudWithIntensitiesRepeatedDefaultTypeInternal;
extern PointCloudWithIntensitiesRepeatedDefaultTypeInternal _PointCloudWithIntensitiesRepeated_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::PointCloudWithIntensitiesRepeated* Arena::CreateMaybeMessage<::LSLAM::PointCloudWithIntensitiesRepeated>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class PointCloudWithIntensitiesRepeated final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.PointCloudWithIntensitiesRepeated) */ {
 public:
  inline PointCloudWithIntensitiesRepeated() : PointCloudWithIntensitiesRepeated(nullptr) {}
  ~PointCloudWithIntensitiesRepeated() override;
  explicit PROTOBUF_CONSTEXPR PointCloudWithIntensitiesRepeated(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PointCloudWithIntensitiesRepeated(const PointCloudWithIntensitiesRepeated& from);
  PointCloudWithIntensitiesRepeated(PointCloudWithIntensitiesRepeated&& from) noexcept
    : PointCloudWithIntensitiesRepeated() {
    *this = ::std::move(from);
  }

  inline PointCloudWithIntensitiesRepeated& operator=(const PointCloudWithIntensitiesRepeated& from) {
    CopyFrom(from);
    return *this;
  }
  inline PointCloudWithIntensitiesRepeated& operator=(PointCloudWithIntensitiesRepeated&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PointCloudWithIntensitiesRepeated& default_instance() {
    return *internal_default_instance();
  }
  static inline const PointCloudWithIntensitiesRepeated* internal_default_instance() {
    return reinterpret_cast<const PointCloudWithIntensitiesRepeated*>(
               &_PointCloudWithIntensitiesRepeated_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PointCloudWithIntensitiesRepeated& a, PointCloudWithIntensitiesRepeated& b) {
    a.Swap(&b);
  }
  inline void Swap(PointCloudWithIntensitiesRepeated* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PointCloudWithIntensitiesRepeated* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PointCloudWithIntensitiesRepeated* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PointCloudWithIntensitiesRepeated>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PointCloudWithIntensitiesRepeated& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PointCloudWithIntensitiesRepeated& from) {
    PointCloudWithIntensitiesRepeated::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PointCloudWithIntensitiesRepeated* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.PointCloudWithIntensitiesRepeated";
  }
  protected:
  explicit PointCloudWithIntensitiesRepeated(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointCloudsFieldNumber = 1,
  };
  // repeated .LSLAM.PointCloudWithIntensities pointClouds = 1;
  int pointclouds_size() const;
  private:
  int _internal_pointclouds_size() const;
  public:
  void clear_pointclouds();
  ::LSLAM::PointCloudWithIntensities* mutable_pointclouds(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::PointCloudWithIntensities >*
      mutable_pointclouds();
  private:
  const ::LSLAM::PointCloudWithIntensities& _internal_pointclouds(int index) const;
  ::LSLAM::PointCloudWithIntensities* _internal_add_pointclouds();
  public:
  const ::LSLAM::PointCloudWithIntensities& pointclouds(int index) const;
  ::LSLAM::PointCloudWithIntensities* add_pointclouds();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::PointCloudWithIntensities >&
      pointclouds() const;

  // @@protoc_insertion_point(class_scope:LSLAM.PointCloudWithIntensitiesRepeated)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::PointCloudWithIntensities > pointclouds_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_PointCloudWithIntensitiesRepeated_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PointCloudWithIntensitiesRepeated

// repeated .LSLAM.PointCloudWithIntensities pointClouds = 1;
inline int PointCloudWithIntensitiesRepeated::_internal_pointclouds_size() const {
  return _impl_.pointclouds_.size();
}
inline int PointCloudWithIntensitiesRepeated::pointclouds_size() const {
  return _internal_pointclouds_size();
}
inline ::LSLAM::PointCloudWithIntensities* PointCloudWithIntensitiesRepeated::mutable_pointclouds(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.PointCloudWithIntensitiesRepeated.pointClouds)
  return _impl_.pointclouds_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::PointCloudWithIntensities >*
PointCloudWithIntensitiesRepeated::mutable_pointclouds() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.PointCloudWithIntensitiesRepeated.pointClouds)
  return &_impl_.pointclouds_;
}
inline const ::LSLAM::PointCloudWithIntensities& PointCloudWithIntensitiesRepeated::_internal_pointclouds(int index) const {
  return _impl_.pointclouds_.Get(index);
}
inline const ::LSLAM::PointCloudWithIntensities& PointCloudWithIntensitiesRepeated::pointclouds(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.PointCloudWithIntensitiesRepeated.pointClouds)
  return _internal_pointclouds(index);
}
inline ::LSLAM::PointCloudWithIntensities* PointCloudWithIntensitiesRepeated::_internal_add_pointclouds() {
  return _impl_.pointclouds_.Add();
}
inline ::LSLAM::PointCloudWithIntensities* PointCloudWithIntensitiesRepeated::add_pointclouds() {
  ::LSLAM::PointCloudWithIntensities* _add = _internal_add_pointclouds();
  // @@protoc_insertion_point(field_add:LSLAM.PointCloudWithIntensitiesRepeated.pointClouds)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::PointCloudWithIntensities >&
PointCloudWithIntensitiesRepeated::pointclouds() const {
  // @@protoc_insertion_point(field_list:LSLAM.PointCloudWithIntensitiesRepeated.pointClouds)
  return _impl_.pointclouds_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PointCloudWithIntensitiesRepeated_2eproto