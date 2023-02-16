// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stream_service.proto

#include "stream_service.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace gRPC_stream {
PROTOBUF_CONSTEXPR OcvMat::OcvMat(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.mat_data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.rows_)*/0
  , /*decltype(_impl_.cols_)*/0
  , /*decltype(_impl_.elt_type_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct OcvMatDefaultTypeInternal {
  PROTOBUF_CONSTEXPR OcvMatDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~OcvMatDefaultTypeInternal() {}
  union {
    OcvMat _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 OcvMatDefaultTypeInternal _OcvMat_default_instance_;
PROTOBUF_CONSTEXPR GetMatRequest::GetMatRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.rows_)*/0
  , /*decltype(_impl_.cols_)*/0
  , /*decltype(_impl_.elt_type_)*/0
  , /*decltype(_impl_.value_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetMatRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetMatRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetMatRequestDefaultTypeInternal() {}
  union {
    GetMatRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetMatRequestDefaultTypeInternal _GetMatRequest_default_instance_;
PROTOBUF_CONSTEXPR GetMatResponse::GetMatResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.mat_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetMatResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetMatResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetMatResponseDefaultTypeInternal() {}
  union {
    GetMatResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetMatResponseDefaultTypeInternal _GetMatResponse_default_instance_;
}  // namespace gRPC_stream
static ::_pb::Metadata file_level_metadata_stream_5fservice_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_stream_5fservice_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_stream_5fservice_2eproto = nullptr;

const uint32_t TableStruct_stream_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::OcvMat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::OcvMat, _impl_.rows_),
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::OcvMat, _impl_.cols_),
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::OcvMat, _impl_.elt_type_),
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::OcvMat, _impl_.mat_data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::GetMatRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::GetMatRequest, _impl_.rows_),
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::GetMatRequest, _impl_.cols_),
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::GetMatRequest, _impl_.elt_type_),
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::GetMatRequest, _impl_.value_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::GetMatResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::gRPC_stream::GetMatResponse, _impl_.mat_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::gRPC_stream::OcvMat)},
  { 10, -1, -1, sizeof(::gRPC_stream::GetMatRequest)},
  { 20, -1, -1, sizeof(::gRPC_stream::GetMatResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::gRPC_stream::_OcvMat_default_instance_._instance,
  &::gRPC_stream::_GetMatRequest_default_instance_._instance,
  &::gRPC_stream::_GetMatResponse_default_instance_._instance,
};

const char descriptor_table_protodef_stream_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024stream_service.proto\022\013gRPC_stream\"H\n\006O"
  "cvMat\022\014\n\004rows\030\001 \001(\005\022\014\n\004cols\030\002 \001(\005\022\020\n\010elt"
  "_type\030\003 \001(\005\022\020\n\010mat_data\030\004 \001(\014\"L\n\rGetMatR"
  "equest\022\014\n\004rows\030\001 \001(\005\022\014\n\004cols\030\002 \001(\005\022\020\n\010el"
  "t_type\030\003 \001(\005\022\r\n\005value\030\004 \001(\005\"2\n\016GetMatRes"
  "ponse\022 \n\003mat\030\001 \001(\0132\023.gRPC_stream.OcvMat2"
  "V\n\rStreamService\022E\n\006GetMat\022\032.gRPC_stream"
  ".GetMatRequest\032\033.gRPC_stream.GetMatRespo"
  "nse\"\0000\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_stream_5fservice_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_stream_5fservice_2eproto = {
    false, false, 335, descriptor_table_protodef_stream_5fservice_2eproto,
    "stream_service.proto",
    &descriptor_table_stream_5fservice_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_stream_5fservice_2eproto::offsets,
    file_level_metadata_stream_5fservice_2eproto, file_level_enum_descriptors_stream_5fservice_2eproto,
    file_level_service_descriptors_stream_5fservice_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_stream_5fservice_2eproto_getter() {
  return &descriptor_table_stream_5fservice_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_stream_5fservice_2eproto(&descriptor_table_stream_5fservice_2eproto);
namespace gRPC_stream {

// ===================================================================

class OcvMat::_Internal {
 public:
};

OcvMat::OcvMat(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:gRPC_stream.OcvMat)
}
OcvMat::OcvMat(const OcvMat& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  OcvMat* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.mat_data_){}
    , decltype(_impl_.rows_){}
    , decltype(_impl_.cols_){}
    , decltype(_impl_.elt_type_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.mat_data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.mat_data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_mat_data().empty()) {
    _this->_impl_.mat_data_.Set(from._internal_mat_data(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.rows_, &from._impl_.rows_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.elt_type_) -
    reinterpret_cast<char*>(&_impl_.rows_)) + sizeof(_impl_.elt_type_));
  // @@protoc_insertion_point(copy_constructor:gRPC_stream.OcvMat)
}

inline void OcvMat::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.mat_data_){}
    , decltype(_impl_.rows_){0}
    , decltype(_impl_.cols_){0}
    , decltype(_impl_.elt_type_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.mat_data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.mat_data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

OcvMat::~OcvMat() {
  // @@protoc_insertion_point(destructor:gRPC_stream.OcvMat)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void OcvMat::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.mat_data_.Destroy();
}

void OcvMat::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void OcvMat::Clear() {
// @@protoc_insertion_point(message_clear_start:gRPC_stream.OcvMat)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.mat_data_.ClearToEmpty();
  ::memset(&_impl_.rows_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.elt_type_) -
      reinterpret_cast<char*>(&_impl_.rows_)) + sizeof(_impl_.elt_type_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* OcvMat::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 rows = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.rows_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 cols = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.cols_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 elt_type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.elt_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes mat_data = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_mat_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* OcvMat::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gRPC_stream.OcvMat)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 rows = 1;
  if (this->_internal_rows() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_rows(), target);
  }

  // int32 cols = 2;
  if (this->_internal_cols() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_cols(), target);
  }

  // int32 elt_type = 3;
  if (this->_internal_elt_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_elt_type(), target);
  }

  // bytes mat_data = 4;
  if (!this->_internal_mat_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_mat_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gRPC_stream.OcvMat)
  return target;
}

size_t OcvMat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gRPC_stream.OcvMat)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes mat_data = 4;
  if (!this->_internal_mat_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_mat_data());
  }

  // int32 rows = 1;
  if (this->_internal_rows() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_rows());
  }

  // int32 cols = 2;
  if (this->_internal_cols() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_cols());
  }

  // int32 elt_type = 3;
  if (this->_internal_elt_type() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_elt_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData OcvMat::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    OcvMat::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*OcvMat::GetClassData() const { return &_class_data_; }


void OcvMat::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<OcvMat*>(&to_msg);
  auto& from = static_cast<const OcvMat&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:gRPC_stream.OcvMat)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_mat_data().empty()) {
    _this->_internal_set_mat_data(from._internal_mat_data());
  }
  if (from._internal_rows() != 0) {
    _this->_internal_set_rows(from._internal_rows());
  }
  if (from._internal_cols() != 0) {
    _this->_internal_set_cols(from._internal_cols());
  }
  if (from._internal_elt_type() != 0) {
    _this->_internal_set_elt_type(from._internal_elt_type());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void OcvMat::CopyFrom(const OcvMat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gRPC_stream.OcvMat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OcvMat::IsInitialized() const {
  return true;
}

void OcvMat::InternalSwap(OcvMat* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.mat_data_, lhs_arena,
      &other->_impl_.mat_data_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(OcvMat, _impl_.elt_type_)
      + sizeof(OcvMat::_impl_.elt_type_)
      - PROTOBUF_FIELD_OFFSET(OcvMat, _impl_.rows_)>(
          reinterpret_cast<char*>(&_impl_.rows_),
          reinterpret_cast<char*>(&other->_impl_.rows_));
}

::PROTOBUF_NAMESPACE_ID::Metadata OcvMat::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_stream_5fservice_2eproto_getter, &descriptor_table_stream_5fservice_2eproto_once,
      file_level_metadata_stream_5fservice_2eproto[0]);
}

// ===================================================================

class GetMatRequest::_Internal {
 public:
};

GetMatRequest::GetMatRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:gRPC_stream.GetMatRequest)
}
GetMatRequest::GetMatRequest(const GetMatRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetMatRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.rows_){}
    , decltype(_impl_.cols_){}
    , decltype(_impl_.elt_type_){}
    , decltype(_impl_.value_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.rows_, &from._impl_.rows_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.value_) -
    reinterpret_cast<char*>(&_impl_.rows_)) + sizeof(_impl_.value_));
  // @@protoc_insertion_point(copy_constructor:gRPC_stream.GetMatRequest)
}

inline void GetMatRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.rows_){0}
    , decltype(_impl_.cols_){0}
    , decltype(_impl_.elt_type_){0}
    , decltype(_impl_.value_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GetMatRequest::~GetMatRequest() {
  // @@protoc_insertion_point(destructor:gRPC_stream.GetMatRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetMatRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void GetMatRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetMatRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:gRPC_stream.GetMatRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.rows_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.value_) -
      reinterpret_cast<char*>(&_impl_.rows_)) + sizeof(_impl_.value_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetMatRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 rows = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.rows_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 cols = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.cols_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 elt_type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.elt_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 value = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetMatRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gRPC_stream.GetMatRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 rows = 1;
  if (this->_internal_rows() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_rows(), target);
  }

  // int32 cols = 2;
  if (this->_internal_cols() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_cols(), target);
  }

  // int32 elt_type = 3;
  if (this->_internal_elt_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_elt_type(), target);
  }

  // int32 value = 4;
  if (this->_internal_value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gRPC_stream.GetMatRequest)
  return target;
}

size_t GetMatRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gRPC_stream.GetMatRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 rows = 1;
  if (this->_internal_rows() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_rows());
  }

  // int32 cols = 2;
  if (this->_internal_cols() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_cols());
  }

  // int32 elt_type = 3;
  if (this->_internal_elt_type() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_elt_type());
  }

  // int32 value = 4;
  if (this->_internal_value() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetMatRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetMatRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetMatRequest::GetClassData() const { return &_class_data_; }


void GetMatRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetMatRequest*>(&to_msg);
  auto& from = static_cast<const GetMatRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:gRPC_stream.GetMatRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_rows() != 0) {
    _this->_internal_set_rows(from._internal_rows());
  }
  if (from._internal_cols() != 0) {
    _this->_internal_set_cols(from._internal_cols());
  }
  if (from._internal_elt_type() != 0) {
    _this->_internal_set_elt_type(from._internal_elt_type());
  }
  if (from._internal_value() != 0) {
    _this->_internal_set_value(from._internal_value());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetMatRequest::CopyFrom(const GetMatRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gRPC_stream.GetMatRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetMatRequest::IsInitialized() const {
  return true;
}

void GetMatRequest::InternalSwap(GetMatRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GetMatRequest, _impl_.value_)
      + sizeof(GetMatRequest::_impl_.value_)
      - PROTOBUF_FIELD_OFFSET(GetMatRequest, _impl_.rows_)>(
          reinterpret_cast<char*>(&_impl_.rows_),
          reinterpret_cast<char*>(&other->_impl_.rows_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GetMatRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_stream_5fservice_2eproto_getter, &descriptor_table_stream_5fservice_2eproto_once,
      file_level_metadata_stream_5fservice_2eproto[1]);
}

// ===================================================================

class GetMatResponse::_Internal {
 public:
  static const ::gRPC_stream::OcvMat& mat(const GetMatResponse* msg);
};

const ::gRPC_stream::OcvMat&
GetMatResponse::_Internal::mat(const GetMatResponse* msg) {
  return *msg->_impl_.mat_;
}
GetMatResponse::GetMatResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:gRPC_stream.GetMatResponse)
}
GetMatResponse::GetMatResponse(const GetMatResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetMatResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.mat_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_mat()) {
    _this->_impl_.mat_ = new ::gRPC_stream::OcvMat(*from._impl_.mat_);
  }
  // @@protoc_insertion_point(copy_constructor:gRPC_stream.GetMatResponse)
}

inline void GetMatResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.mat_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GetMatResponse::~GetMatResponse() {
  // @@protoc_insertion_point(destructor:gRPC_stream.GetMatResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetMatResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.mat_;
}

void GetMatResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetMatResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:gRPC_stream.GetMatResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.mat_ != nullptr) {
    delete _impl_.mat_;
  }
  _impl_.mat_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetMatResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .gRPC_stream.OcvMat mat = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_mat(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetMatResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gRPC_stream.GetMatResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .gRPC_stream.OcvMat mat = 1;
  if (this->_internal_has_mat()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::mat(this),
        _Internal::mat(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gRPC_stream.GetMatResponse)
  return target;
}

size_t GetMatResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gRPC_stream.GetMatResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .gRPC_stream.OcvMat mat = 1;
  if (this->_internal_has_mat()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.mat_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetMatResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetMatResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetMatResponse::GetClassData() const { return &_class_data_; }


void GetMatResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetMatResponse*>(&to_msg);
  auto& from = static_cast<const GetMatResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:gRPC_stream.GetMatResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_mat()) {
    _this->_internal_mutable_mat()->::gRPC_stream::OcvMat::MergeFrom(
        from._internal_mat());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetMatResponse::CopyFrom(const GetMatResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gRPC_stream.GetMatResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetMatResponse::IsInitialized() const {
  return true;
}

void GetMatResponse::InternalSwap(GetMatResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.mat_, other->_impl_.mat_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetMatResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_stream_5fservice_2eproto_getter, &descriptor_table_stream_5fservice_2eproto_once,
      file_level_metadata_stream_5fservice_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace gRPC_stream
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gRPC_stream::OcvMat*
Arena::CreateMaybeMessage< ::gRPC_stream::OcvMat >(Arena* arena) {
  return Arena::CreateMessageInternal< ::gRPC_stream::OcvMat >(arena);
}
template<> PROTOBUF_NOINLINE ::gRPC_stream::GetMatRequest*
Arena::CreateMaybeMessage< ::gRPC_stream::GetMatRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::gRPC_stream::GetMatRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::gRPC_stream::GetMatResponse*
Arena::CreateMaybeMessage< ::gRPC_stream::GetMatResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::gRPC_stream::GetMatResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
