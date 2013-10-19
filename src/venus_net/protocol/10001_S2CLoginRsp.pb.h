// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 10001_S2CLoginRsp.proto

#ifndef PROTOBUF_10001_5fS2CLoginRsp_2eproto__INCLUDED
#define PROTOBUF_10001_5fS2CLoginRsp_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_10001_5fS2CLoginRsp_2eproto();
void protobuf_AssignDesc_10001_5fS2CLoginRsp_2eproto();
void protobuf_ShutdownFile_10001_5fS2CLoginRsp_2eproto();

class S2CLoginRsp;

// ===================================================================

class S2CLoginRsp : public ::google::protobuf::Message {
 public:
  S2CLoginRsp();
  virtual ~S2CLoginRsp();

  S2CLoginRsp(const S2CLoginRsp& from);

  inline S2CLoginRsp& operator=(const S2CLoginRsp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2CLoginRsp& default_instance();

  void Swap(S2CLoginRsp* other);

  // implements Message ----------------------------------------------

  S2CLoginRsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2CLoginRsp& from);
  void MergeFrom(const S2CLoginRsp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool login_result = 1;
  inline bool has_login_result() const;
  inline void clear_login_result();
  static const int kLoginResultFieldNumber = 1;
  inline bool login_result() const;
  inline void set_login_result(bool value);

  // optional bytes failed_reason = 2;
  inline bool has_failed_reason() const;
  inline void clear_failed_reason();
  static const int kFailedReasonFieldNumber = 2;
  inline const ::std::string& failed_reason() const;
  inline void set_failed_reason(const ::std::string& value);
  inline void set_failed_reason(const char* value);
  inline void set_failed_reason(const void* value, size_t size);
  inline ::std::string* mutable_failed_reason();
  inline ::std::string* release_failed_reason();
  inline void set_allocated_failed_reason(::std::string* failed_reason);

  // @@protoc_insertion_point(class_scope:Protocol.S2CLoginRsp)
 private:
  inline void set_has_login_result();
  inline void clear_has_login_result();
  inline void set_has_failed_reason();
  inline void clear_has_failed_reason();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* failed_reason_;
  bool login_result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_10001_5fS2CLoginRsp_2eproto();
  friend void protobuf_AssignDesc_10001_5fS2CLoginRsp_2eproto();
  friend void protobuf_ShutdownFile_10001_5fS2CLoginRsp_2eproto();

  void InitAsDefaultInstance();
  static S2CLoginRsp* default_instance_;
};
// ===================================================================


// ===================================================================

// S2CLoginRsp

// required bool login_result = 1;
inline bool S2CLoginRsp::has_login_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2CLoginRsp::set_has_login_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2CLoginRsp::clear_has_login_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2CLoginRsp::clear_login_result() {
  login_result_ = false;
  clear_has_login_result();
}
inline bool S2CLoginRsp::login_result() const {
  return login_result_;
}
inline void S2CLoginRsp::set_login_result(bool value) {
  set_has_login_result();
  login_result_ = value;
}

// optional bytes failed_reason = 2;
inline bool S2CLoginRsp::has_failed_reason() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S2CLoginRsp::set_has_failed_reason() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S2CLoginRsp::clear_has_failed_reason() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S2CLoginRsp::clear_failed_reason() {
  if (failed_reason_ != &::google::protobuf::internal::kEmptyString) {
    failed_reason_->clear();
  }
  clear_has_failed_reason();
}
inline const ::std::string& S2CLoginRsp::failed_reason() const {
  return *failed_reason_;
}
inline void S2CLoginRsp::set_failed_reason(const ::std::string& value) {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  failed_reason_->assign(value);
}
inline void S2CLoginRsp::set_failed_reason(const char* value) {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  failed_reason_->assign(value);
}
inline void S2CLoginRsp::set_failed_reason(const void* value, size_t size) {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  failed_reason_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* S2CLoginRsp::mutable_failed_reason() {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  return failed_reason_;
}
inline ::std::string* S2CLoginRsp::release_failed_reason() {
  clear_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = failed_reason_;
    failed_reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void S2CLoginRsp::set_allocated_failed_reason(::std::string* failed_reason) {
  if (failed_reason_ != &::google::protobuf::internal::kEmptyString) {
    delete failed_reason_;
  }
  if (failed_reason) {
    set_has_failed_reason();
    failed_reason_ = failed_reason;
  } else {
    clear_has_failed_reason();
    failed_reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_10001_5fS2CLoginRsp_2eproto__INCLUDED
