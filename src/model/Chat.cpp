#include "Chat.h"

Chat::Chat(int id)
{
    _id = id;
}

LocalChat::LocalChat(int id)
    : Chat(id)
{
}

RemoteChat::RemoteChat(int id)
    : Chat(id)
{
    _local_chat = nullptr;
}

void RemoteChat::InititalizeLocalChat()
{
    if (_local_chat == nullptr)
        _local_chat = new LocalChat(_id);
}
