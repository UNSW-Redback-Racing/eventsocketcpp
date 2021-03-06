// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Message_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Message_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Message_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Message_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Message_2eproto;
namespace EventSocket {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
class MessageHeader;
class MessageHeaderDefaultTypeInternal;
extern MessageHeaderDefaultTypeInternal _MessageHeader_default_instance_;
}  // namespace EventSocket
PROTOBUF_NAMESPACE_OPEN
template<> ::EventSocket::Message* Arena::CreateMaybeMessage<::EventSocket::Message>(Arena*);
template<> ::EventSocket::MessageHeader* Arena::CreateMaybeMessage<::EventSocket::MessageHeader>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace EventSocket {

// ===================================================================

class MessageHeader PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:EventSocket.MessageHeader) */ {
 public:
  inline MessageHeader() : MessageHeader(nullptr) {}
  virtual ~MessageHeader();

  MessageHeader(const MessageHeader& from);
  MessageHeader(MessageHeader&& from) noexcept
    : MessageHeader() {
    *this = ::std::move(from);
  }

  inline MessageHeader& operator=(const MessageHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageHeader& operator=(MessageHeader&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const MessageHeader& default_instance();

  static inline const MessageHeader* internal_default_instance() {
    return reinterpret_cast<const MessageHeader*>(
               &_MessageHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MessageHeader& a, MessageHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageHeader* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MessageHeader* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MessageHeader* New() const final {
    return CreateMaybeMessage<MessageHeader>(nullptr);
  }

  MessageHeader* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MessageHeader>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MessageHeader& from);
  void MergeFrom(const MessageHeader& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MessageHeader* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "EventSocket.MessageHeader";
  }
  protected:
  explicit MessageHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Message_2eproto);
    return ::descriptor_table_Message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kConfigFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  // required uint32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 config = 2;
  bool has_config() const;
  private:
  bool _internal_has_config() const;
  public:
  void clear_config();
  ::PROTOBUF_NAMESPACE_ID::uint32 config() const;
  void set_config(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_config() const;
  void _internal_set_config(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 size = 3;
  bool has_size() const;
  private:
  bool _internal_has_size() const;
  public:
  void clear_size();
  ::PROTOBUF_NAMESPACE_ID::uint32 size() const;
  void set_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_size() const;
  void _internal_set_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:EventSocket.MessageHeader)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 config_;
  ::PROTOBUF_NAMESPACE_ID::uint32 size_;
  friend struct ::TableStruct_Message_2eproto;
};
// -------------------------------------------------------------------

class Message PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:EventSocket.Message) */ {
 public:
  inline Message() : Message(nullptr) {}
  virtual ~Message();

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Message& default_instance();

  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Message* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "EventSocket.Message";
  }
  protected:
  explicit Message(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Message_2eproto);
    return ::descriptor_table_Message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBodyFieldNumber = 5,
    kHeaderFieldNumber = 4,
  };
  // required bytes body = 5;
  bool has_body() const;
  private:
  bool _internal_has_body() const;
  public:
  void clear_body();
  const std::string& body() const;
  void set_body(const std::string& value);
  void set_body(std::string&& value);
  void set_body(const char* value);
  void set_body(const void* value, size_t size);
  std::string* mutable_body();
  std::string* release_body();
  void set_allocated_body(std::string* body);
  private:
  const std::string& _internal_body() const;
  void _internal_set_body(const std::string& value);
  std::string* _internal_mutable_body();
  public:

  // required .EventSocket.MessageHeader header = 4;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::EventSocket::MessageHeader& header() const;
  ::EventSocket::MessageHeader* release_header();
  ::EventSocket::MessageHeader* mutable_header();
  void set_allocated_header(::EventSocket::MessageHeader* header);
  private:
  const ::EventSocket::MessageHeader& _internal_header() const;
  ::EventSocket::MessageHeader* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::EventSocket::MessageHeader* header);
  ::EventSocket::MessageHeader* unsafe_arena_release_header();

  // @@protoc_insertion_point(class_scope:EventSocket.Message)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr body_;
  ::EventSocket::MessageHeader* header_;
  friend struct ::TableStruct_Message_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessageHeader

