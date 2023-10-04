#pragma once
#include <Server.h>

class ServerController
{
private:
    static Server *server;

public:
    static void Initialize();
};