#include "Message.h"

Message::Message(int id)
{
    _id = id;
}

LocalMessage::LocalMessage(int id)
    : Message(id)
{
}

std::string LocalMessage::GetContent()
{
    return _content;
}

User *LocalMessage::GetSender()
{
    return _sender;
}

RemoteMessage::RemoteMessage(int id)
    : Message(id)
{
}

std::string RemoteMessage::GetContent()
{
    InitializeLocalMessage();
    return _local_message->GetContent();
}

User *RemoteMessage::GetSender()
{
    InitializeLocalMessage();
    return _local_message->GetSender();
}

void RemoteMessage::InitializeLocalMessage()
{
    if (_local_message == nullptr)
        _local_message = new LocalMessage(_id);
}
