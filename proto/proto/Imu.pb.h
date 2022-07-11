// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Imu.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Imu_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Imu_2eproto

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
#include "Vector3d.pb.h"
#include "Quaternion.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Imu_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Imu_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Imu_2eproto;
namespace LSLAM {
class Imu;
struct ImuDefaultTypeInternal;
extern ImuDefaultTypeInternal _Imu_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::Imu* Arena::CreateMaybeMessage<::LSLAM::Imu>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class Imu final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.Imu) */ {
 public:
  inline Imu() : Imu(nullptr) {}
  ~Imu() override;
  explicit PROTOBUF_CONSTEXPR Imu(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Imu(const Imu& from);
  Imu(Imu&& from) noexcept
    : Imu() {
    *this = ::std::move(from);
  }

  inline Imu& operator=(const Imu& from) {
    CopyFrom(from);
    return *this;
  }
  inline Imu& operator=(Imu&& from) noexcept {
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
  static const Imu& default_instance() {
    return *internal_default_instance();
  }
  static inline const Imu* internal_default_instance() {
    return reinterpret_cast<const Imu*>(
               &_Imu_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Imu& a, Imu& b) {
    a.Swap(&b);
  }
  inline void Swap(Imu* other) {
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
  void UnsafeArenaSwap(Imu* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Imu* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Imu>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Imu& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Imu& from) {
    Imu::MergeImpl(*this, from);
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
  void InternalSwap(Imu* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.Imu";
  }
  protected:
  explicit Imu(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOrientationCovarianceFieldNumber = 3,
    kAngularVelocityCovarianceFieldNumber = 5,
    kLinearAccelerationCovarianceFieldNumber = 7,
    kHeaderFieldNumber = 1,
    kOrientationFieldNumber = 2,
    kAngularVelocityFieldNumber = 4,
    kLinearAccelerationFieldNumber = 6,
  };
  // repeated double orientation_covariance = 3;
  int orientation_covariance_size() const;
  private:
  int _internal_orientation_covariance_size() const;
  public:
  void clear_orientation_covariance();
  private:
  double _internal_orientation_covariance(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_orientation_covariance() const;
  void _internal_add_orientation_covariance(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_orientation_covariance();
  public:
  double orientation_covariance(int index) const;
  void set_orientation_covariance(int index, double value);
  void add_orientation_covariance(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      orientation_covariance() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_orientation_covariance();

  // repeated double angular_velocity_covariance = 5;
  int angular_velocity_covariance_size() const;
  private:
  int _internal_angular_velocity_covariance_size() const;
  public:
  void clear_angular_velocity_covariance();
  private:
  double _internal_angular_velocity_covariance(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_angular_velocity_covariance() const;
  void _internal_add_angular_velocity_covariance(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_angular_velocity_covariance();
  public:
  double angular_velocity_covariance(int index) const;
  void set_angular_velocity_covariance(int index, double value);
  void add_angular_velocity_covariance(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      angular_velocity_covariance() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_angular_velocity_covariance();

  // repeated double linear_acceleration_covariance = 7;
  int linear_acceleration_covariance_size() const;
  private:
  int _internal_linear_acceleration_covariance_size() const;
  public:
  void clear_linear_acceleration_covariance();
  private:
  double _internal_linear_acceleration_covariance(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_linear_acceleration_covariance() const;
  void _internal_add_linear_acceleration_covariance(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_linear_acceleration_covariance();
  public:
  double linear_acceleration_covariance(int index) const;
  void set_linear_acceleration_covariance(int index, double value);
  void add_linear_acceleration_covariance(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      linear_acceleration_covariance() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_linear_acceleration_covariance();

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

  // .LSLAM.Quaternion orientation = 2;
  bool has_orientation() const;
  private:
  bool _internal_has_orientation() const;
  public:
  void clear_orientation();
  const ::LSLAM::Quaternion& orientation() const;
  PROTOBUF_NODISCARD ::LSLAM::Quaternion* release_orientation();
  ::LSLAM::Quaternion* mutable_orientation();
  void set_allocated_orientation(::LSLAM::Quaternion* orientation);
  private:
  const ::LSLAM::Quaternion& _internal_orientation() const;
  ::LSLAM::Quaternion* _internal_mutable_orientation();
  public:
  void unsafe_arena_set_allocated_orientation(
      ::LSLAM::Quaternion* orientation);
  ::LSLAM::Quaternion* unsafe_arena_release_orientation();

  // .LSLAM.Vector3d angular_velocity = 4;
  bool has_angular_velocity() const;
  private:
  bool _internal_has_angular_velocity() const;
  public:
  void clear_angular_velocity();
  const ::LSLAM::Vector3d& angular_velocity() const;
  PROTOBUF_NODISCARD ::LSLAM::Vector3d* release_angular_velocity();
  ::LSLAM::Vector3d* mutable_angular_velocity();
  void set_allocated_angular_velocity(::LSLAM::Vector3d* angular_velocity);
  private:
  const ::LSLAM::Vector3d& _internal_angular_velocity() const;
  ::LSLAM::Vector3d* _internal_mutable_angular_velocity();
  public:
  void unsafe_arena_set_allocated_angular_velocity(
      ::LSLAM::Vector3d* angular_velocity);
  ::LSLAM::Vector3d* unsafe_arena_release_angular_velocity();

  // .LSLAM.Vector3d linear_acceleration = 6;
  bool has_linear_acceleration() const;
  private:
  bool _internal_has_linear_acceleration() const;
  public:
  void clear_linear_acceleration();
  const ::LSLAM::Vector3d& linear_acceleration() const;
  PROTOBUF_NODISCARD ::LSLAM::Vector3d* release_linear_acceleration();
  ::LSLAM::Vector3d* mutable_linear_acceleration();
  void set_allocated_linear_acceleration(::LSLAM::Vector3d* linear_acceleration);
  private:
  const ::LSLAM::Vector3d& _internal_linear_acceleration() const;
  ::LSLAM::Vector3d* _internal_mutable_linear_acceleration();
  public:
  void unsafe_arena_set_allocated_linear_acceleration(
      ::LSLAM::Vector3d* linear_acceleration);
  ::LSLAM::Vector3d* unsafe_arena_release_linear_acceleration();

  // @@protoc_insertion_point(class_scope:LSLAM.Imu)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > orientation_covariance_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > angular_velocity_covariance_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > linear_acceleration_covariance_;
    ::LSLAM::Header* header_;
    ::LSLAM::Quaternion* orientation_;
    ::LSLAM::Vector3d* angular_velocity_;
    ::LSLAM::Vector3d* linear_acceleration_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Imu_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Imu

// .LSLAM.Header header = 1;
inline bool Imu::_internal_has_header() const {
  return this != internal_default_instance() && _impl_.header_ != nullptr;
}
inline bool Imu::has_header() const {
  return _internal_has_header();
}
inline const ::LSLAM::Header& Imu::_internal_header() const {
  const ::LSLAM::Header* p = _impl_.header_;
  return p != nullptr ? *p : reinterpret_cast<const ::LSLAM::Header&>(
      ::LSLAM::_Header_default_instance_);
}
inline const ::LSLAM::Header& Imu::header() const {
  // @@protoc_insertion_point(field_get:LSLAM.Imu.header)
  return _internal_header();
}
inline void Imu::unsafe_arena_set_allocated_header(
    ::LSLAM::Header* header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  _impl_.header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:LSLAM.Imu.header)
}
inline ::LSLAM::Header* Imu::release_header() {
  
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
inline ::LSLAM::Header* Imu::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:LSLAM.Imu.header)
  
  ::LSLAM::Header* temp = _impl_.header_;
  _impl_.header_ = nullptr;
  return temp;
}
inline ::LSLAM::Header* Imu::_internal_mutable_header() {
  
  if (_impl_.header_ == nullptr) {
    auto* p = CreateMaybeMessage<::LSLAM::Header>(GetArenaForAllocation());
    _impl_.header_ = p;
  }
  return _impl_.header_;
}
inline ::LSLAM::Header* Imu::mutable_header() {
  ::LSLAM::Header* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:LSLAM.Imu.header)
  return _msg;
}
inline void Imu::set_allocated_header(::LSLAM::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:LSLAM.Imu.header)
}

// .LSLAM.Quaternion orientation = 2;
inline bool Imu::_internal_has_orientation() const {
  return this != internal_default_instance() && _impl_.orientation_ != nullptr;
}
inline bool Imu::has_orientation() const {
  return _internal_has_orientation();
}
inline const ::LSLAM::Quaternion& Imu::_internal_orientation() const {
  const ::LSLAM::Quaternion* p = _impl_.orientation_;
  return p != nullptr ? *p : reinterpret_cast<const ::LSLAM::Quaternion&>(
      ::LSLAM::_Quaternion_default_instance_);
}
inline const ::LSLAM::Quaternion& Imu::orientation() const {
  // @@protoc_insertion_point(field_get:LSLAM.Imu.orientation)
  return _internal_orientation();
}
inline void Imu::unsafe_arena_set_allocated_orientation(
    ::LSLAM::Quaternion* orientation) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.orientation_);
  }
  _impl_.orientation_ = orientation;
  if (orientation) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:LSLAM.Imu.orientation)
}
inline ::LSLAM::Quaternion* Imu::release_orientation() {
  
  ::LSLAM::Quaternion* temp = _impl_.orientation_;
  _impl_.orientation_ = nullptr;
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
inline ::LSLAM::Quaternion* Imu::unsafe_arena_release_orientation() {
  // @@protoc_insertion_point(field_release:LSLAM.Imu.orientation)
  
  ::LSLAM::Quaternion* temp = _impl_.orientation_;
  _impl_.orientation_ = nullptr;
  return temp;
}
inline ::LSLAM::Quaternion* Imu::_internal_mutable_orientation() {
  
  if (_impl_.orientation_ == nullptr) {
    auto* p = CreateMaybeMessage<::LSLAM::Quaternion>(GetArenaForAllocation());
    _impl_.orientation_ = p;
  }
  return _impl_.orientation_;
}
inline ::LSLAM::Quaternion* Imu::mutable_orientation() {
  ::LSLAM::Quaternion* _msg = _internal_mutable_orientation();
  // @@protoc_insertion_point(field_mutable:LSLAM.Imu.orientation)
  return _msg;
}
inline void Imu::set_allocated_orientation(::LSLAM::Quaternion* orientation) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.orientation_);
  }
  if (orientation) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(orientation));
    if (message_arena != submessage_arena) {
      orientation = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, orientation, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.orientation_ = orientation;
  // @@protoc_insertion_point(field_set_allocated:LSLAM.Imu.orientation)
}

// repeated double orientation_covariance = 3;
inline int Imu::_internal_orientation_covariance_size() const {
  return _impl_.orientation_covariance_.size();
}
inline int Imu::orientation_covariance_size() const {
  return _internal_orientation_covariance_size();
}
inline void Imu::clear_orientation_covariance() {
  _impl_.orientation_covariance_.Clear();
}
inline double Imu::_internal_orientation_covariance(int index) const {
  return _impl_.orientation_covariance_.Get(index);
}
inline double Imu::orientation_covariance(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.Imu.orientation_covariance)
  return _internal_orientation_covariance(index);
}
inline void Imu::set_orientation_covariance(int index, double value) {
  _impl_.orientation_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:LSLAM.Imu.orientation_covariance)
}
inline void Imu::_internal_add_orientation_covariance(double value) {
  _impl_.orientation_covariance_.Add(value);
}
inline void Imu::add_orientation_covariance(double value) {
  _internal_add_orientation_covariance(value);
  // @@protoc_insertion_point(field_add:LSLAM.Imu.orientation_covariance)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Imu::_internal_orientation_covariance() const {
  return _impl_.orientation_covariance_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Imu::orientation_covariance() const {
  // @@protoc_insertion_point(field_list:LSLAM.Imu.orientation_covariance)
  return _internal_orientation_covariance();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Imu::_internal_mutable_orientation_covariance() {
  return &_impl_.orientation_covariance_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Imu::mutable_orientation_covariance() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.Imu.orientation_covariance)
  return _internal_mutable_orientation_covariance();
}

// .LSLAM.Vector3d angular_velocity = 4;
inline bool Imu::_internal_has_angular_velocity() const {
  return this != internal_default_instance() && _impl_.angular_velocity_ != nullptr;
}
inline bool Imu::has_angular_velocity() const {
  return _internal_has_angular_velocity();
}
inline const ::LSLAM::Vector3d& Imu::_internal_angular_velocity() const {
  const ::LSLAM::Vector3d* p = _impl_.angular_velocity_;
  return p != nullptr ? *p : reinterpret_cast<const ::LSLAM::Vector3d&>(
      ::LSLAM::_Vector3d_default_instance_);
}
inline const ::LSLAM::Vector3d& Imu::angular_velocity() const {
  // @@protoc_insertion_point(field_get:LSLAM.Imu.angular_velocity)
  return _internal_angular_velocity();
}
inline void Imu::unsafe_arena_set_allocated_angular_velocity(
    ::LSLAM::Vector3d* angular_velocity) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.angular_velocity_);
  }
  _impl_.angular_velocity_ = angular_velocity;
  if (angular_velocity) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:LSLAM.Imu.angular_velocity)
}
inline ::LSLAM::Vector3d* Imu::release_angular_velocity() {
  
  ::LSLAM::Vector3d* temp = _impl_.angular_velocity_;
  _impl_.angular_velocity_ = nullptr;
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
inline ::LSLAM::Vector3d* Imu::unsafe_arena_release_angular_velocity() {
  // @@protoc_insertion_point(field_release:LSLAM.Imu.angular_velocity)
  
  ::LSLAM::Vector3d* temp = _impl_.angular_velocity_;
  _impl_.angular_velocity_ = nullptr;
  return temp;
}
inline ::LSLAM::Vector3d* Imu::_internal_mutable_angular_velocity() {
  
  if (_impl_.angular_velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::LSLAM::Vector3d>(GetArenaForAllocation());
    _impl_.angular_velocity_ = p;
  }
  return _impl_.angular_velocity_;
}
inline ::LSLAM::Vector3d* Imu::mutable_angular_velocity() {
  ::LSLAM::Vector3d* _msg = _internal_mutable_angular_velocity();
  // @@protoc_insertion_point(field_mutable:LSLAM.Imu.angular_velocity)
  return _msg;
}
inline void Imu::set_allocated_angular_velocity(::LSLAM::Vector3d* angular_velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.angular_velocity_);
  }
  if (angular_velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(angular_velocity));
    if (message_arena != submessage_arena) {
      angular_velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, angular_velocity, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.angular_velocity_ = angular_velocity;
  // @@protoc_insertion_point(field_set_allocated:LSLAM.Imu.angular_velocity)
}

