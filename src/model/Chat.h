#pragma once
#include <vector>
#include <User.h>
#include <Message.h>

class Chat
{
private:
    int id;
    std::vector<User> users;
    std::vector<Message> messages;
};