#pragma once
#include <string>
#include <Component.h>
#include <tuple>
#include <unordered_map>

class Navigator
{
public:
    Navigator();
    ~Navigator();

public:
    Navigator &Add(std::string path, std::vector<Component *> composite);
    Navigator &Set(std::string path);

private:
    std::unordered_map<std::string, std::vector<Component *>> _composites;
    std::vector<Component *> _active_composite;
};