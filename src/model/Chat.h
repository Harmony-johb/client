#pragma once
#include <string>
#include <unordered_map>
#include <Message.h>

/**
 * @brief The Subject class of the proxy pattern.
 * Defines the common interface between the Proxy and the RealSubject.
 *
 */
class Chat
{
public:
    Chat(int id);

public:
    virtual std::string GetChatname() = 0;
    virtual std::unordered_map<int, Message *> GetMessages(int from, int to) = 0;

    virtual void SetChatname(std::string chatname) = 0;
    virtual void AddMessage(int id) = 0;

protected:
    int _id;
};

/**
 * @brief The RealSubject class of the proxy pattern.
 * Represents an actual object of the entity stored on the local machine.
 * Responsible for fetching the required data at instantiation.
 *
 */
class LocalChat : public Chat
{
public:
    LocalChat(int id);

public:
    std::string GetChatname();
    std::unordered_map<int, Message *> GetMessages(int from, int to);

    void SetChatname(std::string chatname);
    void AddMessage(int id);

private:
    std::string _chatname;
    std::unordered_map<int, Message *> _messages;
};

/**
 * @brief The Proxy class of the proxy pattern.
 * Represents a placeholder for an object of the entity.
 * Implements lazy loading of remote data.
 * Responsible for instantiating a RealSubject when needed.
 *
 */
class RemoteChat : public Chat
{
public:
    RemoteChat(int id);

public:
    std::string GetChatname();
    std::unordered_map<int, Message *> GetMessages(int from, int to);

    void SetChatname(std::string chatname);
    void AddMessage(int id);

private:
    void InititalizeLocalChat();

private:
    LocalChat *_local_chat;
};