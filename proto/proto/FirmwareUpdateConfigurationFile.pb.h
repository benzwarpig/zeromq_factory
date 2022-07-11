// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FirmwareUpdateConfigurationFile.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_FirmwareUpdateConfigurationFile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_FirmwareUpdateConfigurationFile_2eproto

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
#include "Points.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_FirmwareUpdateConfigurationFile_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_FirmwareUpdateConfigurationFile_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_FirmwareUpdateConfigurationFile_2eproto;
namespace LSLAM {
class FirmwareUpdate;
struct FirmwareUpdateDefaultTypeInternal;
extern FirmwareUpdateDefaultTypeInternal _FirmwareUpdate_default_instance_;
class ProgramNameLocation;
struct ProgramNameLocationDefaultTypeInternal;
extern ProgramNameLocationDefaultTypeInternal _ProgramNameLocation_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::FirmwareUpdate* Arena::CreateMaybeMessage<::LSLAM::FirmwareUpdate>(Arena*);
template<> ::LSLAM::ProgramNameLocation* Arena::CreateMaybeMessage<::LSLAM::ProgramNameLocation>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class ProgramNameLocation final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.ProgramNameLocation) */ {
 public:
  inline ProgramNameLocation() : ProgramNameLocation(nullptr) {}
  ~ProgramNameLocation() override;
  explicit PROTOBUF_CONSTEXPR ProgramNameLocation(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProgramNameLocation(const ProgramNameLocation& from);
  ProgramNameLocation(ProgramNameLocation&& from) noexcept
    : ProgramNameLocation() {
    *this = ::std::move(from);
  }

  inline ProgramNameLocation& operator=(const ProgramNameLocation& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProgramNameLocation& operator=(ProgramNameLocation&& from) noexcept {
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
  static const ProgramNameLocation& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProgramNameLocation* internal_default_instance() {
    return reinterpret_cast<const ProgramNameLocation*>(
               &_ProgramNameLocation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProgramNameLocation& a, ProgramNameLocation& b) {
    a.Swap(&b);
  }
  inline void Swap(ProgramNameLocation* other) {
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
  void UnsafeArenaSwap(ProgramNameLocation* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ProgramNameLocation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ProgramNameLocation>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ProgramNameLocation& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ProgramNameLocation& from) {
    ProgramNameLocation::MergeImpl(*this, from);
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
  void InternalSwap(ProgramNameLocation* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.ProgramNameLocation";
  }
  protected:
  explicit ProgramNameLocation(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProgramNameFieldNumber = 1,
    kProgramLocationFieldNumber = 2,
  };
  // string program_name = 1;
  void clear_program_name();
  const std::string& program_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_program_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_program_name();
  PROTOBUF_NODISCARD std::string* release_program_name();
  void set_allocated_program_name(std::string* program_name);
  private:
  const std::string& _internal_program_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_program_name(const std::string& value);
  std::string* _internal_mutable_program_name();
  public:

  // string program_location = 2;
  void clear_program_location();
  const std::string& program_location() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_program_location(ArgT0&& arg0, ArgT... args);
  std::string* mutable_program_location();
  PROTOBUF_NODISCARD std::string* release_program_location();
  void set_allocated_program_location(std::string* program_location);
  private:
  const std::string& _internal_program_location() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_program_location(const std::string& value);
  std::string* _internal_mutable_program_location();
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.ProgramNameLocation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr program_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr program_location_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_FirmwareUpdateConfigurationFile_2eproto;
};
// -------------------------------------------------------------------

class FirmwareUpdate final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.FirmwareUpdate) */ {
 public:
  inline FirmwareUpdate() : FirmwareUpdate(nullptr) {}
  ~FirmwareUpdate() override;
  explicit PROTOBUF_CONSTEXPR FirmwareUpdate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FirmwareUpdate(const FirmwareUpdate& from);
  FirmwareUpdate(FirmwareUpdate&& from) noexcept
    : FirmwareUpdate() {
    *this = ::std::move(from);
  }

  inline FirmwareUpdate& operator=(const FirmwareUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  inline FirmwareUpdate& operator=(FirmwareUpdate&& from) noexcept {
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
  static const FirmwareUpdate& default_instance() {
    return *internal_default_instance();
  }
  static inline const FirmwareUpdate* internal_default_instance() {
    return reinterpret_cast<const FirmwareUpdate*>(
               &_FirmwareUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FirmwareUpdate& a, FirmwareUpdate& b) {
    a.Swap(&b);
  }
  inline void Swap(FirmwareUpdate* other) {
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
  void UnsafeArenaSwap(FirmwareUpdate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FirmwareUpdate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FirmwareUpdate>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FirmwareUpdate& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const FirmwareUpdate& from) {
    FirmwareUpdate::MergeImpl(*this, from);
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
  void InternalSwap(FirmwareUpdate* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.FirmwareUpdate";
  }
  protected:
  explicit FirmwareUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProgramNameLocationFieldNumber = 1,
  };
  // repeated .LSLAM.ProgramNameLocation program_name_location = 1;
  int program_name_location_size() const;
  private:
  int _internal_program_name_location_size() const;
  public:
  void clear_program_name_location();
  ::LSLAM::ProgramNameLocation* mutable_program_name_location(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::ProgramNameLocation >*
      mutable_program_name_location();
  private:
  const ::LSLAM::ProgramNameLocation& _internal_program_name_location(int index) const;
  ::LSLAM::ProgramNameLocation* _internal_add_program_name_location();
  public:
  const ::LSLAM::ProgramNameLocation& program_name_location(int index) const;
  ::LSLAM::ProgramNameLocation* add_program_name_location();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::ProgramNameLocation >&
      program_name_location() const;

  // @@protoc_insertion_point(class_scope:LSLAM.FirmwareUpdate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::ProgramNameLocation > program_name_location_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_FirmwareUpdateConfigurationFile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProgramNameLocation

// string program_name = 1;
inline void ProgramNameLocation::clear_program_name() {
  _impl_.program_name_.ClearToEmpty();
}
inline const std::string& ProgramNameLocation::program_name() const {
  // @@protoc_insertion_point(field_get:LSLAM.ProgramNameLocation.program_name)
  return _internal_program_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ProgramNameLocation::set_program_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.program_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:LSLAM.ProgramNameLocation.program_name)
}
inline std::string* ProgramNameLocation::mutable_program_name() {
  std::string* _s = _internal_mutable_program_name();
  // @@protoc_insertion_point(field_mutable:LSLAM.ProgramNameLocation.program_name)
  return _s;
}
inline const std::string& ProgramNameLocation::_internal_program_name() const {
  return _impl_.program_name_.Get();
}
inline void ProgramNameLocation::_internal_set_program_name(const std::string& value) {
  
  _impl_.program_name_.Set(value, GetArenaForAllocation());
}
inline std::string* ProgramNameLocation::_internal_mutable_program_name() {
  
  return _impl_.program_name_.Mutable(GetArenaForAllocation());
}
inline std::string* ProgramNameLocation::release_program_name() {
  // @@protoc_insertion_point(field_release:LSLAM.ProgramNameLocation.program_name)
  return _impl_.program_name_.Release();
}
inline void ProgramNameLocation::set_allocated_program_name(std::string* program_name) {
  if (program_name != nullptr) {
    
  } else {
    
  }
  _impl_.program_name_.SetAllocated(program_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.program_name_.IsDefault()) {
    _impl_.program_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:LSLAM.ProgramNameLocation.program_name)
}

// string program_location = 2;
inline void ProgramNameLocation::clear_program_location() {
  _impl_.program_location_.ClearToEmpty();
}
inline const std::string& ProgramNameLocation::program_location() const {
  // @@protoc_insertion_point(field_get:LSLAM.ProgramNameLocation.program_location)
  return _internal_program_location();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ProgramNameLocation::set_program_location(ArgT0&& arg0, ArgT... args) {
 
 _impl_.program_location_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:LSLAM.ProgramNameLocation.program_location)
}
inline std::string* ProgramNameLocation::mutable_program_location() {
  std::string* _s = _internal_mutable_program_location();
  // @@protoc_insertion_point(field_mutable:LSLAM.ProgramNameLocation.program_location)
  return _s;
}
inline const std::string& ProgramNameLocation::_internal_program_location() const {
  return _impl_.program_location_.Get();
}
inline void ProgramNameLocation::_internal_set_program_location(const std::string& value) {
  
  _impl_.program_location_.Set(value, GetArenaForAllocation());
}
inline std::string* ProgramNameLocation::_internal_mutable_program_location() {
  
  return _impl_.program_location_.Mutable(GetArenaForAllocation());
}
inline std::string* ProgramNameLocation::release_program_location() {
  // @@protoc_insertion_point(field_release:LSLAM.ProgramNameLocation.program_location)
  return _impl_.program_location_.Release();
}
inline void ProgramNameLocation::set_allocated_program_location(std::string* program_location) {
  if (program_location != nullptr) {
    
  } else {
    
  }
  _impl_.program_location_.SetAllocated(program_location, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.program_location_.IsDefault()) {
    _impl_.program_location_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:LSLAM.ProgramNameLocation.program_location)
}

// -------------------------------------------------------------------

// FirmwareUpdate

// repeated .LSLAM.ProgramNameLocation program_name_location = 1;
inline int FirmwareUpdate::_internal_program_name_location_size() const {
  return _impl_.program_name_location_.size();
}
inline int FirmwareUpdate::program_name_location_size() const {
  return _internal_program_name_location_size();
}
inline void FirmwareUpdate::clear_program_name_location() {
  _impl_.program_name_location_.Clear();
}
inline ::LSLAM::ProgramNameLocation* FirmwareUpdate::mutable_program_name_location(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.FirmwareUpdate.program_name_location)
  return _impl_.program_name_location_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::ProgramNameLocation >*
FirmwareUpdate::mutable_program_name_location() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.FirmwareUpdate.program_name_location)
  return &_impl_.program_name_location_;
}
inline const ::LSLAM::ProgramNameLocation& FirmwareUpdate::_internal_program_name_location(int index) const {
  return _impl_.program_name_location_.Get(index);
}
inline const ::LSLAM::ProgramNameLocation& FirmwareUpdate::program_name_location(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.FirmwareUpdate.program_name_location)
  return _internal_program_name_location(index);
}
inline ::LSLAM::ProgramNameLocation* FirmwareUpdate::_internal_add_program_name_location() {
  return _impl_.program_name_location_.Add();
}
inline ::LSLAM::ProgramNameLocation* FirmwareUpdate::add_program_name_location() {
  ::LSLAM::ProgramNameLocation* _add = _internal_add_program_name_location();
  // @@protoc_insertion_point(field_add:LSLAM.FirmwareUpdate.program_name_location)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::ProgramNameLocation >&
FirmwareUpdate::program_name_location() const {
  // @@protoc_insertion_point(field_list:LSLAM.FirmwareUpdate.program_name_location)
  return _impl_.program_name_location_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_FirmwareUpdateConfigurationFile_2eproto