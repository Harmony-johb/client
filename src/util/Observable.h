#pragma once
#include <cstddef>
#include <unordered_map>

using ObserverID = std::size_t;

template <typename... callback_arg_types>
class Observable
{
public:
    using CallbackFunction = void (*)(callback_arg_types...);

private:
    std::unordered_map<ObserverID, CallbackFunction> _observers;

public:
    ObserverID AttachObserver(CallbackFunction callback)
    {
        ObserverID id = getID(callback);
        _observers.emplace(id, callback);
        return id;
    }
    bool DetachObserver(ObserverID &id)
    {
        const auto it = _observers.find(id);
        if (it == _observers.end())
            return false;
        _observers.erase(it);
        id = ObserverID();
        return true;
    }
    void NotifyAllObservers(callback_arg_types... args)
    {
        for (const auto &observer : _observers)
            observer.second(args...);
    }

private:
    ObserverID getID(void (*callback)(callback_arg_types...))
    {
        typedef void (*func_type)(callback_arg_types...);
        static std::hash<func_type> hash;
        const ObserverID id = hash(callback);
        return id;
    }
};