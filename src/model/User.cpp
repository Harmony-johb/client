#include "User.h"

// TODO This is just a fake database. Make a real one
#include <tuple>
// {user_id, {username, {server_ids}, {chat_ids}, {friend_ids}}}
std::unordered_map<int, std::tuple<std::string, std::vector<int>, std::vector<int>, std::vector<int>>> user_table = {
    {1, {"jakob", {1}, {1}, {2, 3, 4, 5, 6, 7, 8}}},
    {2, {"hugo", {1}, {1}, {1, 3, 4}}},
    {3, {"anton", {1}, {2}, {1, 2}}},
    {4, {"wille", {1}, {2}, {1, 2}}},
    {5, {"kevin", {1}, {3}, {1}}},
    {6, {"leon", {1}, {3}, {1}}},
    {7, {"hofer", {1}, {4}, {1}}},
    {8, {"niclas", {1}, {4}, {1}}},
};

User::User(int id)
{
    _id = id;
}

LocalUser::LocalUser(int id)
    : User(id)
{
    // TODO Fill member variables from real database
    if (user_table.find(id) == user_table.end())
        return;
    auto user = user_table.at(id);
    _username = std::get<0>(user);
    for (int server_id : std::get<1>(user))
        _servers.insert({id, new RemoteServer(id)});
    for (int chat_id : std::get<2>(user))
        _chats.insert({id, new RemoteChat(id)});
    for (int friend_id : std::get<3>(user))
        _friends.insert({id, new RemoteUser(id)});
}

std::string LocalUser::GetUsername()
{
    return _username;
}

std::unordered_map<int, Server *> LocalUser::GetServers()
{
    return _servers;
}

std::unordered_map<int, Chat *> LocalUser::GetChats()
{
    return _chats;
}

std::unordered_map<int, User *> LocalUser::GetFriends()
{
    return _friends;
}

void LocalUser::SetUsername(std::string username)
{
    _username = username;
}

void LocalUser::AddServer(int id)
{
    _servers.insert({id, new RemoteServer(id)});
}

void LocalUser::RemoveServer(int id)
{
    _servers.erase(id);
}

void LocalUser::AddChat(int id)
{
    _chats.insert({id, new RemoteChat(id)});
}

void LocalUser::RemoveChat(int id)
{
    _chats.erase(id);
}

void LocalUser::AddFriend(int id)
{
    _friends.insert({id, new RemoteUser(id)});
}

void LocalUser::RemoveFriend(int id)
{
    _friends.erase(id);
}

RemoteUser::RemoteUser(int id)
    : User(id)
{
    _local_user = nullptr;
}

std::string RemoteUser::GetUsername()
{
    InitializeLocalUser();
    return _local_user->GetUsername();
}

std::unordered_map<int, Server *> RemoteUser::GetServers()
{
    InitializeLocalUser();
    return _local_user->GetServers();
}

std::unordered_map<int, Chat *> RemoteUser::GetChats()
{
    InitializeLocalUser();
    return _local_user->GetChats();
}

std::unordered_map<int, User *> RemoteUser::GetFriends()
{
    InitializeLocalUser();
    return _local_user->GetFriends();
}

void RemoteUser::SetUsername(std::string username)
{
    InitializeLocalUser();
    _local_user->SetUsername(username);
}

void RemoteUser::AddServer(int id)
{
    InitializeLocalUser();
    _local_user->AddServer(id);
}

void RemoteUser::RemoveServer(int id)
{
    InitializeLocalUser();
    _local_user->RemoveServer(id);
}

void RemoteUser::AddChat(int id)
{
    InitializeLocalUser();
    _local_user->AddChat(id);
}

void RemoteUser::RemoveChat(int id)
{
    InitializeLocalUser();
    _local_user->RemoveChat(id);
}

void RemoteUser::AddFriend(int id)
{
    InitializeLocalUser();
    _local_user->AddFriend(id);
}

void RemoteUser::RemoveFriend(int id)
{
    InitializeLocalUser();
    _local_user->RemoveFriend(id);
}

void RemoteUser::InitializeLocalUser()
{
    if (_local_user == nullptr)
        _local_user = new LocalUser(_id);
}
