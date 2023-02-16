// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: stream_service.proto

#include "stream_service.pb.h"
#include "stream_service.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace opencv {

static const char* StreamService_method_names[] = {
  "/opencv.StreamService/GetMat",
};

std::unique_ptr< StreamService::Stub> StreamService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StreamService::Stub> stub(new StreamService::Stub(channel, options));
  return stub;
}

StreamService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetMat_(StreamService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status StreamService::Stub::GetMat(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::opencv::OcvMat* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::opencv::OcvMat, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetMat_, context, request, response);
}

void StreamService::Stub::async::GetMat(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::opencv::OcvMat* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::opencv::OcvMat, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMat_, context, request, response, std::move(f));
}

void StreamService::Stub::async::GetMat(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::opencv::OcvMat* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMat_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::opencv::OcvMat>* StreamService::Stub::PrepareAsyncGetMatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::opencv::OcvMat, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetMat_, context, request);
}

::grpc::ClientAsyncResponseReader< ::opencv::OcvMat>* StreamService::Stub::AsyncGetMatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetMatRaw(context, request, cq);
  result->StartCall();
  return result;
}

StreamService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StreamService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StreamService::Service, ::google::protobuf::Empty, ::opencv::OcvMat, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](StreamService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::opencv::OcvMat* resp) {
               return service->GetMat(ctx, req, resp);
             }, this)));
}

StreamService::Service::~Service() {
}

::grpc::Status StreamService::Service::GetMat(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::opencv::OcvMat* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace opencv

