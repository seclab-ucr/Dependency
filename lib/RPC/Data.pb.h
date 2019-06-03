// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Data_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Data_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Data_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Data_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Data_2eproto;
namespace dra {
class all_data;
class all_dataDefaultTypeInternal;
extern all_dataDefaultTypeInternal _all_data_default_instance_;
class all_data_AddressTimeEntry_DoNotUse;
class all_data_AddressTimeEntry_DoNotUseDefaultTypeInternal;
extern all_data_AddressTimeEntry_DoNotUseDefaultTypeInternal _all_data_AddressTimeEntry_DoNotUse_default_instance_;
class data;
class dataDefaultTypeInternal;
extern dataDefaultTypeInternal _data_default_instance_;
}  // namespace dra
PROTOBUF_NAMESPACE_OPEN
template<> ::dra::all_data* Arena::CreateMaybeMessage<::dra::all_data>(Arena*);
template<> ::dra::all_data_AddressTimeEntry_DoNotUse* Arena::CreateMaybeMessage<::dra::all_data_AddressTimeEntry_DoNotUse>(Arena*);
template<> ::dra::data* Arena::CreateMaybeMessage<::dra::data>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace dra {

// ===================================================================

class data :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dra.data) */ {
 public:
  data();
  virtual ~data();

  data(const data& from);
  data(data&& from) noexcept
    : data() {
    *this = ::std::move(from);
  }

