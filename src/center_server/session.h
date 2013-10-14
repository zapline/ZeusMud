#ifndef __SESSION_H__
#define __SESSION_H__

#include <common.h>
#include <network_common.h>
#include <protobuf.h>
#include <packet.h>
#include <tcp_connection.h>
#include "opcodes.h"
//#include <Poco/Data/Common.h>
//#include <Poco/Data/SQLite/Connector.h>

class Session
{
public:
    Session(const uint64& session_id)
        : _sessionId(session_id),
        _connection(nullptr)
    {
    }

    ~Session()
    {
    }

public:
    void set_connection_ptr(const TcpConnectionPtr& connection)
    {
        _connection = connection;
    }

    uint64_t session_id() const
    {
        return _sessionId;
    }

    template <typename T> void send_message(uint32 opcode, const T& message)
    {
        if (_connection != nullptr)
        {
            size_t messageSize = message.ByteSize();
            size_t packetSize = ServerPacket::HEADER_LENGTH + messageSize;

            ByteBuffer packet_buffer;
            packet_buffer << packetSize;
            packet_buffer << opcode;
            
            byte* message_data = new byte[messageSize];
            message.SerializeToArray(message_data, messageSize);
            packet_buffer.append(message_data, messageSize);

            _connection->writeAsync(packet_buffer.buffer(), packet_buffer.size());

            SAFE_DELETE_ARR(message_data);
        }
    }

public:
    void user_login_handler(const NetworkMessage& message)
    {
        std::cout << "enter login handler, session id = " << _sessionId << std::endl;

        Protocol::C2SLoginReq request;
        message.parse(request);

        printf("[User Login] -> (Username='%s', Password='%s')", request.email().c_str(), request.password().c_str());

        Protocol::S2CLoginRsp login_response;
        login_response.set_login_result(true);
        login_response.set_failed_reason("你是个逗比，所以不让你登录。");

        send_message<Protocol::S2CLoginRsp>(Opcodes::S2CLoginRsp, login_response);
    }

    void user_register_handler(const NetworkMessage& message)
    {
    
    }

private:
    uint64 _sessionId;
    TcpConnectionPtr _connection;
};

#endif