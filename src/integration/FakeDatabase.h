#pragma once
#include <unordered_map>
#include <string>
#include <tuple>

class FakeDatabase
{
public:
    static std::unordered_map<int, std::tuple<std::string, std::vector<int>, std::vector<int>, std::vector<int>>> user_table;
    static std::unordered_map<int, std::tuple<std::string, std::vector<int>>> chat_table;

private:
};