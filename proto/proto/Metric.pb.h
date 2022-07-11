// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Metric.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Metric_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Metric_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "MetricLabel.pb.h"
#include "HistogramBucket.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Metric_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Metric_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Metric_2eproto;
namespace LSLAM {
class Metric;
struct MetricDefaultTypeInternal;
extern MetricDefaultTypeInternal _Metric_default_instance_;
}  // namespace LSLAM
PROTOBUF_NAMESPACE_OPEN
template<> ::LSLAM::Metric* Arena::CreateMaybeMessage<::LSLAM::Metric>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LSLAM {

enum Metric_Type : int {
  Metric_Type_TYPE_COUNTER = 0,
  Metric_Type_TYPE_GAUGE = 1,
  Metric_Type_TYPE_HISTOGRAM = 2,
  Metric_Type_Metric_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Metric_Type_Metric_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Metric_Type_IsValid(int value);
constexpr Metric_Type Metric_Type_Type_MIN = Metric_Type_TYPE_COUNTER;
constexpr Metric_Type Metric_Type_Type_MAX = Metric_Type_TYPE_HISTOGRAM;
constexpr int Metric_Type_Type_ARRAYSIZE = Metric_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Metric_Type_descriptor();
template<typename T>
inline const std::string& Metric_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Metric_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Metric_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Metric_Type_descriptor(), enum_t_value);
}
inline bool Metric_Type_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Metric_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Metric_Type>(
    Metric_Type_descriptor(), name, value);
}
// ===================================================================

