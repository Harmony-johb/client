#include "FakeDatabase.h"

// {user_id, {username, {server_ids}, {chat_ids}, {friend_ids}}}
std::unordered_map<int, std::tuple<std::string, std::vector<int>, std::vector<int>, std::vector<int>>> FakeDatabase::user_table = {
    {1, {"jakob", {1}, {1}, {2, 3, 4, 5, 6, 7, 8}}},
    {2, {"hugo", {1}, {1}, {1, 3, 4}}},
    {3, {"anton", {1}, {2}, {1, 2}}},
    {4, {"wille", {1}, {2}, {1, 2}}},
    {5, {"kevin", {1}, {3}, {1}}},
    {6, {"leon", {1}, {3}, {1}}},
    {7, {"hofer", {1}, {4}, {1}}},
    {8, {"niclas", {1}, {4}, {1}}},
};

// {chat_id, {chatname, {message_ids}}}
std::unordered_map<int, std::tuple<std::string, std::vector<int>>> FakeDatabase::chat_table = {
    {1, {"Jakob and Hugos chat", {1, 2, 3, 4}}},
    {2, {"Anton and Willes chat", {5, 6, 7, 8}}},
    {3, {"Kevin and Leons chat", {9, 10, 11, 12}}},
    {4, {"Hofer and Niclas chat", {13, 14, 15, 16}}},
};