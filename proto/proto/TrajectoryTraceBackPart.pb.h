// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrajectoryTraceBackPart.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TrajectoryTraceBackPart_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TrajectoryTraceBackPart_2eproto

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
#include "Point.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_TrajectoryTraceBackPart_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TrajectoryTraceBackPart_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TrajectoryTraceBackPart_2eproto;
namespace LSLAM {
class TrajectoryTraceBackPart;
struct TrajectoryTraceBackPartDefaultTypeInternal;
extern TrajectoryTraceBackPartDefaultTypeInternal _TrajectoryTraceBackPart_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::TrajectoryTraceBackPart* Arena::CreateMaybeMessage<::LSLAM::TrajectoryTraceBackPart>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class TrajectoryTraceBackPart final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.TrajectoryTraceBackPart) */ {
 public:
  inline TrajectoryTraceBackPart() : TrajectoryTraceBackPart(nullptr) {}
  ~TrajectoryTraceBackPart() override;
  explicit PROTOBUF_CONSTEXPR TrajectoryTraceBackPart(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TrajectoryTraceBackPart(const TrajectoryTraceBackPart& from);
  TrajectoryTraceBackPart(TrajectoryTraceBackPart&& from) noexcept
    : TrajectoryTraceBackPart() {
    *this = ::std::move(from);
  }

  inline TrajectoryTraceBackPart& operator=(const TrajectoryTraceBackPart& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrajectoryTraceBackPart& operator=(TrajectoryTraceBackPart&& from) noexcept {
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
  static const TrajectoryTraceBackPart& default_instance() {
    return *internal_default_instance();
  }
  static inline const TrajectoryTraceBackPart* internal_default_instance() {
    return reinterpret_cast<const TrajectoryTraceBackPart*>(
               &_TrajectoryTraceBackPart_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TrajectoryTraceBackPart& a, TrajectoryTraceBackPart& b) {
    a.Swap(&b);
  }
  inline void Swap(TrajectoryTraceBackPart* other) {
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
  void UnsafeArenaSwap(TrajectoryTraceBackPart* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TrajectoryTraceBackPart* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TrajectoryTraceBackPart>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TrajectoryTraceBackPart& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TrajectoryTraceBackPart& from) {
    TrajectoryTraceBackPart::MergeImpl(*this, from);
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
  void InternalSwap(TrajectoryTraceBackPart* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.TrajectoryTraceBackPart";
  }
  protected:
  explicit TrajectoryTraceBackPart(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrajectoryPointsFieldNumber = 1,
    kAimPointsFieldNumber = 2,
  };
  // repeated .LSLAM.Point trajectory_points = 1;
  int trajectory_points_size() const;
  private:
  int _internal_trajectory_points_size() const;
  public:
  void clear_trajectory_points();
  ::LSLAM::Point* mutable_trajectory_points(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >*
      mutable_trajectory_points();
  private:
  const ::LSLAM::Point& _internal_trajectory_points(int index) const;
  ::LSLAM::Point* _internal_add_trajectory_points();
  public:
  const ::LSLAM::Point& trajectory_points(int index) const;
  ::LSLAM::Point* add_trajectory_points();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >&
      trajectory_points() const;

  // repeated .LSLAM.Point aim_points = 2;
  int aim_points_size() const;
  private:
  int _internal_aim_points_size() const;
  public:
  void clear_aim_points();
  ::LSLAM::Point* mutable_aim_points(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >*
      mutable_aim_points();
  private:
  const ::LSLAM::Point& _internal_aim_points(int index) const;
  ::LSLAM::Point* _internal_add_aim_points();
  public:
  const ::LSLAM::Point& aim_points(int index) const;
  ::LSLAM::Point* add_aim_points();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >&
      aim_points() const;

  // @@protoc_insertion_point(class_scope:LSLAM.TrajectoryTraceBackPart)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point > trajectory_points_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point > aim_points_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_TrajectoryTraceBackPart_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrajectoryTraceBackPart

// repeated .LSLAM.Point trajectory_points = 1;
inline int TrajectoryTraceBackPart::_internal_trajectory_points_size() const {
  return _impl_.trajectory_points_.size();
}
inline int TrajectoryTraceBackPart::trajectory_points_size() const {
  return _internal_trajectory_points_size();
}
inline ::LSLAM::Point* TrajectoryTraceBackPart::mutable_trajectory_points(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.TrajectoryTraceBackPart.trajectory_points)
  return _impl_.trajectory_points_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >*
TrajectoryTraceBackPart::mutable_trajectory_points() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.TrajectoryTraceBackPart.trajectory_points)
  return &_impl_.trajectory_points_;
}
inline const ::LSLAM::Point& TrajectoryTraceBackPart::_internal_trajectory_points(int index) const {
  return _impl_.trajectory_points_.Get(index);
}
inline const ::LSLAM::Point& TrajectoryTraceBackPart::trajectory_points(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.TrajectoryTraceBackPart.trajectory_points)
  return _internal_trajectory_points(index);
}
inline ::LSLAM::Point* TrajectoryTraceBackPart::_internal_add_trajectory_points() {
  return _impl_.trajectory_points_.Add();
}
inline ::LSLAM::Point* TrajectoryTraceBackPart::add_trajectory_points() {
  ::LSLAM::Point* _add = _internal_add_trajectory_points();
  // @@protoc_insertion_point(field_add:LSLAM.TrajectoryTraceBackPart.trajectory_points)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >&
TrajectoryTraceBackPart::trajectory_points() const {
  // @@protoc_insertion_point(field_list:LSLAM.TrajectoryTraceBackPart.trajectory_points)
  return _impl_.trajectory_points_;
}

// repeated .LSLAM.Point aim_points = 2;
inline int TrajectoryTraceBackPart::_internal_aim_points_size() const {
  return _impl_.aim_points_.size();
}
inline int TrajectoryTraceBackPart::aim_points_size() const {
  return _internal_aim_points_size();
}
inline ::LSLAM::Point* TrajectoryTraceBackPart::mutable_aim_points(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.TrajectoryTraceBackPart.aim_points)
  return _impl_.aim_points_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >*
TrajectoryTraceBackPart::mutable_aim_points() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.TrajectoryTraceBackPart.aim_points)
  return &_impl_.aim_points_;
}
inline const ::LSLAM::Point& TrajectoryTraceBackPart::_internal_aim_points(int index) const {
  return _impl_.aim_points_.Get(index);
}
inline const ::LSLAM::Point& TrajectoryTraceBackPart::aim_points(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.TrajectoryTraceBackPart.aim_points)
  return _internal_aim_points(index);
}
inline ::LSLAM::Point* TrajectoryTraceBackPart::_internal_add_aim_points() {
  return _impl_.aim_points_.Add();
}
inline ::LSLAM::Point* TrajectoryTraceBackPart::add_aim_points() {
  ::LSLAM::Point* _add = _internal_add_aim_points();
  // @@protoc_insertion_point(field_add:LSLAM.TrajectoryTraceBackPart.aim_points)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point >&
TrajectoryTraceBackPart::aim_points() const {
  // @@protoc_insertion_point(field_list:LSLAM.TrajectoryTraceBackPart.aim_points)
  return _impl_.aim_points_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TrajectoryTraceBackPart_2eproto