// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CliffSensorMsg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CliffSensorMsg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CliffSensorMsg_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_CliffSensorMsg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CliffSensorMsg_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CliffSensorMsg_2eproto;
namespace LSLAM {
class CliffSensorMsg;
struct CliffSensorMsgDefaultTypeInternal;
extern CliffSensorMsgDefaultTypeInternal _CliffSensorMsg_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::CliffSensorMsg* Arena::CreateMaybeMessage<::LSLAM::CliffSensorMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class CliffSensorMsg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.CliffSensorMsg) */ {
 public:
  inline CliffSensorMsg() : CliffSensorMsg(nullptr) {}
  ~CliffSensorMsg() override;
  explicit PROTOBUF_CONSTEXPR CliffSensorMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CliffSensorMsg(const CliffSensorMsg& from);
  CliffSensorMsg(CliffSensorMsg&& from) noexcept
    : CliffSensorMsg() {
    *this = ::std::move(from);
  }

  inline CliffSensorMsg& operator=(const CliffSensorMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline CliffSensorMsg& operator=(CliffSensorMsg&& from) noexcept {
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
  static const CliffSensorMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const CliffSensorMsg* internal_default_instance() {
    return reinterpret_cast<const CliffSensorMsg*>(
               &_CliffSensorMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CliffSensorMsg& a, CliffSensorMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(CliffSensorMsg* other) {
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
  void UnsafeArenaSwap(CliffSensorMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CliffSensorMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CliffSensorMsg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CliffSensorMsg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CliffSensorMsg& from) {
    CliffSensorMsg::MergeImpl(*this, from);
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
  void InternalSwap(CliffSensorMsg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.CliffSensorMsg";
  }
  protected:
  explicit CliffSensorMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIsCliffSensorLeft1FieldNumber = 1,
    kIsCliffSensorLeft2FieldNumber = 2,
    kIsCliffSensorRight1FieldNumber = 3,
    kIsCliffSensorRight2FieldNumber = 4,
  };
  // bool is_cliff_sensor_left1 = 1;
  void clear_is_cliff_sensor_left1();
  bool is_cliff_sensor_left1() const;
  void set_is_cliff_sensor_left1(bool value);
  private:
  bool _internal_is_cliff_sensor_left1() const;
  void _internal_set_is_cliff_sensor_left1(bool value);
  public:

  // bool is_cliff_sensor_left2 = 2;
  void clear_is_cliff_sensor_left2();
  bool is_cliff_sensor_left2() const;
  void set_is_cliff_sensor_left2(bool value);
  private:
  bool _internal_is_cliff_sensor_left2() const;
  void _internal_set_is_cliff_sensor_left2(bool value);
  public:

  // bool is_cliff_sensor_right1 = 3;
  void clear_is_cliff_sensor_right1();
  bool is_cliff_sensor_right1() const;
  void set_is_cliff_sensor_right1(bool value);
  private:
  bool _internal_is_cliff_sensor_right1() const;
  void _internal_set_is_cliff_sensor_right1(bool value);
  public:

  // bool is_cliff_sensor_right2 = 4;
  void clear_is_cliff_sensor_right2();
  bool is_cliff_sensor_right2() const;
  void set_is_cliff_sensor_right2(bool value);
  private:
  bool _internal_is_cliff_sensor_right2() const;
  void _internal_set_is_cliff_sensor_right2(bool value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.CliffSensorMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    bool is_cliff_sensor_left1_;
    bool is_cliff_sensor_left2_;
    bool is_cliff_sensor_right1_;
    bool is_cliff_sensor_right2_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CliffSensorMsg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CliffSensorMsg

// bool is_cliff_sensor_left1 = 1;
inline void CliffSensorMsg::clear_is_cliff_sensor_left1() {
  _impl_.is_cliff_sensor_left1_ = false;
}
inline bool CliffSensorMsg::_internal_is_cliff_sensor_left1() const {
  return _impl_.is_cliff_sensor_left1_;
}
inline bool CliffSensorMsg::is_cliff_sensor_left1() const {
  // @@protoc_insertion_point(field_get:LSLAM.CliffSensorMsg.is_cliff_sensor_left1)
  return _internal_is_cliff_sensor_left1();
}
inline void CliffSensorMsg::_internal_set_is_cliff_sensor_left1(bool value) {
  
  _impl_.is_cliff_sensor_left1_ = value;
}
inline void CliffSensorMsg::set_is_cliff_sensor_left1(bool value) {
  _internal_set_is_cliff_sensor_left1(value);
  // @@protoc_insertion_point(field_set:LSLAM.CliffSensorMsg.is_cliff_sensor_left1)
}

// bool is_cliff_sensor_left2 = 2;
inline void CliffSensorMsg::clear_is_cliff_sensor_left2() {
  _impl_.is_cliff_sensor_left2_ = false;
}
inline bool CliffSensorMsg::_internal_is_cliff_sensor_left2() const {
  return _impl_.is_cliff_sensor_left2_;
}
inline bool CliffSensorMsg::is_cliff_sensor_left2() const {
  // @@protoc_insertion_point(field_get:LSLAM.CliffSensorMsg.is_cliff_sensor_left2)
  return _internal_is_cliff_sensor_left2();
}
inline void CliffSensorMsg::_internal_set_is_cliff_sensor_left2(bool value) {
  
  _impl_.is_cliff_sensor_left2_ = value;
}
inline void CliffSensorMsg::set_is_cliff_sensor_left2(bool value) {
  _internal_set_is_cliff_sensor_left2(value);
  // @@protoc_insertion_point(field_set:LSLAM.CliffSensorMsg.is_cliff_sensor_left2)
}

// bool is_cliff_sensor_right1 = 3;
inline void CliffSensorMsg::clear_is_cliff_sensor_right1() {
  _impl_.is_cliff_sensor_right1_ = false;
}
inline bool CliffSensorMsg::_internal_is_cliff_sensor_right1() const {
  return _impl_.is_cliff_sensor_right1_;
}
inline bool CliffSensorMsg::is_cliff_sensor_right1() const {
  // @@protoc_insertion_point(field_get:LSLAM.CliffSensorMsg.is_cliff_sensor_right1)
  return _internal_is_cliff_sensor_right1();
}
inline void CliffSensorMsg::_internal_set_is_cliff_sensor_right1(bool value) {
  
  _impl_.is_cliff_sensor_right1_ = value;
}
inline void CliffSensorMsg::set_is_cliff_sensor_right1(bool value) {
  _internal_set_is_cliff_sensor_right1(value);
  // @@protoc_insertion_point(field_set:LSLAM.CliffSensorMsg.is_cliff_sensor_right1)
}

// bool is_cliff_sensor_right2 = 4;
inline void CliffSensorMsg::clear_is_cliff_sensor_right2() {
  _impl_.is_cliff_sensor_right2_ = false;
}
inline bool CliffSensorMsg::_internal_is_cliff_sensor_right2() const {
  return _impl_.is_cliff_sensor_right2_;
}
inline bool CliffSensorMsg::is_cliff_sensor_right2() const {
  // @@protoc_insertion_point(field_get:LSLAM.CliffSensorMsg.is_cliff_sensor_right2)
  return _internal_is_cliff_sensor_right2();
}
inline void CliffSensorMsg::_internal_set_is_cliff_sensor_right2(bool value) {
  
  _impl_.is_cliff_sensor_right2_ = value;
}
inline void CliffSensorMsg::set_is_cliff_sensor_right2(bool value) {
  _internal_set_is_cliff_sensor_right2(value);
  // @@protoc_insertion_point(field_set:LSLAM.CliffSensorMsg.is_cliff_sensor_right2)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CliffSensorMsg_2eproto