// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WifiLamp.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_WifiLamp_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_WifiLamp_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_WifiLamp_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_WifiLamp_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_WifiLamp_2eproto;
namespace LSLAM {
class WifiLamp;
struct WifiLampDefaultTypeInternal;
extern WifiLampDefaultTypeInternal _WifiLamp_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::WifiLamp* Arena::CreateMaybeMessage<::LSLAM::WifiLamp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

// ===================================================================

class WifiLamp final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.WifiLamp) */ {
 public:
  inline WifiLamp() : WifiLamp(nullptr) {}
  ~WifiLamp() override;
  explicit PROTOBUF_CONSTEXPR WifiLamp(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WifiLamp(const WifiLamp& from);
  WifiLamp(WifiLamp&& from) noexcept
    : WifiLamp() {
    *this = ::std::move(from);
  }

  inline WifiLamp& operator=(const WifiLamp& from) {
    CopyFrom(from);
    return *this;
  }
  inline WifiLamp& operator=(WifiLamp&& from) noexcept {
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
  static const WifiLamp& default_instance() {
    return *internal_default_instance();
  }
  static inline const WifiLamp* internal_default_instance() {
    return reinterpret_cast<const WifiLamp*>(
               &_WifiLamp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WifiLamp& a, WifiLamp& b) {
    a.Swap(&b);
  }
  inline void Swap(WifiLamp* other) {
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
  void UnsafeArenaSwap(WifiLamp* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WifiLamp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WifiLamp>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const WifiLamp& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const WifiLamp& from) {
    WifiLamp::MergeImpl(*this, from);
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
  void InternalSwap(WifiLamp* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.WifiLamp";
  }
  protected:
  explicit WifiLamp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWifiConnectingFieldNumber = 1,
    kWifiConnectionSuccessfulFieldNumber = 2,
    kStartDistributionNetworkFieldNumber = 3,
  };
  // bool wifi_connecting = 1;
  void clear_wifi_connecting();
  bool wifi_connecting() const;
  void set_wifi_connecting(bool value);
  private:
  bool _internal_wifi_connecting() const;
  void _internal_set_wifi_connecting(bool value);
  public:

  // bool wifi_connection_successful = 2;
  void clear_wifi_connection_successful();
  bool wifi_connection_successful() const;
  void set_wifi_connection_successful(bool value);
  private:
  bool _internal_wifi_connection_successful() const;
  void _internal_set_wifi_connection_successful(bool value);
  public:

  // bool start_distribution_network = 3;
  void clear_start_distribution_network();
  bool start_distribution_network() const;
  void set_start_distribution_network(bool value);
  private:
  bool _internal_start_distribution_network() const;
  void _internal_set_start_distribution_network(bool value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.WifiLamp)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    bool wifi_connecting_;
    bool wifi_connection_successful_;
    bool start_distribution_network_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_WifiLamp_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WifiLamp

// bool wifi_connecting = 1;
inline void WifiLamp::clear_wifi_connecting() {
  _impl_.wifi_connecting_ = false;
}
inline bool WifiLamp::_internal_wifi_connecting() const {
  return _impl_.wifi_connecting_;
}
inline bool WifiLamp::wifi_connecting() const {
  // @@protoc_insertion_point(field_get:LSLAM.WifiLamp.wifi_connecting)
  return _internal_wifi_connecting();
}
inline void WifiLamp::_internal_set_wifi_connecting(bool value) {
  
  _impl_.wifi_connecting_ = value;
}
inline void WifiLamp::set_wifi_connecting(bool value) {
  _internal_set_wifi_connecting(value);
  // @@protoc_insertion_point(field_set:LSLAM.WifiLamp.wifi_connecting)
}

// bool wifi_connection_successful = 2;
inline void WifiLamp::clear_wifi_connection_successful() {
  _impl_.wifi_connection_successful_ = false;
}
inline bool WifiLamp::_internal_wifi_connection_successful() const {
  return _impl_.wifi_connection_successful_;
}
inline bool WifiLamp::wifi_connection_successful() const {
  // @@protoc_insertion_point(field_get:LSLAM.WifiLamp.wifi_connection_successful)
  return _internal_wifi_connection_successful();
}
inline void WifiLamp::_internal_set_wifi_connection_successful(bool value) {
  
  _impl_.wifi_connection_successful_ = value;
}
inline void WifiLamp::set_wifi_connection_successful(bool value) {
  _internal_set_wifi_connection_successful(value);
  // @@protoc_insertion_point(field_set:LSLAM.WifiLamp.wifi_connection_successful)
}

// bool start_distribution_network = 3;
inline void WifiLamp::clear_start_distribution_network() {
  _impl_.start_distribution_network_ = false;
}
inline bool WifiLamp::_internal_start_distribution_network() const {
  return _impl_.start_distribution_network_;
}
inline bool WifiLamp::start_distribution_network() const {
  // @@protoc_insertion_point(field_get:LSLAM.WifiLamp.start_distribution_network)
  return _internal_start_distribution_network();
}
inline void WifiLamp::_internal_set_start_distribution_network(bool value) {
  
  _impl_.start_distribution_network_ = value;
}
inline void WifiLamp::set_start_distribution_network(bool value) {
  _internal_set_start_distribution_network(value);
  // @@protoc_insertion_point(field_set:LSLAM.WifiLamp.start_distribution_network)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_WifiLamp_2eproto
