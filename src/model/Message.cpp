#include "Message.h"

Message::Message(int id)
{
    _id = id;
}

LocalMessage::LocalMessage(int id)
    : Message(id)
{
}

RemoteMessage::RemoteMessage(int id)
    : Message(id)
{
}
