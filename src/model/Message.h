#pragma once
#include <string>
#include <User.h>

/**
 * @brief The Subject class of the proxy pattern.
 * Defines the common interface between the Proxy and the RealSubject.
 *
 */
class Message
{
public:
    Message(int id);

public:
    virtual std::string GetContent() = 0;
    virtual User *GetSender() = 0;

protected:
    int _id;
};

/**
 * @brief The RealSubject class of the proxy pattern.
 * Represents an actual object of the entity stored on the local machine.
 * Responsible for fetching the required data at instantiation.
 *
 */
class LocalMessage : public Message
{
public:
    LocalMessage(int id);

public:
    std::string GetContent();
    User *GetSender();

private:
    std::string _content;
    User *_sender;
};

/**
 * @brief The Proxy class of the proxy pattern.
 * Represents a placeholder for an object of the entity.
 * Implements lazy loading of remote data.
 * Responsible for instantiating a RealSubject when needed.
 *
 */
class RemoteMessage : public Message
{
public:
    RemoteMessage(int id);

public:
    std::string GetContent();
    User *GetSender();

private:
    void InitializeLocalMessage();

private:
    LocalMessage *_local_message;
};