// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Pointcloud.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Pointcloud_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Pointcloud_2eproto

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
#include "Header.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Pointcloud_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Pointcloud_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Pointcloud_2eproto;
namespace LSLAM {
class Channel_;
struct Channel_DefaultTypeInternal;
extern Channel_DefaultTypeInternal _Channel__default_instance_;
class Point_;
struct Point_DefaultTypeInternal;
extern Point_DefaultTypeInternal _Point__default_instance_;
class Pointcloud;
struct PointcloudDefaultTypeInternal;
extern PointcloudDefaultTypeInternal _Pointcloud_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::Channel_* Arena::CreateMaybeMessage<::LSLAM::Channel_>(Arena*);
template<> ::LSLAM::Point_* Arena::CreateMaybeMessage<::LSLAM::Point_>(Arena*);
template<> ::LSLAM::Pointcloud* Arena::CreateMaybeMessage<::LSLAM::Pointcloud>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class Channel_ final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.Channel_) */ {
 public:
  inline Channel_() : Channel_(nullptr) {}
  ~Channel_() override;
  explicit PROTOBUF_CONSTEXPR Channel_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Channel_(const Channel_& from);
  Channel_(Channel_&& from) noexcept
    : Channel_() {
    *this = ::std::move(from);
  }

  inline Channel_& operator=(const Channel_& from) {
    CopyFrom(from);
    return *this;
  }
  inline Channel_& operator=(Channel_&& from) noexcept {
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
  static const Channel_& default_instance() {
    return *internal_default_instance();
  }
  static inline const Channel_* internal_default_instance() {
    return reinterpret_cast<const Channel_*>(
               &_Channel__default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Channel_& a, Channel_& b) {
    a.Swap(&b);
  }
  inline void Swap(Channel_* other) {
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
  void UnsafeArenaSwap(Channel_* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Channel_* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Channel_>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Channel_& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Channel_& from) {
    Channel_::MergeImpl(*this, from);
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
  void InternalSwap(Channel_* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.Channel_";
  }
  protected:
  explicit Channel_(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // double value = 2;
  void clear_value();
  double value() const;
  void set_value(double value);
  private:
  double _internal_value() const;
  void _internal_set_value(double value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.Channel_)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    double value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Pointcloud_2eproto;
};
// -------------------------------------------------------------------

class Point_ final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.Point_) */ {
 public:
  inline Point_() : Point_(nullptr) {}
  ~Point_() override;
  explicit PROTOBUF_CONSTEXPR Point_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Point_(const Point_& from);
  Point_(Point_&& from) noexcept
    : Point_() {
    *this = ::std::move(from);
  }

  inline Point_& operator=(const Point_& from) {
    CopyFrom(from);
    return *this;
  }
  inline Point_& operator=(Point_&& from) noexcept {
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
  static const Point_& default_instance() {
    return *internal_default_instance();
  }
  static inline const Point_* internal_default_instance() {
    return reinterpret_cast<const Point_*>(
               &_Point__default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Point_& a, Point_& b) {
    a.Swap(&b);
  }
  inline void Swap(Point_* other) {
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
  void UnsafeArenaSwap(Point_* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Point_* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Point_>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Point_& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Point_& from) {
    Point_::MergeImpl(*this, from);
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
  void InternalSwap(Point_* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.Point_";
  }
  protected:
  explicit Point_(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kZFieldNumber = 3,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // double z = 3;
  void clear_z();
  double z() const;
  void set_z(double value);
  private:
  double _internal_z() const;
  void _internal_set_z(double value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.Point_)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double x_;
    double y_;
    double z_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Pointcloud_2eproto;
};
// -------------------------------------------------------------------

class Pointcloud final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.Pointcloud) */ {
 public:
  inline Pointcloud() : Pointcloud(nullptr) {}
  ~Pointcloud() override;
  explicit PROTOBUF_CONSTEXPR Pointcloud(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Pointcloud(const Pointcloud& from);
  Pointcloud(Pointcloud&& from) noexcept
    : Pointcloud() {
    *this = ::std::move(from);
  }

  inline Pointcloud& operator=(const Pointcloud& from) {
    CopyFrom(from);
    return *this;
  }
  inline Pointcloud& operator=(Pointcloud&& from) noexcept {
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
  static const Pointcloud& default_instance() {
    return *internal_default_instance();
  }
  static inline const Pointcloud* internal_default_instance() {
    return reinterpret_cast<const Pointcloud*>(
               &_Pointcloud_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Pointcloud& a, Pointcloud& b) {
    a.Swap(&b);
  }
  inline void Swap(Pointcloud* other) {
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
  void UnsafeArenaSwap(Pointcloud* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Pointcloud* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Pointcloud>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Pointcloud& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Pointcloud& from) {
    Pointcloud::MergeImpl(*this, from);
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
  void InternalSwap(Pointcloud* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.Pointcloud";
  }
  protected:
  explicit Pointcloud(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChannelsFieldNumber = 2,
    kPointsFieldNumber = 3,
    kHeaderFieldNumber = 1,
  };
  // repeated .LSLAM.Channel_ channels_ = 2;
  int channels__size() const;
  private:
  int _internal_channels__size() const;
  public:
  void clear_channels_();
  ::LSLAM::Channel_* mutable_channels_(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Channel_ >*
      mutable_channels_();
  private:
  const ::LSLAM::Channel_& _internal_channels_(int index) const;
  ::LSLAM::Channel_* _internal_add_channels_();
  public:
  const ::LSLAM::Channel_& channels_(int index) const;
  ::LSLAM::Channel_* add_channels_();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Channel_ >&
      channels_() const;

  // repeated .LSLAM.Point_ points_ = 3;
  int points__size() const;
  private:
  int _internal_points__size() const;
  public:
  void clear_points_();
  ::LSLAM::Point_* mutable_points_(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point_ >*
      mutable_points_();
  private:
  const ::LSLAM::Point_& _internal_points_(int index) const;
  ::LSLAM::Point_* _internal_add_points_();
  public:
  const ::LSLAM::Point_& points_(int index) const;
  ::LSLAM::Point_* add_points_();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point_ >&
      points_() const;

  // .LSLAM.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::LSLAM::Header& header() const;
  PROTOBUF_NODISCARD ::LSLAM::Header* release_header();
  ::LSLAM::Header* mutable_header();
  void set_allocated_header(::LSLAM::Header* header);
  private:
  const ::LSLAM::Header& _internal_header() const;
  ::LSLAM::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::LSLAM::Header* header);
  ::LSLAM::Header* unsafe_arena_release_header();

  // @@protoc_insertion_point(class_scope:LSLAM.Pointcloud)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Channel_ > channels__;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point_ > points__;
    ::LSLAM::Header* header_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Pointcloud_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Channel_

// string name = 1;
inline void Channel_::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Channel_::name() const {
  // @@protoc_insertion_point(field_get:LSLAM.Channel_.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Channel_::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:LSLAM.Channel_.name)
}
inline std::string* Channel_::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:LSLAM.Channel_.name)
  return _s;
}
inline const std::string& Channel_::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Channel_::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Channel_::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Channel_::release_name() {
  // @@protoc_insertion_point(field_release:LSLAM.Channel_.name)
  return _impl_.name_.Release();
}
inline void Channel_::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:LSLAM.Channel_.name)
}

// double value = 2;
inline void Channel_::clear_value() {
  _impl_.value_ = 0;
}
inline double Channel_::_internal_value() const {
  return _impl_.value_;
}
inline double Channel_::value() const {
  // @@protoc_insertion_point(field_get:LSLAM.Channel_.value)
  return _internal_value();
}
inline void Channel_::_internal_set_value(double value) {
  
  _impl_.value_ = value;
}
inline void Channel_::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:LSLAM.Channel_.value)
}

// -------------------------------------------------------------------

// Point_

// double x = 1;
inline void Point_::clear_x() {
  _impl_.x_ = 0;
}
inline double Point_::_internal_x() const {
  return _impl_.x_;
}
inline double Point_::x() const {
  // @@protoc_insertion_point(field_get:LSLAM.Point_.x)
  return _internal_x();
}
inline void Point_::_internal_set_x(double value) {
  
  _impl_.x_ = value;
}
inline void Point_::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:LSLAM.Point_.x)
}

// double y = 2;
inline void Point_::clear_y() {
  _impl_.y_ = 0;
}
inline double Point_::_internal_y() const {
  return _impl_.y_;
}
inline double Point_::y() const {
  // @@protoc_insertion_point(field_get:LSLAM.Point_.y)
  return _internal_y();
}
inline void Point_::_internal_set_y(double value) {
  
  _impl_.y_ = value;
}
inline void Point_::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:LSLAM.Point_.y)
}

// double z = 3;
inline void Point_::clear_z() {
  _impl_.z_ = 0;
}
inline double Point_::_internal_z() const {
  return _impl_.z_;
}
inline double Point_::z() const {
  // @@protoc_insertion_point(field_get:LSLAM.Point_.z)
  return _internal_z();
}
inline void Point_::_internal_set_z(double value) {
  
  _impl_.z_ = value;
}
inline void Point_::set_z(double value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:LSLAM.Point_.z)
}

// -------------------------------------------------------------------

// Pointcloud

// .LSLAM.Header header = 1;
inline bool Pointcloud::_internal_has_header() const {
  return this != internal_default_instance() && _impl_.header_ != nullptr;
}
inline bool Pointcloud::has_header() const {
  return _internal_has_header();
}
inline const ::LSLAM::Header& Pointcloud::_internal_header() const {
  const ::LSLAM::Header* p = _impl_.header_;
  return p != nullptr ? *p : reinterpret_cast<const ::LSLAM::Header&>(
      ::LSLAM::_Header_default_instance_);
}
inline const ::LSLAM::Header& Pointcloud::header() const {
  // @@protoc_insertion_point(field_get:LSLAM.Pointcloud.header)
  return _internal_header();
}
inline void Pointcloud::unsafe_arena_set_allocated_header(
    ::LSLAM::Header* header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  _impl_.header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:LSLAM.Pointcloud.header)
}
inline ::LSLAM::Header* Pointcloud::release_header() {
  
  ::LSLAM::Header* temp = _impl_.header_;
  _impl_.header_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::LSLAM::Header* Pointcloud::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:LSLAM.Pointcloud.header)
  
  ::LSLAM::Header* temp = _impl_.header_;
  _impl_.header_ = nullptr;
  return temp;
}
inline ::LSLAM::Header* Pointcloud::_internal_mutable_header() {
  
  if (_impl_.header_ == nullptr) {
    auto* p = CreateMaybeMessage<::LSLAM::Header>(GetArenaForAllocation());
    _impl_.header_ = p;
  }
  return _impl_.header_;
}
inline ::LSLAM::Header* Pointcloud::mutable_header() {
  ::LSLAM::Header* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:LSLAM.Pointcloud.header)
  return _msg;
}
inline void Pointcloud::set_allocated_header(::LSLAM::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header));
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.header_ = header;
  // @@protoc_insertion_point(field_set_allocated:LSLAM.Pointcloud.header)
}

