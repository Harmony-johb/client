#pragma once
#include <unordered_map>
#include <string>
#include <User.h>
#include <Server.h>
#include <Chat.h>

class User
{
public:
    User(int id);

public:
    virtual std::string GetUsername() = 0;
    virtual std::unordered_map<int, User *> GetFriends() = 0;

    virtual void SetUsername(std::string username) = 0;
    virtual void AddFriend(int id) = 0;
    virtual void RemoveFriend(int id) = 0;

protected:
    int _id;
};

class LocalUser : public User
{
public:
    LocalUser(int id);

public:
    std::string GetUsername();
    std::unordered_map<int, User *> GetFriends();

    void SetUsername(std::string username);
    void AddFriend(int id);
    void RemoveFriend(int id);

private:
    std::string _username;
    std::unordered_map<int, User *> _friends;
};

class RemoteUser : public User
{
public:
    RemoteUser(int id);

public:
    std::string GetUsername();
    std::unordered_map<int, User *> GetFriends();

    void SetUsername(std::string username);
    void AddFriend(int id);
    void RemoveFriend(int id);

private:
    void InitializeLocalUser();

private:
    LocalUser *_local_user;
};