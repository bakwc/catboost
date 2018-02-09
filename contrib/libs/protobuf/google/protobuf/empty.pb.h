// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/empty.proto

#ifndef PROTOBUF_google_2fprotobuf_2fempty_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2fempty_2eproto__INCLUDED


#include <contrib/libs/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <contrib/libs/protobuf/io/coded_stream.h>
#include <contrib/libs/protobuf/arena.h>
#include <contrib/libs/protobuf/arenastring.h>
#include <contrib/libs/protobuf/generated_message_table_driven.h>
#include <contrib/libs/protobuf/generated_message_util.h>
#include <contrib/libs/protobuf/metadata.h>
#include <contrib/libs/protobuf/message.h>
#include <contrib/libs/protobuf/repeated_field.h>  // IWYU pragma: export
#include <contrib/libs/protobuf/extension_set.h>  // IWYU pragma: export
#include <contrib/libs/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace protobuf {
class Empty;
class EmptyDefaultTypeInternal;
LIBPROTOBUF_EXPORT extern EmptyDefaultTypeInternal _Empty_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace protobuf {

namespace protobuf_google_2fprotobuf_2fempty_2eproto {
// Internal implementation detail -- do not call these.
struct LIBPROTOBUF_EXPORT TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void LIBPROTOBUF_EXPORT AddDescriptors();
void LIBPROTOBUF_EXPORT InitDefaults();
}  // namespace protobuf_google_2fprotobuf_2fempty_2eproto

// ===================================================================

class LIBPROTOBUF_EXPORT Empty : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Empty) */ {
 public:
  Empty();
  virtual ~Empty();

  Empty(const Empty& from);

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Empty& default_instance();

  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(Empty* other);
  void Swap(Empty* other);
  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const PROTOBUF_FINAL { return New(NULL); }

  Empty* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Empty* other);
  protected:
  explicit Empty(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.protobuf.Empty)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fprotobuf_2fempty_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Empty

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2fempty_2eproto__INCLUDED
