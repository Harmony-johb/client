#include "User.h"

// TODO This is just a fake database. Make a real one
#include <tuple>
std::unordered_map<int, std::tuple<std::string, std::vector<int>, std::vector<int>, std::vector<int>>> user_table = {
    {
        1,
        {
            "jakob",
            {1},
            {1},
            {2},
        },
    },
    {
        2,
        {
            "hugo",
            {1},
            {1},
            {1},
        },
    },
};

User::User(int id)
{
    _id = id;
}

LocalUser::LocalUser(int id)
    : User(id)
{
    // TODO Fill member variables from real database
    // if (user_table.find(id) == user_table.end())
    //     return;
    // auto user = user_table.at(id);
    // _username = std::get<0>(user);
    // for (int server_id : std::get<1>(user))
    //     _servers.insert({id, Server()});
    // for (int chat_id : std::get<2>(user))
    //     _chats.insert({id, Chat()});
    // for (int friend_id : std::get<3>(user))
    //     _friends.insert({id, User(id)});
}

std::string LocalUser::GetUsername()
{
    return _username;
}

std::unordered_map<int, User *> LocalUser::GetFriends()
{
    return _friends;
}

void LocalUser::SetUsername(std::string username)
{
    _username = username;
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
