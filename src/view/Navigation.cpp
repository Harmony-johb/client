#include "Navigation.h"
#include <stdexcept>

Navigation::Navigation()
{
    _composites = {};
    _active_composite = {};
    _active_path = "";
}

Navigation::~Navigation()
{
}

Navigation &Navigation::Add(std::string path, std::vector<Component *> composite)
{
    _composites.insert({path, composite});
    return *this;
}

Navigation &Navigation::Set(std::string path)
{
    if (_active_path == path)
        return *this;
    if (_composites.find(path) == _composites.end())
        throw std::invalid_argument("No such path as '" + path + "' has been added to this navigation");
    for (auto component : _active_composite)
        component->Unload();
    _active_composite = _composites.at(path);
    _active_path = path;
    for (auto component : _active_composite)
        component->Load();
    return *this;
}