// repeated double angular_velocity_covariance = 5;
inline int Imu::_internal_angular_velocity_covariance_size() const {
  return _impl_.angular_velocity_covariance_.size();
}
inline int Imu::angular_velocity_covariance_size() const {
  return _internal_angular_velocity_covariance_size();
}
inline void Imu::clear_angular_velocity_covariance() {
  _impl_.angular_velocity_covariance_.Clear();
}
inline double Imu::_internal_angular_velocity_covariance(int index) const {
  return _impl_.angular_velocity_covariance_.Get(index);
}
inline double Imu::angular_velocity_covariance(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.Imu.angular_velocity_covariance)
  return _internal_angular_velocity_covariance(index);
}
inline void Imu::set_angular_velocity_covariance(int index, double value) {
  _impl_.angular_velocity_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:LSLAM.Imu.angular_velocity_covariance)
}
inline void Imu::_internal_add_angular_velocity_covariance(double value) {
  _impl_.angular_velocity_covariance_.Add(value);
}
inline void Imu::add_angular_velocity_covariance(double value) {
  _internal_add_angular_velocity_covariance(value);
  // @@protoc_insertion_point(field_add:LSLAM.Imu.angular_velocity_covariance)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Imu::_internal_angular_velocity_covariance() const {
  return _impl_.angular_velocity_covariance_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Imu::angular_velocity_covariance() const {
  // @@protoc_insertion_point(field_list:LSLAM.Imu.angular_velocity_covariance)
  return _internal_angular_velocity_covariance();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Imu::_internal_mutable_angular_velocity_covariance() {
  return &_impl_.angular_velocity_covariance_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Imu::mutable_angular_velocity_covariance() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.Imu.angular_velocity_covariance)
  return _internal_mutable_angular_velocity_covariance();
}

// .LSLAM.Vector3d linear_acceleration = 6;
inline bool Imu::_internal_has_linear_acceleration() const {
  return this != internal_default_instance() && _impl_.linear_acceleration_ != nullptr;
}
inline bool Imu::has_linear_acceleration() const {
  return _internal_has_linear_acceleration();
}
inline const ::LSLAM::Vector3d& Imu::_internal_linear_acceleration() const {
  const ::LSLAM::Vector3d* p = _impl_.linear_acceleration_;
  return p != nullptr ? *p : reinterpret_cast<const ::LSLAM::Vector3d&>(
      ::LSLAM::_Vector3d_default_instance_);
}
inline const ::LSLAM::Vector3d& Imu::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:LSLAM.Imu.linear_acceleration)
  return _internal_linear_acceleration();
}
inline void Imu::unsafe_arena_set_allocated_linear_acceleration(
    ::LSLAM::Vector3d* linear_acceleration) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.linear_acceleration_);
  }
  _impl_.linear_acceleration_ = linear_acceleration;
  if (linear_acceleration) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:LSLAM.Imu.linear_acceleration)
}
inline ::LSLAM::Vector3d* Imu::release_linear_acceleration() {
  
  ::LSLAM::Vector3d* temp = _impl_.linear_acceleration_;
  _impl_.linear_acceleration_ = nullptr;
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
inline ::LSLAM::Vector3d* Imu::unsafe_arena_release_linear_acceleration() {
  // @@protoc_insertion_point(field_release:LSLAM.Imu.linear_acceleration)
  
  ::LSLAM::Vector3d* temp = _impl_.linear_acceleration_;
  _impl_.linear_acceleration_ = nullptr;
  return temp;
}
inline ::LSLAM::Vector3d* Imu::_internal_mutable_linear_acceleration() {
  
  if (_impl_.linear_acceleration_ == nullptr) {
    auto* p = CreateMaybeMessage<::LSLAM::Vector3d>(GetArenaForAllocation());
    _impl_.linear_acceleration_ = p;
  }
  return _impl_.linear_acceleration_;
}
inline ::LSLAM::Vector3d* Imu::mutable_linear_acceleration() {
  ::LSLAM::Vector3d* _msg = _internal_mutable_linear_acceleration();
  // @@protoc_insertion_point(field_mutable:LSLAM.Imu.linear_acceleration)
  return _msg;
}
inline void Imu::set_allocated_linear_acceleration(::LSLAM::Vector3d* linear_acceleration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.linear_acceleration_);
  }
  if (linear_acceleration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(linear_acceleration));
    if (message_arena != submessage_arena) {
      linear_acceleration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, linear_acceleration, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.linear_acceleration_ = linear_acceleration;
  // @@protoc_insertion_point(field_set_allocated:LSLAM.Imu.linear_acceleration)
}

