#include "Navigation.h"
#include <stdexcept>

Navigation::Navigation(Component *parent)
{
    _composites = {};
    _active_composite = {};
    _active_path = "";
    _parent = parent;
}

Navigation::~Navigation()
{
}

Navigation &Navigation::Add(std::string path, std::vector<Component *> composite, wxSizer *sizer)
{
    _composites.insert({path, {composite, sizer}});
    return *this;
}

Navigation &Navigation::Set(std::string path)
{
    if (_active_path == path)
        return *this;
    if (_composites.find(path) == _composites.end())
        throw std::invalid_argument("No such path as '" + path + "' has been added to this navigation");
    for (auto component : std::get<0>(_active_composite))
        component->Unload();
    _active_composite = _composites.at(path);
    _active_path = path;
    for (auto component : std::get<0>(_active_composite))
        component->Load();
    if (_parent != nullptr && std::get<1>(_active_composite) != nullptr)
        _parent->SetSizer(std::get<1>(_active_composite));
    return *this;
}
