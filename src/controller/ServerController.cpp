#include "ServerController.h"

Server *ServerController::server = nullptr;

void ServerController::Initialize()
{
    ServerController::server = new Server();
}