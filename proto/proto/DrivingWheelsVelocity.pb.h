// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DrivingWheelsVelocity.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_DrivingWheelsVelocity_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_DrivingWheelsVelocity_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_DrivingWheelsVelocity_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_DrivingWheelsVelocity_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DrivingWheelsVelocity_2eproto;
namespace LSLAM {
class WheelsVelocity;
struct WheelsVelocityDefaultTypeInternal;
extern WheelsVelocityDefaultTypeInternal _WheelsVelocity_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::WheelsVelocity* Arena::CreateMaybeMessage<::LSLAM::WheelsVelocity>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class WheelsVelocity final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.WheelsVelocity) */ {
 public:
  inline WheelsVelocity() : WheelsVelocity(nullptr) {}
  ~WheelsVelocity() override;
  explicit PROTOBUF_CONSTEXPR WheelsVelocity(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WheelsVelocity(const WheelsVelocity& from);
  WheelsVelocity(WheelsVelocity&& from) noexcept
    : WheelsVelocity() {
    *this = ::std::move(from);
  }

  inline WheelsVelocity& operator=(const WheelsVelocity& from) {
    CopyFrom(from);
    return *this;
  }
  inline WheelsVelocity& operator=(WheelsVelocity&& from) noexcept {
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
  static const WheelsVelocity& default_instance() {
    return *internal_default_instance();
  }
  static inline const WheelsVelocity* internal_default_instance() {
    return reinterpret_cast<const WheelsVelocity*>(
               &_WheelsVelocity_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WheelsVelocity& a, WheelsVelocity& b) {
    a.Swap(&b);
  }
  inline void Swap(WheelsVelocity* other) {
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
  void UnsafeArenaSwap(WheelsVelocity* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WheelsVelocity* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WheelsVelocity>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const WheelsVelocity& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const WheelsVelocity& from) {
    WheelsVelocity::MergeImpl(*this, from);
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
  void InternalSwap(WheelsVelocity* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.WheelsVelocity";
  }
  protected:
  explicit WheelsVelocity(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLeftWheelVelocityFieldNumber = 1,
    kRightWheelVelocityFieldNumber = 2,
  };
  // int32 left_wheel_velocity = 1;
  void clear_left_wheel_velocity();
  int32_t left_wheel_velocity() const;
  void set_left_wheel_velocity(int32_t value);
  private:
  int32_t _internal_left_wheel_velocity() const;
  void _internal_set_left_wheel_velocity(int32_t value);
  public:

  // int32 right_wheel_velocity = 2;
  void clear_right_wheel_velocity();
  int32_t right_wheel_velocity() const;
  void set_right_wheel_velocity(int32_t value);
  private:
  int32_t _internal_right_wheel_velocity() const;
  void _internal_set_right_wheel_velocity(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.WheelsVelocity)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t left_wheel_velocity_;
    int32_t right_wheel_velocity_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_DrivingWheelsVelocity_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WheelsVelocity

// int32 left_wheel_velocity = 1;
inline void WheelsVelocity::clear_left_wheel_velocity() {
  _impl_.left_wheel_velocity_ = 0;
}
inline int32_t WheelsVelocity::_internal_left_wheel_velocity() const {
  return _impl_.left_wheel_velocity_;
}
inline int32_t WheelsVelocity::left_wheel_velocity() const {
  // @@protoc_insertion_point(field_get:LSLAM.WheelsVelocity.left_wheel_velocity)
  return _internal_left_wheel_velocity();
}
inline void WheelsVelocity::_internal_set_left_wheel_velocity(int32_t value) {
  
  _impl_.left_wheel_velocity_ = value;
}
inline void WheelsVelocity::set_left_wheel_velocity(int32_t value) {
  _internal_set_left_wheel_velocity(value);
  // @@protoc_insertion_point(field_set:LSLAM.WheelsVelocity.left_wheel_velocity)
}

// int32 right_wheel_velocity = 2;
inline void WheelsVelocity::clear_right_wheel_velocity() {
  _impl_.right_wheel_velocity_ = 0;
}
inline int32_t WheelsVelocity::_internal_right_wheel_velocity() const {
  return _impl_.right_wheel_velocity_;
}
inline int32_t WheelsVelocity::right_wheel_velocity() const {
  // @@protoc_insertion_point(field_get:LSLAM.WheelsVelocity.right_wheel_velocity)
  return _internal_right_wheel_velocity();
}
inline void WheelsVelocity::_internal_set_right_wheel_velocity(int32_t value) {
  
  _impl_.right_wheel_velocity_ = value;
}
inline void WheelsVelocity::set_right_wheel_velocity(int32_t value) {
  _internal_set_right_wheel_velocity(value);
  // @@protoc_insertion_point(field_set:LSLAM.WheelsVelocity.right_wheel_velocity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_DrivingWheelsVelocity_2eproto