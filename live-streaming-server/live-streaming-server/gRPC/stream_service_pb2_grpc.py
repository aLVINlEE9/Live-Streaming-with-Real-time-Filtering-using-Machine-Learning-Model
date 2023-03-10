# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import os
import sys
import grpc
sys.path.append(os.path.dirname(os.path.abspath(os.path.dirname(__file__))))
from gRPC import stream_service_pb2 as stream__service__pb2

class StreamServiceStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.GetMat = channel.unary_stream(
                '/gRPC_stream.StreamService/GetMat',
                request_serializer=stream__service__pb2.GetMatRequest.SerializeToString,
                response_deserializer=stream__service__pb2.GetMatResponse.FromString,
                )


class StreamServiceServicer(object):
    """Missing associated documentation comment in .proto file."""

    def GetMat(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_StreamServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'GetMat': grpc.unary_stream_rpc_method_handler(
                    servicer.GetMat,
                    request_deserializer=stream__service__pb2.GetMatRequest.FromString,
                    response_serializer=stream__service__pb2.GetMatResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'gRPC_stream.StreamService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class StreamService(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def GetMat(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_stream(request, target, '/gRPC_stream.StreamService/GetMat',
            stream__service__pb2.GetMatRequest.SerializeToString,
            stream__service__pb2.GetMatResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
