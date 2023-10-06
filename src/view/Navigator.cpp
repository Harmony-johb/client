#include "Navigator.h"
#include <stdexcept>

Navigator::Navigator()
{
    _composites = {};
    _active_composite = {};
}

Navigator::~Navigator()
{
}

Navigator &Navigator::Add(std::string path, std::vector<Component *> composite)
{
    _composites.insert({path, composite});
    return *this;
}

Navigator &Navigator::Set(std::string path)
{
    if (_composites.find(path) == _composites.end())
        throw std::invalid_argument("No such path as '" + path + "' has been added to this navigator");
    for (auto component : _active_composite)
        component->Unload();
    _active_composite = _composites.at(path);
    for (auto component : _active_composite)
        component->Load();
    return *this;
}
