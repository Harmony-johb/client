#pragma once
#include <string>
#include <Component.h>
#include <tuple>
#include <unordered_map>

class Navigation
{
public:
    Navigation(Component *parent = nullptr);
    ~Navigation();

public:
    Navigation &Add(std::string path, std::vector<Component *> composite, wxSizer *sizer = nullptr);
    Navigation &Set(std::string path);

private:
    std::unordered_map<std::string, std::tuple<std::vector<Component *>, wxSizer *>> _composites;
    std::tuple<std::vector<Component *>, wxSizer *> _active_composite;
    std::string _active_path;
    Component *_parent;
};