// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: stream_service.proto
#ifndef GRPC_stream_5fservice_2eproto__INCLUDED
#define GRPC_stream_5fservice_2eproto__INCLUDED

#include "stream_service.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace gRPC_stream {

class StreamService final {
 public:
  static constexpr char const* service_full_name() {
    return "gRPC_stream.StreamService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::gRPC_stream::GetMatResponse>> GetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::gRPC_stream::GetMatResponse>>(GetMatRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::gRPC_stream::GetMatResponse>> AsyncGetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::gRPC_stream::GetMatResponse>>(AsyncGetMatRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::gRPC_stream::GetMatResponse>> PrepareAsyncGetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::gRPC_stream::GetMatResponse>>(PrepareAsyncGetMatRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void GetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest* request, ::grpc::ClientReadReactor< ::gRPC_stream::GetMatResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderInterface< ::gRPC_stream::GetMatResponse>* GetMatRaw(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::gRPC_stream::GetMatResponse>* AsyncGetMatRaw(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::gRPC_stream::GetMatResponse>* PrepareAsyncGetMatRaw(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReader< ::gRPC_stream::GetMatResponse>> GetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::gRPC_stream::GetMatResponse>>(GetMatRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::gRPC_stream::GetMatResponse>> AsyncGetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::gRPC_stream::GetMatResponse>>(AsyncGetMatRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::gRPC_stream::GetMatResponse>> PrepareAsyncGetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::gRPC_stream::GetMatResponse>>(PrepareAsyncGetMatRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetMat(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest* request, ::grpc::ClientReadReactor< ::gRPC_stream::GetMatResponse>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReader< ::gRPC_stream::GetMatResponse>* GetMatRaw(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request) override;
    ::grpc::ClientAsyncReader< ::gRPC_stream::GetMatResponse>* AsyncGetMatRaw(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::gRPC_stream::GetMatResponse>* PrepareAsyncGetMatRaw(::grpc::ClientContext* context, const ::gRPC_stream::GetMatRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetMat_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetMat(::grpc::ServerContext* context, const ::gRPC_stream::GetMatRequest* request, ::grpc::ServerWriter< ::gRPC_stream::GetMatResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetMat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetMat() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetMat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMat(::grpc::ServerContext* /*context*/, const ::gRPC_stream::GetMatRequest* /*request*/, ::grpc::ServerWriter< ::gRPC_stream::GetMatResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetMat(::grpc::ServerContext* context, ::gRPC_stream::GetMatRequest* request, ::grpc::ServerAsyncWriter< ::gRPC_stream::GetMatResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetMat<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetMat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetMat() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::gRPC_stream::GetMatRequest, ::gRPC_stream::GetMatResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::gRPC_stream::GetMatRequest* request) { return this->GetMat(context, request); }));
    }
    ~WithCallbackMethod_GetMat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMat(::grpc::ServerContext* /*context*/, const ::gRPC_stream::GetMatRequest* /*request*/, ::grpc::ServerWriter< ::gRPC_stream::GetMatResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::gRPC_stream::GetMatResponse>* GetMat(
      ::grpc::CallbackServerContext* /*context*/, const ::gRPC_stream::GetMatRequest* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetMat<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetMat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetMat() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetMat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMat(::grpc::ServerContext* /*context*/, const ::gRPC_stream::GetMatRequest* /*request*/, ::grpc::ServerWriter< ::gRPC_stream::GetMatResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetMat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetMat() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetMat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMat(::grpc::ServerContext* /*context*/, const ::gRPC_stream::GetMatRequest* /*request*/, ::grpc::ServerWriter< ::gRPC_stream::GetMatResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetMat(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetMat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetMat() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->GetMat(context, request); }));
    }
    ~WithRawCallbackMethod_GetMat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMat(::grpc::ServerContext* /*context*/, const ::gRPC_stream::GetMatRequest* /*request*/, ::grpc::ServerWriter< ::gRPC_stream::GetMatResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* GetMat(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_GetMat : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_GetMat() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::gRPC_stream::GetMatRequest, ::gRPC_stream::GetMatResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::gRPC_stream::GetMatRequest, ::gRPC_stream::GetMatResponse>* streamer) {
                       return this->StreamedGetMat(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_GetMat() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetMat(::grpc::ServerContext* /*context*/, const ::gRPC_stream::GetMatRequest* /*request*/, ::grpc::ServerWriter< ::gRPC_stream::GetMatResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetMat(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::gRPC_stream::GetMatRequest,::gRPC_stream::GetMatResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_GetMat<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_GetMat<Service > StreamedService;
};

}  // namespace gRPC_stream


#endif  // GRPC_stream_5fservice_2eproto__INCLUDED
