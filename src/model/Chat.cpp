#include "Chat.h"
#include <FakeDatabase.h>

Chat::Chat(int id)
{
    _id = id;
}

LocalChat::LocalChat(int id)
    : Chat(id)
{
    // TODO Fill member variables from real database
    if (FakeDatabase::chat_table.find(id) == FakeDatabase::chat_table.end())
        return;
    auto chat = FakeDatabase::chat_table.at(id);
    _chatname = std::get<0>(chat);
    for (int message_id : std::get<1>(chat))
        _messages.insert({message_id, new RemoteMessage(message_id)});
}

std::string LocalChat::GetChatname()
{
    return _chatname;
}

// TODO Get messages in chunks
std::unordered_map<int, Message *> LocalChat::GetMessages(int from, int to)
{
    return _messages;
}

void LocalChat::SetChatname(std::string chatname)
{
    _chatname = chatname;
}

void LocalChat::AddMessage(int id)
{
    _messages.insert({id, new RemoteMessage(id)});
}

RemoteChat::RemoteChat(int id)
    : Chat(id)
{
    _local_chat = nullptr;
}

std::string RemoteChat::GetChatname()
{
    InititalizeLocalChat();
    return _local_chat->GetChatname();
}

std::unordered_map<int, Message *> RemoteChat::GetMessages(int from, int to)
{
    InititalizeLocalChat();
    return _local_chat->GetMessages(from, to);
}

void RemoteChat::SetChatname(std::string chatname)
{
    InititalizeLocalChat();
    _local_chat->SetChatname(chatname);
}

void RemoteChat::AddMessage(int id)
{
    InititalizeLocalChat();
    _local_chat->AddMessage(id);
}

void RemoteChat::InititalizeLocalChat()
{
    if (_local_chat == nullptr)
        _local_chat = new LocalChat(_id);
}
