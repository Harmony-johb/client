#pragma once
#include <unordered_map>
#include <Chat.h>
#include <Server.h>
#include <Message.h>
#include <User.h>

// TODO in the future, this class should be responsible for clearing cached data when a threshhold is reached
class SessionState
{
public:
    static SessionState *Instance();

protected:
    SessionState();

private:
    static SessionState *_instance;

public:
    User *GetActiveUser();

private:
    User *_active_user;
};