// repeated double linear_acceleration_covariance = 7;
inline int Imu::_internal_linear_acceleration_covariance_size() const {
  return _impl_.linear_acceleration_covariance_.size();
}
inline int Imu::linear_acceleration_covariance_size() const {
  return _internal_linear_acceleration_covariance_size();
}
inline void Imu::clear_linear_acceleration_covariance() {
  _impl_.linear_acceleration_covariance_.Clear();
}
inline double Imu::_internal_linear_acceleration_covariance(int index) const {
  return _impl_.linear_acceleration_covariance_.Get(index);
}
inline double Imu::linear_acceleration_covariance(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.Imu.linear_acceleration_covariance)
  return _internal_linear_acceleration_covariance(index);
}
inline void Imu::set_linear_acceleration_covariance(int index, double value) {
  _impl_.linear_acceleration_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:LSLAM.Imu.linear_acceleration_covariance)
}
inline void Imu::_internal_add_linear_acceleration_covariance(double value) {
  _impl_.linear_acceleration_covariance_.Add(value);
}
inline void Imu::add_linear_acceleration_covariance(double value) {
  _internal_add_linear_acceleration_covariance(value);
  // @@protoc_insertion_point(field_add:LSLAM.Imu.linear_acceleration_covariance)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Imu::_internal_linear_acceleration_covariance() const {
  return _impl_.linear_acceleration_covariance_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Imu::linear_acceleration_covariance() const {
  // @@protoc_insertion_point(field_list:LSLAM.Imu.linear_acceleration_covariance)
  return _internal_linear_acceleration_covariance();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Imu::_internal_mutable_linear_acceleration_covariance() {
  return &_impl_.linear_acceleration_covariance_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Imu::mutable_linear_acceleration_covariance() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.Imu.linear_acceleration_covariance)
  return _internal_mutable_linear_acceleration_covariance();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Imu_2eproto
