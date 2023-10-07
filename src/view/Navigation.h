#pragma once
#include <string>
#include <Component.h>
#include <tuple>
#include <unordered_map>

class Navigation
{
public:
    Navigation();
    ~Navigation();

public:
    Navigation &Add(std::string path, std::vector<Component *> composite);
    Navigation &Set(std::string path);

private:
    std::unordered_map<std::string, std::vector<Component *>> _composites;
    std::vector<Component *> _active_composite;
    std::string _active_path;
};