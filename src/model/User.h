#pragma once
#include <unordered_map>
#include <string>
#include <User.h>
#include <Server.h>
#include <Chat.h>

/**
 * @brief The Subject class of the proxy pattern.
 * Defines the common interface between the Proxy and the RealSubject.
 *
 */
class User
{
public:
    User(int id);

public:
    virtual std::string GetUsername() = 0;
    virtual std::unordered_map<int, Server *> GetServers() = 0;
    virtual std::unordered_map<int, Chat *> GetChats() = 0;
    virtual std::unordered_map<int, User *> GetFriends() = 0;

    virtual void SetUsername(std::string username) = 0;
    virtual void AddServer(int id) = 0;
    virtual void RemoveServer(int id) = 0;
    virtual void AddChat(int id) = 0;
    virtual void RemoveChat(int id) = 0;
    virtual void AddFriend(int id) = 0;
    virtual void RemoveFriend(int id) = 0;

protected:
    int _id;
};

/**
 * @brief The RealSubject class of the proxy pattern.
 * Represents an actual object of the entity stored on the local machine.
 * Responsible for fetching the required data at instantiation.
 *
 */
class LocalUser : public User
{
public:
    LocalUser(int id);

public:
    std::string GetUsername();
    std::unordered_map<int, Server *> GetServers();
    std::unordered_map<int, Chat *> GetChats();
    std::unordered_map<int, User *> GetFriends();

    void SetUsername(std::string username);
    void AddServer(int id);
    void RemoveServer(int id);
    void AddChat(int id);
    void RemoveChat(int id);
    void AddFriend(int id);
    void RemoveFriend(int id);

private:
    std::string _username;
    std::unordered_map<int, Server *> _servers;
    std::unordered_map<int, Chat *> _chats;
    std::unordered_map<int, User *> _friends;
};

/**
 * @brief The Proxy class of the proxy pattern.
 * Represents a placeholder for an object of the entity.
 * Implements lazy loading of remote data.
 * Responsible for instantiating a RealSubject when needed.
 *
 */
class RemoteUser : public User
{
public:
    RemoteUser(int id);

public:
    std::string GetUsername();
    std::unordered_map<int, Server *> GetServers();
    std::unordered_map<int, Chat *> GetChats();
    std::unordered_map<int, User *> GetFriends();

    void SetUsername(std::string username);
    void AddServer(int id);
    void RemoveServer(int id);
    void AddChat(int id);
    void RemoveChat(int id);
    void AddFriend(int id);
    void RemoveFriend(int id);

private:
    void InitializeLocalUser();

private:
    LocalUser *_local_user;
};