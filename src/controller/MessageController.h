#pragma once
#include <Message.h>

class MessageController
{
private:
    static Message *message;

public:
    static void Initialize();
};