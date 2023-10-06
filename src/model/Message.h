#pragma once

class Message
{
public:
    Message(int id);

protected:
    int _id;
};

class LocalMessage : public Message
{
public:
    LocalMessage(int id);
};

class RemoteMessage : public Message
{
public:
    RemoteMessage(int id);
};