// repeated .LSLAM.Channel_ channels_ = 2;
inline int Pointcloud::_internal_channels__size() const {
  return _impl_.channels__.size();
}
inline int Pointcloud::channels__size() const {
  return _internal_channels__size();
}
inline void Pointcloud::clear_channels_() {
  _impl_.channels__.Clear();
}
inline ::LSLAM::Channel_* Pointcloud::mutable_channels_(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.Pointcloud.channels_)
  return _impl_.channels__.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Channel_ >*
Pointcloud::mutable_channels_() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.Pointcloud.channels_)
  return &_impl_.channels__;
}
inline const ::LSLAM::Channel_& Pointcloud::_internal_channels_(int index) const {
  return _impl_.channels__.Get(index);
}
inline const ::LSLAM::Channel_& Pointcloud::channels_(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.Pointcloud.channels_)
  return _internal_channels_(index);
}
inline ::LSLAM::Channel_* Pointcloud::_internal_add_channels_() {
  return _impl_.channels__.Add();
}
inline ::LSLAM::Channel_* Pointcloud::add_channels_() {
  ::LSLAM::Channel_* _add = _internal_add_channels_();
  // @@protoc_insertion_point(field_add:LSLAM.Pointcloud.channels_)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Channel_ >&
Pointcloud::channels_() const {
  // @@protoc_insertion_point(field_list:LSLAM.Pointcloud.channels_)
  return _impl_.channels__;
}

// repeated .LSLAM.Point_ points_ = 3;
inline int Pointcloud::_internal_points__size() const {
  return _impl_.points__.size();
}
inline int Pointcloud::points__size() const {
  return _internal_points__size();
}
inline void Pointcloud::clear_points_() {
  _impl_.points__.Clear();
}
inline ::LSLAM::Point_* Pointcloud::mutable_points_(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.Pointcloud.points_)
  return _impl_.points__.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point_ >*
Pointcloud::mutable_points_() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.Pointcloud.points_)
  return &_impl_.points__;
}
inline const ::LSLAM::Point_& Pointcloud::_internal_points_(int index) const {
  return _impl_.points__.Get(index);
}
inline const ::LSLAM::Point_& Pointcloud::points_(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.Pointcloud.points_)
  return _internal_points_(index);
}
inline ::LSLAM::Point_* Pointcloud::_internal_add_points_() {
  return _impl_.points__.Add();
}
inline ::LSLAM::Point_* Pointcloud::add_points_() {
  ::LSLAM::Point_* _add = _internal_add_points_();
  // @@protoc_insertion_point(field_add:LSLAM.Pointcloud.points_)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point_ >&
Pointcloud::points_() const {
  // @@protoc_insertion_point(field_list:LSLAM.Pointcloud.points_)
  return _impl_.points__;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Pointcloud_2eproto
