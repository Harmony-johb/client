#pragma once
#include <Chat.h>

class ChatController
{
private:
    static Chat *chat;

public:
    static void Initialize();
};