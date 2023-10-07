#include "Server.h"

Server::Server(int id)
{
    _id = id;
}

LocalServer::LocalServer(int id)
    : Server(id)
{
}

RemoteServer::RemoteServer(int id)
    : Server(id)
{
    _local_server = nullptr;
}

void RemoteServer::InitializeLocalServer()
{
    if (_local_server == nullptr)
        _local_server = new LocalServer(_id);
}