// required uint32 id = 1;
inline bool MessageHeader::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool MessageHeader::has_id() const {
  return _internal_has_id();
}
inline void MessageHeader::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MessageHeader::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MessageHeader::id() const {
  // @@protoc_insertion_point(field_get:EventSocket.MessageHeader.id)
  return _internal_id();
}
inline void MessageHeader::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  id_ = value;
}
inline void MessageHeader::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:EventSocket.MessageHeader.id)
}

// required uint32 config = 2;
inline bool MessageHeader::_internal_has_config() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool MessageHeader::has_config() const {
  return _internal_has_config();
}
inline void MessageHeader::clear_config() {
  config_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MessageHeader::_internal_config() const {
  return config_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MessageHeader::config() const {
  // @@protoc_insertion_point(field_get:EventSocket.MessageHeader.config)
  return _internal_config();
}
inline void MessageHeader::_internal_set_config(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  config_ = value;
}
inline void MessageHeader::set_config(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_config(value);
  // @@protoc_insertion_point(field_set:EventSocket.MessageHeader.config)
}

// required uint32 size = 3;
inline bool MessageHeader::_internal_has_size() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool MessageHeader::has_size() const {
  return _internal_has_size();
}
inline void MessageHeader::clear_size() {
  size_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MessageHeader::_internal_size() const {
  return size_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MessageHeader::size() const {
  // @@protoc_insertion_point(field_get:EventSocket.MessageHeader.size)
  return _internal_size();
}
inline void MessageHeader::_internal_set_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  size_ = value;
}
inline void MessageHeader::set_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_size(value);
  // @@protoc_insertion_point(field_set:EventSocket.MessageHeader.size)
}

// -------------------------------------------------------------------

// Message

// required .EventSocket.MessageHeader header = 4;
inline bool Message::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool Message::has_header() const {
  return _internal_has_header();
}
inline void Message::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::EventSocket::MessageHeader& Message::_internal_header() const {
  const ::EventSocket::MessageHeader* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::EventSocket::MessageHeader&>(
      ::EventSocket::_MessageHeader_default_instance_);
}
inline const ::EventSocket::MessageHeader& Message::header() const {
  // @@protoc_insertion_point(field_get:EventSocket.Message.header)
  return _internal_header();
}
inline void Message::unsafe_arena_set_allocated_header(
    ::EventSocket::MessageHeader* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:EventSocket.Message.header)
}
inline ::EventSocket::MessageHeader* Message::release_header() {
  _has_bits_[0] &= ~0x00000002u;
  ::EventSocket::MessageHeader* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::EventSocket::MessageHeader* Message::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:EventSocket.Message.header)
  _has_bits_[0] &= ~0x00000002u;
  ::EventSocket::MessageHeader* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::EventSocket::MessageHeader* Message::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000002u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::EventSocket::MessageHeader>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::EventSocket::MessageHeader* Message::mutable_header() {
  // @@protoc_insertion_point(field_mutable:EventSocket.Message.header)
  return _internal_mutable_header();
}
inline void Message::set_allocated_header(::EventSocket::MessageHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete header_;
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(header);
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:EventSocket.Message.header)
}

// required bytes body = 5;
inline bool Message::_internal_has_body() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Message::has_body() const {
  return _internal_has_body();
}
inline void Message::clear_body() {
  body_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Message::body() const {
  // @@protoc_insertion_point(field_get:EventSocket.Message.body)
  return _internal_body();
}
inline void Message::set_body(const std::string& value) {
  _internal_set_body(value);
  // @@protoc_insertion_point(field_set:EventSocket.Message.body)
}
inline std::string* Message::mutable_body() {
  // @@protoc_insertion_point(field_mutable:EventSocket.Message.body)
  return _internal_mutable_body();
}
inline const std::string& Message::_internal_body() const {
  return body_.Get();
}
inline void Message::_internal_set_body(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  body_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Message::set_body(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  body_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:EventSocket.Message.body)
}
inline void Message::set_body(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  body_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:EventSocket.Message.body)
}
inline void Message::set_body(const void* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  body_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:EventSocket.Message.body)
}
inline std::string* Message::_internal_mutable_body() {
  _has_bits_[0] |= 0x00000001u;
  return body_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Message::release_body() {
  // @@protoc_insertion_point(field_release:EventSocket.Message.body)
  if (!_internal_has_body()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return body_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Message::set_allocated_body(std::string* body) {
  if (body != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  body_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), body,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:EventSocket.Message.body)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace EventSocket

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Message_2eproto