  inline data& operator=(const data& from) {
    CopyFrom(from);
    return *this;
  }
  inline data& operator=(data&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const data* internal_default_instance() {
    return reinterpret_cast<const data*>(
               &_data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(data* other);
  friend void swap(data& a, data& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline data* New() const final {
    return CreateMaybeMessage<data>(nullptr);
  }

  data* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<data>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const data& from);
  void MergeFrom(const data& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(data* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dra.data";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Data_2eproto);
    return ::descriptor_table_Data_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string date = 2;
  void clear_date();
  static const int kDateFieldNumber = 2;
  const std::string& date() const;
  void set_date(const std::string& value);
  void set_date(std::string&& value);
  void set_date(const char* value);
  void set_date(const char* value, size_t size);
  std::string* mutable_date();
  std::string* release_date();
  void set_allocated_date(std::string* date);

  // uint64 time = 1;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::uint64 time() const;
  void set_time(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // uint64 uncovered = 3;
  void clear_uncovered();
  static const int kUncoveredFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::uint64 uncovered() const;
  void set_uncovered(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:dra.data)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr date_;
  ::PROTOBUF_NAMESPACE_ID::uint64 time_;
  ::PROTOBUF_NAMESPACE_ID::uint64 uncovered_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Data_2eproto;
};
// -------------------------------------------------------------------

class all_data_AddressTimeEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<all_data_AddressTimeEntry_DoNotUse, 
    ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::uint64,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<all_data_AddressTimeEntry_DoNotUse, 
    ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::uint64,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
    0 > SuperType;
  all_data_AddressTimeEntry_DoNotUse();
  all_data_AddressTimeEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const all_data_AddressTimeEntry_DoNotUse& other);
  static const all_data_AddressTimeEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const all_data_AddressTimeEntry_DoNotUse*>(&_all_data_AddressTimeEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(void*) { return true; }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Data_2eproto);
    return ::descriptor_table_Data_2eproto.file_level_metadata[1];
  }

  public:
};

// -------------------------------------------------------------------

class all_data :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dra.all_data) */ {
 public:
  all_data();
  virtual ~all_data();

  all_data(const all_data& from);
  all_data(all_data&& from) noexcept
    : all_data() {
    *this = ::std::move(from);
  }

  inline all_data& operator=(const all_data& from) {
    CopyFrom(from);
    return *this;
  }
  inline all_data& operator=(all_data&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const all_data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const all_data* internal_default_instance() {
    return reinterpret_cast<const all_data*>(
               &_all_data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(all_data* other);
  friend void swap(all_data& a, all_data& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline all_data* New() const final {
    return CreateMaybeMessage<all_data>(nullptr);
  }

  all_data* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<all_data>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const all_data& from);
  void MergeFrom(const all_data& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(all_data* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dra.all_data";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Data_2eproto);
    return ::descriptor_table_Data_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<uint64, uint64> address_time = 2;
  int address_time_size() const;
  void clear_address_time();
  static const int kAddressTimeFieldNumber = 2;
  const ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::uint64 >&
      address_time() const;
  ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::uint64 >*
      mutable_address_time();

  // repeated .dra.data data = 3;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 3;
  ::dra::data* mutable_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dra::data >*
      mutable_data();
  const ::dra::data& data(int index) const;
  ::dra::data* add_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dra::data >&
      data() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // @@protoc_insertion_point(class_scope:dra.all_data)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      all_data_AddressTimeEntry_DoNotUse,
      ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::uint64,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64,
      0 > address_time_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dra::data > data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Data_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// data

// uint64 time = 1;
inline void data::clear_time() {
  time_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 data::time() const {
  // @@protoc_insertion_point(field_get:dra.data.time)
  return time_;
}
inline void data::set_time(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:dra.data.time)
}

// string date = 2;
inline void data::clear_date() {
  date_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& data::date() const {
  // @@protoc_insertion_point(field_get:dra.data.date)
  return date_.GetNoArena();
}
inline void data::set_date(const std::string& value) {
  
  date_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dra.data.date)
}
inline void data::set_date(std::string&& value) {
  
  date_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dra.data.date)
}
inline void data::set_date(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  date_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dra.data.date)
}
inline void data::set_date(const char* value, size_t size) {
  
  date_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dra.data.date)
}
inline std::string* data::mutable_date() {
  
  // @@protoc_insertion_point(field_mutable:dra.data.date)
  return date_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* data::release_date() {
  // @@protoc_insertion_point(field_release:dra.data.date)
  
  return date_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void data::set_allocated_date(std::string* date) {
  if (date != nullptr) {
    
  } else {
    
  }
  date_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), date);
  // @@protoc_insertion_point(field_set_allocated:dra.data.date)
}

// uint64 uncovered = 3;
inline void data::clear_uncovered() {
  uncovered_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 data::uncovered() const {
  // @@protoc_insertion_point(field_get:dra.data.uncovered)
  return uncovered_;
}
inline void data::set_uncovered(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  uncovered_ = value;
  // @@protoc_insertion_point(field_set:dra.data.uncovered)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// all_data

// string name = 1;
inline void all_data::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& all_data::name() const {
  // @@protoc_insertion_point(field_get:dra.all_data.name)
  return name_.GetNoArena();
}
inline void all_data::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dra.all_data.name)
}
inline void all_data::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dra.all_data.name)
}
inline void all_data::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dra.all_data.name)
}
inline void all_data::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dra.all_data.name)
}
inline std::string* all_data::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:dra.all_data.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* all_data::release_name() {
  // @@protoc_insertion_point(field_release:dra.all_data.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void all_data::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:dra.all_data.name)
}

// map<uint64, uint64> address_time = 2;
inline int all_data::address_time_size() const {
  return address_time_.size();
}
inline void all_data::clear_address_time() {
  address_time_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::uint64 >&
all_data::address_time() const {
  // @@protoc_insertion_point(field_map:dra.all_data.address_time)
  return address_time_.GetMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::uint64 >*
all_data::mutable_address_time() {
  // @@protoc_insertion_point(field_mutable_map:dra.all_data.address_time)
  return address_time_.MutableMap();
}

// repeated .dra.data data = 3;
inline int all_data::data_size() const {
  return data_.size();
}
inline void all_data::clear_data() {
  data_.Clear();
}
inline ::dra::data* all_data::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:dra.all_data.data)
  return data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dra::data >*
all_data::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:dra.all_data.data)
  return &data_;
}
inline const ::dra::data& all_data::data(int index) const {
  // @@protoc_insertion_point(field_get:dra.all_data.data)
  return data_.Get(index);
}
inline ::dra::data* all_data::add_data() {
  // @@protoc_insertion_point(field_add:dra.all_data.data)
  return data_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dra::data >&
all_data::data() const {
  // @@protoc_insertion_point(field_list:dra.all_data.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dra

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Data_2eproto