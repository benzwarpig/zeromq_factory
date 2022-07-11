// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MyPointCloud2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MyPointCloud2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MyPointCloud2_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MyPointCloud2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MyPointCloud2_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MyPointCloud2_2eproto;
namespace LSLAM {
class MyPointCloud2;
struct MyPointCloud2DefaultTypeInternal;
extern MyPointCloud2DefaultTypeInternal _MyPointCloud2_default_instance_;
class Point4d;
struct Point4dDefaultTypeInternal;
extern Point4dDefaultTypeInternal _Point4d_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::MyPointCloud2* Arena::CreateMaybeMessage<::LSLAM::MyPointCloud2>(Arena*);
template<> ::LSLAM::Point4d* Arena::CreateMaybeMessage<::LSLAM::Point4d>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class Point4d final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.Point4d) */ {
 public:
  inline Point4d() : Point4d(nullptr) {}
  ~Point4d() override;
  explicit PROTOBUF_CONSTEXPR Point4d(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Point4d(const Point4d& from);
  Point4d(Point4d&& from) noexcept
    : Point4d() {
    *this = ::std::move(from);
  }

  inline Point4d& operator=(const Point4d& from) {
    CopyFrom(from);
    return *this;
  }
  inline Point4d& operator=(Point4d&& from) noexcept {
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
  static const Point4d& default_instance() {
    return *internal_default_instance();
  }
  static inline const Point4d* internal_default_instance() {
    return reinterpret_cast<const Point4d*>(
               &_Point4d_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Point4d& a, Point4d& b) {
    a.Swap(&b);
  }
  inline void Swap(Point4d* other) {
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
  void UnsafeArenaSwap(Point4d* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Point4d* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Point4d>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Point4d& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Point4d& from) {
    Point4d::MergeImpl(*this, from);
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
  void InternalSwap(Point4d* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.Point4d";
  }
  protected:
  explicit Point4d(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kKFieldNumber = 4,
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

  // double k = 4;
  void clear_k();
  double k() const;
  void set_k(double value);
  private:
  double _internal_k() const;
  void _internal_set_k(double value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.Point4d)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double x_;
    double y_;
    double z_;
    double k_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MyPointCloud2_2eproto;
};
// -------------------------------------------------------------------

class MyPointCloud2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.MyPointCloud2) */ {
 public:
  inline MyPointCloud2() : MyPointCloud2(nullptr) {}
  ~MyPointCloud2() override;
  explicit PROTOBUF_CONSTEXPR MyPointCloud2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MyPointCloud2(const MyPointCloud2& from);
  MyPointCloud2(MyPointCloud2&& from) noexcept
    : MyPointCloud2() {
    *this = ::std::move(from);
  }

  inline MyPointCloud2& operator=(const MyPointCloud2& from) {
    CopyFrom(from);
    return *this;
  }
  inline MyPointCloud2& operator=(MyPointCloud2&& from) noexcept {
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
  static const MyPointCloud2& default_instance() {
    return *internal_default_instance();
  }
  static inline const MyPointCloud2* internal_default_instance() {
    return reinterpret_cast<const MyPointCloud2*>(
               &_MyPointCloud2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MyPointCloud2& a, MyPointCloud2& b) {
    a.Swap(&b);
  }
  inline void Swap(MyPointCloud2* other) {
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
  void UnsafeArenaSwap(MyPointCloud2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MyPointCloud2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MyPointCloud2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MyPointCloud2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MyPointCloud2& from) {
    MyPointCloud2::MergeImpl(*this, from);
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
  void InternalSwap(MyPointCloud2* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.MyPointCloud2";
  }
  protected:
  explicit MyPointCloud2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointsFieldNumber = 4,
    kHeaderFieldNumber = 1,
    kHeightFieldNumber = 2,
    kWidthFieldNumber = 3,
    kIsDenseFieldNumber = 5,
  };
  // repeated .LSLAM.Point4d points = 4;
  int points_size() const;
  private:
  int _internal_points_size() const;
  public:
  void clear_points();
  ::LSLAM::Point4d* mutable_points(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point4d >*
      mutable_points();
  private:
  const ::LSLAM::Point4d& _internal_points(int index) const;
  ::LSLAM::Point4d* _internal_add_points();
  public:
  const ::LSLAM::Point4d& points(int index) const;
  ::LSLAM::Point4d* add_points();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point4d >&
      points() const;

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

  // uint32 height = 2;
  void clear_height();
  uint32_t height() const;
  void set_height(uint32_t value);
  private:
  uint32_t _internal_height() const;
  void _internal_set_height(uint32_t value);
  public:

  // uint32 width = 3;
  void clear_width();
  uint32_t width() const;
  void set_width(uint32_t value);
  private:
  uint32_t _internal_width() const;
  void _internal_set_width(uint32_t value);
  public:

  // bool is_dense = 5;
  void clear_is_dense();
  bool is_dense() const;
  void set_is_dense(bool value);
  private:
  bool _internal_is_dense() const;
  void _internal_set_is_dense(bool value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.MyPointCloud2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point4d > points_;
    ::LSLAM::Header* header_;
    uint32_t height_;
    uint32_t width_;
    bool is_dense_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MyPointCloud2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Point4d

// double x = 1;
inline void Point4d::clear_x() {
  _impl_.x_ = 0;
}
inline double Point4d::_internal_x() const {
  return _impl_.x_;
}
inline double Point4d::x() const {
  // @@protoc_insertion_point(field_get:LSLAM.Point4d.x)
  return _internal_x();
}
inline void Point4d::_internal_set_x(double value) {
  
  _impl_.x_ = value;
}
inline void Point4d::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:LSLAM.Point4d.x)
}

// double y = 2;
inline void Point4d::clear_y() {
  _impl_.y_ = 0;
}
inline double Point4d::_internal_y() const {
  return _impl_.y_;
}
inline double Point4d::y() const {
  // @@protoc_insertion_point(field_get:LSLAM.Point4d.y)
  return _internal_y();
}
inline void Point4d::_internal_set_y(double value) {
  
  _impl_.y_ = value;
}
inline void Point4d::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:LSLAM.Point4d.y)
}

// double z = 3;
inline void Point4d::clear_z() {
  _impl_.z_ = 0;
}
inline double Point4d::_internal_z() const {
  return _impl_.z_;
}
inline double Point4d::z() const {
  // @@protoc_insertion_point(field_get:LSLAM.Point4d.z)
  return _internal_z();
}
inline void Point4d::_internal_set_z(double value) {
  
  _impl_.z_ = value;
}
inline void Point4d::set_z(double value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:LSLAM.Point4d.z)
}

// double k = 4;
inline void Point4d::clear_k() {
  _impl_.k_ = 0;
}
inline double Point4d::_internal_k() const {
  return _impl_.k_;
}
inline double Point4d::k() const {
  // @@protoc_insertion_point(field_get:LSLAM.Point4d.k)
  return _internal_k();
}
inline void Point4d::_internal_set_k(double value) {
  
  _impl_.k_ = value;
}
inline void Point4d::set_k(double value) {
  _internal_set_k(value);
  // @@protoc_insertion_point(field_set:LSLAM.Point4d.k)
}

// -------------------------------------------------------------------

// MyPointCloud2

// .LSLAM.Header header = 1;
inline bool MyPointCloud2::_internal_has_header() const {
  return this != internal_default_instance() && _impl_.header_ != nullptr;
}
inline bool MyPointCloud2::has_header() const {
  return _internal_has_header();
}
inline const ::LSLAM::Header& MyPointCloud2::_internal_header() const {
  const ::LSLAM::Header* p = _impl_.header_;
  return p != nullptr ? *p : reinterpret_cast<const ::LSLAM::Header&>(
      ::LSLAM::_Header_default_instance_);
}
inline const ::LSLAM::Header& MyPointCloud2::header() const {
  // @@protoc_insertion_point(field_get:LSLAM.MyPointCloud2.header)
  return _internal_header();
}
inline void MyPointCloud2::unsafe_arena_set_allocated_header(
    ::LSLAM::Header* header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  _impl_.header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:LSLAM.MyPointCloud2.header)
}
inline ::LSLAM::Header* MyPointCloud2::release_header() {
  
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
inline ::LSLAM::Header* MyPointCloud2::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:LSLAM.MyPointCloud2.header)
  
  ::LSLAM::Header* temp = _impl_.header_;
  _impl_.header_ = nullptr;
  return temp;
}
inline ::LSLAM::Header* MyPointCloud2::_internal_mutable_header() {
  
  if (_impl_.header_ == nullptr) {
    auto* p = CreateMaybeMessage<::LSLAM::Header>(GetArenaForAllocation());
    _impl_.header_ = p;
  }
  return _impl_.header_;
}
inline ::LSLAM::Header* MyPointCloud2::mutable_header() {
  ::LSLAM::Header* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:LSLAM.MyPointCloud2.header)
  return _msg;
}
inline void MyPointCloud2::set_allocated_header(::LSLAM::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:LSLAM.MyPointCloud2.header)
}

// uint32 height = 2;
inline void MyPointCloud2::clear_height() {
  _impl_.height_ = 0u;
}
inline uint32_t MyPointCloud2::_internal_height() const {
  return _impl_.height_;
}
inline uint32_t MyPointCloud2::height() const {
  // @@protoc_insertion_point(field_get:LSLAM.MyPointCloud2.height)
  return _internal_height();
}
inline void MyPointCloud2::_internal_set_height(uint32_t value) {
  
  _impl_.height_ = value;
}
inline void MyPointCloud2::set_height(uint32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:LSLAM.MyPointCloud2.height)
}

// uint32 width = 3;
inline void MyPointCloud2::clear_width() {
  _impl_.width_ = 0u;
}
inline uint32_t MyPointCloud2::_internal_width() const {
  return _impl_.width_;
}
inline uint32_t MyPointCloud2::width() const {
  // @@protoc_insertion_point(field_get:LSLAM.MyPointCloud2.width)
  return _internal_width();
}
inline void MyPointCloud2::_internal_set_width(uint32_t value) {
  
  _impl_.width_ = value;
}
inline void MyPointCloud2::set_width(uint32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:LSLAM.MyPointCloud2.width)
}