class Metric final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LSLAM.Metric) */ {
 public:
  inline Metric() : Metric(nullptr) {}
  ~Metric() override;
  explicit PROTOBUF_CONSTEXPR Metric(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Metric(const Metric& from);
  Metric(Metric&& from) noexcept
    : Metric() {
    *this = ::std::move(from);
  }

  inline Metric& operator=(const Metric& from) {
    CopyFrom(from);
    return *this;
  }
  inline Metric& operator=(Metric&& from) noexcept {
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
  static const Metric& default_instance() {
    return *internal_default_instance();
  }
  static inline const Metric* internal_default_instance() {
    return reinterpret_cast<const Metric*>(
               &_Metric_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Metric& a, Metric& b) {
    a.Swap(&b);
  }
  inline void Swap(Metric* other) {
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
  void UnsafeArenaSwap(Metric* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Metric* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Metric>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Metric& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Metric& from) {
    Metric::MergeImpl(*this, from);
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
  void InternalSwap(Metric* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LSLAM.Metric";
  }
  protected:
  explicit Metric(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Metric_Type Type;
  static constexpr Type TYPE_COUNTER =
    Metric_Type_TYPE_COUNTER;
  static constexpr Type TYPE_GAUGE =
    Metric_Type_TYPE_GAUGE;
  static constexpr Type TYPE_HISTOGRAM =
    Metric_Type_TYPE_HISTOGRAM;
  static inline bool Type_IsValid(int value) {
    return Metric_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    Metric_Type_Type_MIN;
  static constexpr Type Type_MAX =
    Metric_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    Metric_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return Metric_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return Metric_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Type* value) {
    return Metric_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kLabelsFieldNumber = 2,
    kCountsByBucketFieldNumber = 4,
    kValueFieldNumber = 3,
    kTypeFieldNumber = 1,
  };
  // repeated .LSLAM.MetricLabel labels = 2;
  int labels_size() const;
  private:
  int _internal_labels_size() const;
  public:
  void clear_labels();
  ::LSLAM::MetricLabel* mutable_labels(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::MetricLabel >*
      mutable_labels();
  private:
  const ::LSLAM::MetricLabel& _internal_labels(int index) const;
  ::LSLAM::MetricLabel* _internal_add_labels();
  public:
  const ::LSLAM::MetricLabel& labels(int index) const;
  ::LSLAM::MetricLabel* add_labels();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::MetricLabel >&
      labels() const;

  // repeated .LSLAM.HistogramBucket counts_by_bucket = 4;
  int counts_by_bucket_size() const;
  private:
  int _internal_counts_by_bucket_size() const;
  public:
  void clear_counts_by_bucket();
  ::LSLAM::HistogramBucket* mutable_counts_by_bucket(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::HistogramBucket >*
      mutable_counts_by_bucket();
  private:
  const ::LSLAM::HistogramBucket& _internal_counts_by_bucket(int index) const;
  ::LSLAM::HistogramBucket* _internal_add_counts_by_bucket();
  public:
  const ::LSLAM::HistogramBucket& counts_by_bucket(int index) const;
  ::LSLAM::HistogramBucket* add_counts_by_bucket();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::HistogramBucket >&
      counts_by_bucket() const;

  // double value = 3;
  void clear_value();
  double value() const;
  void set_value(double value);
  private:
  double _internal_value() const;
  void _internal_set_value(double value);
  public:

  // int32 type = 1;
  void clear_type();
  int32_t type() const;
  void set_type(int32_t value);
  private:
  int32_t _internal_type() const;
  void _internal_set_type(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:LSLAM.Metric)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::MetricLabel > labels_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::HistogramBucket > counts_by_bucket_;
    double value_;
    int32_t type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Metric_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Metric

// int32 type = 1;
inline void Metric::clear_type() {
  _impl_.type_ = 0;
}
inline int32_t Metric::_internal_type() const {
  return _impl_.type_;
}
inline int32_t Metric::type() const {
  // @@protoc_insertion_point(field_get:LSLAM.Metric.type)
  return _internal_type();
}
inline void Metric::_internal_set_type(int32_t value) {
  
  _impl_.type_ = value;
}
inline void Metric::set_type(int32_t value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:LSLAM.Metric.type)
}

// repeated .LSLAM.MetricLabel labels = 2;
inline int Metric::_internal_labels_size() const {
  return _impl_.labels_.size();
}
inline int Metric::labels_size() const {
  return _internal_labels_size();
}
inline ::LSLAM::MetricLabel* Metric::mutable_labels(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.Metric.labels)
  return _impl_.labels_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::MetricLabel >*
Metric::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.Metric.labels)
  return &_impl_.labels_;
}
inline const ::LSLAM::MetricLabel& Metric::_internal_labels(int index) const {
  return _impl_.labels_.Get(index);
}
inline const ::LSLAM::MetricLabel& Metric::labels(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.Metric.labels)
  return _internal_labels(index);
}
inline ::LSLAM::MetricLabel* Metric::_internal_add_labels() {
  return _impl_.labels_.Add();
}
inline ::LSLAM::MetricLabel* Metric::add_labels() {
  ::LSLAM::MetricLabel* _add = _internal_add_labels();
  // @@protoc_insertion_point(field_add:LSLAM.Metric.labels)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::MetricLabel >&
Metric::labels() const {
  // @@protoc_insertion_point(field_list:LSLAM.Metric.labels)
  return _impl_.labels_;
}

// double value = 3;
inline void Metric::clear_value() {
  _impl_.value_ = 0;
}
inline double Metric::_internal_value() const {
  return _impl_.value_;
}
inline double Metric::value() const {
  // @@protoc_insertion_point(field_get:LSLAM.Metric.value)
  return _internal_value();
}
inline void Metric::_internal_set_value(double value) {
  
  _impl_.value_ = value;
}
inline void Metric::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:LSLAM.Metric.value)
}

// repeated .LSLAM.HistogramBucket counts_by_bucket = 4;
inline int Metric::_internal_counts_by_bucket_size() const {
  return _impl_.counts_by_bucket_.size();
}
inline int Metric::counts_by_bucket_size() const {
  return _internal_counts_by_bucket_size();
}
inline ::LSLAM::HistogramBucket* Metric::mutable_counts_by_bucket(int index) {
  // @@protoc_insertion_point(field_mutable:LSLAM.Metric.counts_by_bucket)
  return _impl_.counts_by_bucket_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::HistogramBucket >*
Metric::mutable_counts_by_bucket() {
  // @@protoc_insertion_point(field_mutable_list:LSLAM.Metric.counts_by_bucket)
  return &_impl_.counts_by_bucket_;
}
inline const ::LSLAM::HistogramBucket& Metric::_internal_counts_by_bucket(int index) const {
  return _impl_.counts_by_bucket_.Get(index);
}
inline const ::LSLAM::HistogramBucket& Metric::counts_by_bucket(int index) const {
  // @@protoc_insertion_point(field_get:LSLAM.Metric.counts_by_bucket)
  return _internal_counts_by_bucket(index);
}
inline ::LSLAM::HistogramBucket* Metric::_internal_add_counts_by_bucket() {
  return _impl_.counts_by_bucket_.Add();
}
inline ::LSLAM::HistogramBucket* Metric::add_counts_by_bucket() {
  ::LSLAM::HistogramBucket* _add = _internal_add_counts_by_bucket();
  // @@protoc_insertion_point(field_add:LSLAM.Metric.counts_by_bucket)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LSLAM::HistogramBucket >&
Metric::counts_by_bucket() const {
  // @@protoc_insertion_point(field_list:LSLAM.Metric.counts_by_bucket)
  return _impl_.counts_by_bucket_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace LSLAM

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::LSLAM::Metric_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::LSLAM::Metric_Type>() {
  return ::LSLAM::Metric_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Metric_2eproto
