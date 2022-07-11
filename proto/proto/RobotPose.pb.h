// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RobotPose.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_RobotPose_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_RobotPose_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_RobotPose_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_RobotPose_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RobotPose_2eproto;
namespace LSLAM {
class RobotPose;
struct RobotPoseDefaultTypeInternal;
extern RobotPoseDefaultTypeInternal _RobotPose_default_instance_;
class RobotPoses;
struct RobotPosesDefaultTypeInternal;
extern RobotPosesDefaultTypeInternal _RobotPoses_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::RobotPose* Arena::CreateMaybeMessage<::LSLAM::RobotPose>(Arena*);
template<> ::LSLAM::RobotPoses* Arena::CreateMaybeMessage<::LSLAM::RobotPoses>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class RobotPose final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.RobotPose) */ {
 public:
  inline RobotPose() : RobotPose(nullptr) {}
  ~RobotPose() override;
  explicit PROTOBUF_CONSTEXPR RobotPose(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RobotPose(const RobotPose& from);
  RobotPose(RobotPose&& from) noexcept
    : RobotPose() {
    *this = ::std::move(from);
  }

  inline RobotPose& operator=(const RobotPose& from) {
    CopyFrom(from);
    return *this;
  }
  inline RobotPose& operator=(RobotPose&& from) noexcept {
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
  static const RobotPose& default_instance() {
    return *internal_default_instance();
  }
  static inline const RobotPose* internal_default_instance() {
    return reinterpret_cast<const RobotPose*>(
               &_RobotPose_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RobotPose& a, RobotPose& b) {
    a.Swap(&b);
  }
  inline void Swap(RobotPose* other) {
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
  void UnsafeArenaSwap(RobotPose* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RobotPose* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RobotPose>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RobotPose& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RobotPose& from) {
    RobotPose::MergeImpl(*this, from);
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
  void InternalSwap(RobotPose* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.RobotPose";
  }
  protected:
  explicit RobotPose(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kThetaFieldNumber = 3,
  };
  // int32 x = 1;
  void clear_x();
  int32_t x() const;
  void set_x(int32_t value);
  private:
  int32_t _internal_x() const;
  void _internal_set_x(int32_t value);
  public:

  // int32 y = 2;
  void clear_y();
  int32_t y() const;
  void set_y(int32_t value);
  private:
  int32_t _internal_y() const;
  void _internal_set_y(int32_t value);
  public:

  // int32 theta = 3;
  void clear_theta();
  int32_t theta() const;
  void set_theta(int32_t value);
  private:
  int32_t _internal_theta() const;
  void _internal_set_theta(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.RobotPose)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t x_;
    int32_t y_;
    int32_t theta_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_RobotPose_2eproto;
};
// -------------------------------------------------------------------

class RobotPoses final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.RobotPoses) */ {
 public:
  inline RobotPoses() : RobotPoses(nullptr) {}
  ~RobotPoses() override;
  explicit PROTOBUF_CONSTEXPR RobotPoses(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RobotPoses(const RobotPoses& from);
  RobotPoses(RobotPoses&& from) noexcept
    : RobotPoses() {
    *this = ::std::move(from);
  }

  inline RobotPoses& operator=(const RobotPoses& from) {
    CopyFrom(from);
    return *this;
  }
  inline RobotPoses& operator=(RobotPoses&& from) noexcept {
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
  static const RobotPoses& default_instance() {
    return *internal_default_instance();
  }
  static inline const RobotPoses* internal_default_instance() {
    return reinterpret_cast<const RobotPoses*>(
               &_RobotPoses_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RobotPoses& a, RobotPoses& b) {
    a.Swap(&b);
  }
  inline void Swap(RobotPoses* other) {
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
  void UnsafeArenaSwap(RobotPoses* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RobotPoses* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RobotPoses>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RobotPoses& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RobotPoses& from) {
    RobotPoses::MergeImpl(*this, from);
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
  void InternalSwap(RobotPoses* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.RobotPoses";
  }
  protected:
  explicit RobotPoses(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotposeFieldNumber = 1,
  };
  // repeated .LSLAM.RobotPose robotpose = 1;
  int robotpose_size() const;
  private:
  int _internal_robotpose_size() const;
  public:
  void clear_robotpose();
  ::LSLAM::RobotPose* mutable_robotpose(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::RobotPose >*
      mutable_robotpose();
  private:
  const ::LSLAM::RobotPose& _internal_robotpose(int index) const;
  ::LSLAM::RobotPose* _internal_add_robotpose();
  public:
  const ::LSLAM::RobotPose& robotpose(int index) const;
  ::LSLAM::RobotPose* add_robotpose();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::RobotPose >&
      robotpose() const;

  // @@protoc_insertion_point(class_scope:LSLAM.RobotPoses)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::RobotPose > robotpose_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_RobotPose_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RobotPose

// int32 x = 1;
inline void RobotPose::clear_x() {
  _impl_.x_ = 0;
}
inline int32_t RobotPose::_internal_x() const {
  return _impl_.x_;
}
inline int32_t RobotPose::x() const {
  // @@protoc_insertion_point(field_get:LSLAM.RobotPose.x)
  return _internal_x();
}
inline void RobotPose::_internal_set_x(int32_t value) {
  
  _impl_.x_ = value;
}
inline void RobotPose::set_x(int32_t value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:LSLAM.RobotPose.x)
}

// int32 y = 2;
inline void RobotPose::clear_y() {
  _impl_.y_ = 0;
}
inline int32_t RobotPose::_internal_y() const {
  return _impl_.y_;
}
inline int32_t RobotPose::y() const {
  // @@protoc_insertion_point(field_get:LSLAM.RobotPose.y)
  return _internal_y();
}
inline void RobotPose::_internal_set_y(int32_t value) {
  
  _impl_.y_ = value;
}
inline void RobotPose::set_y(int32_t value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:LSLAM.RobotPose.y)
}

// int32 theta = 3;
inline void RobotPose::clear_theta() {
  _impl_.theta_ = 0;
}
inline int32_t RobotPose::_internal_theta() const {
  return _impl_.theta_;
}
inline int32_t RobotPose::theta() const {
  // @@protoc_insertion_point(field_get:LSLAM.RobotPose.theta)
  return _internal_theta();
}
inline void RobotPose::_internal_set_theta(int32_t value) {
  
  _impl_.theta_ = value;
}
inline void RobotPose::set_theta(int32_t value) {
  _internal_set_theta(value);
  // @@protoc_insertion_point(field_set:LSLAM.RobotPose.theta)
}

// -------------------------------------------------------------------

// RobotPoses

// repeated .LSLAM.RobotPose robotpose = 1;
inline int RobotPoses::_internal_robotpose_size() const {
  return _impl_.robotpose_.size();
}
inline int RobotPoses::robotpose_size() const {
  return _internal_robotpose_size();
}
inline void RobotPoses::clear_robotpose() {
  _impl_.robotpose_.Clear();
}
inline ::LSLAM::RobotPose* RobotPoses::mutable_robotpose(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.RobotPoses.robotpose)
  return _impl_.robotpose_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::RobotPose >*
RobotPoses::mutable_robotpose() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.RobotPoses.robotpose)
  return &_impl_.robotpose_;
}
inline const ::LSLAM::RobotPose& RobotPoses::_internal_robotpose(int index) const {
  return _impl_.robotpose_.Get(index);
}
inline const ::LSLAM::RobotPose& RobotPoses::robotpose(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.RobotPoses.robotpose)
  return _internal_robotpose(index);
}
inline ::LSLAM::RobotPose* RobotPoses::_internal_add_robotpose() {
  return _impl_.robotpose_.Add();
}
inline ::LSLAM::RobotPose* RobotPoses::add_robotpose() {
  ::LSLAM::RobotPose* _add = _internal_add_robotpose();
  // @@protoc_insertion_point(field_add:LSLAM.RobotPoses.robotpose)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::RobotPose >&
RobotPoses::robotpose() const {
  // @@protoc_insertion_point(field_list:LSLAM.RobotPoses.robotpose)
  return _impl_.robotpose_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_RobotPose_2eproto