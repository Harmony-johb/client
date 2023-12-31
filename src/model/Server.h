#pragma once

/**
 * @brief The Subject class of the proxy pattern.
 * Defines the common interface between the Proxy and the RealSubject.
 *
 */
class Server
{
public:
    Server(int id);

public:
protected:
    int _id;
};

/**
 * @brief The RealSubject class of the proxy pattern.
 * Represents an actual object of the entity stored on the local machine.
 * Responsible for fetching the required data at instantiation.
 *
 */
class LocalServer : public Server
{
public:
    LocalServer(int id);
};

/**
 * @brief The Proxy class of the proxy pattern.
 * Represents a placeholder for an object of the entity.
 * Implements lazy loading of remote data.
 * Responsible for instantiating a RealSubject when needed.
 *
 */
class RemoteServer : public Server
{
public:
    RemoteServer(int id);

private:
    void InitializeLocalServer();

private:
    LocalServer *_local_server;
};