// repeated .LSLAM.Point4d points = 4;
inline int MyPointCloud2::_internal_points_size() const {
  return _impl_.points_.size();
}
inline int MyPointCloud2::points_size() const {
  return _internal_points_size();
}
inline void MyPointCloud2::clear_points() {
  _impl_.points_.Clear();
}
inline ::LSLAM::Point4d* MyPointCloud2::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.MyPointCloud2.points)
  return _impl_.points_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point4d >*
MyPointCloud2::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.MyPointCloud2.points)
  return &_impl_.points_;
}
inline const ::LSLAM::Point4d& MyPointCloud2::_internal_points(int index) const {
  return _impl_.points_.Get(index);
}
inline const ::LSLAM::Point4d& MyPointCloud2::points(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.MyPointCloud2.points)
  return _internal_points(index);
}
inline ::LSLAM::Point4d* MyPointCloud2::_internal_add_points() {
  return _impl_.points_.Add();
}
inline ::LSLAM::Point4d* MyPointCloud2::add_points() {
  ::LSLAM::Point4d* _add = _internal_add_points();
  // @@protoc_insertion_point(field_add:LSLAM.MyPointCloud2.points)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::Point4d >&
MyPointCloud2::points() const {
  // @@protoc_insertion_point(field_list:LSLAM.MyPointCloud2.points)
  return _impl_.points_;
}

// bool is_dense = 5;
inline void MyPointCloud2::clear_is_dense() {
  _impl_.is_dense_ = false;
}
inline bool MyPointCloud2::_internal_is_dense() const {
  return _impl_.is_dense_;
}
inline bool MyPointCloud2::is_dense() const {
  // @@protoc_insertion_point(field_get:LSLAM.MyPointCloud2.is_dense)
  return _internal_is_dense();
}
inline void MyPointCloud2::_internal_set_is_dense(bool value) {
  
  _impl_.is_dense_ = value;
}
inline void MyPointCloud2::set_is_dense(bool value) {
  _internal_set_is_dense(value);
  // @@protoc_insertion_point(field_set:LSLAM.MyPointCloud2.is_dense)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MyPointCloud2_2eproto