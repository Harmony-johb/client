#include "FakeDatabase.h"

// {user_id, {username, {server_ids}, {chat_ids}, {friend_ids}}}
std::unordered_map<int, std::tuple<std::string, std::vector<int>, std::vector<int>, std::vector<int>>> FakeDatabase::user_table = {
    {1, {"jakob", {1}, {1, 6}, {2, 3, 4, 5, 6, 7, 8}}},
    {2, {"hugo", {1}, {1}, {1, 3, 4}}},
    {3, {"anton", {1}, {2, 6}, {1, 2}}},
    {4, {"wille", {1}, {2}, {1, 2}}},
    {5, {"kevin", {1}, {3}, {1}}},
    {6, {"leon", {1}, {3}, {1}}},
    {7, {"hofer", {1}, {4}, {1}}},
    {8, {"niclas", {1}, {4}, {1}}},
    {9, {"hitoshisan", {}, {5}, {10}}},
    {10, {"rakuchan", {}, {5}, {9}}},
};

// {chat_id, {chatname, {message_ids}}}
std::unordered_map<int, std::tuple<std::string, std::vector<int>>> FakeDatabase::chat_table = {
    {1, {"Jakob and Hugos chat", {1, 2, 3, 4}}},
    {2, {"Anton and Willes chat", {5, 6, 7, 8}}},
    {3, {"Kevin and Leons chat", {9, 10, 11, 12}}},
    {4, {"Hofer and Niclas chat", {13, 14, 15, 16}}},
    {5, {"Hitoshisan and Rakuchan chat", {17, 18, 19, 20}}},
    {6, {"Jakob and Antons chat", {}}},
};

// {server_id, {server_name}}
std::unordered_map<int, std::tuple<std::string>> FakeDatabase::server_table = {
    {1, {"secret server"}},
};

// {message_id, {message_content, sender_id}}
std::unordered_map<int, std::tuple<std::string, int>> FakeDatabase::message_table = {
    {1, {"Hello Hugo, it is me. Jakob!", 1}},
    {2, {"Hello Jakob, it is me. Hugo!", 2}},
    {3, {"Goodbye Hugo \n Best Regards, Jakob", 1}},
    {4, {"Goodbye Jakob \n Best Regards, Hugo", 2}},
    {5, {"Hello Anton, are you there?", 4}},
    {6, {"Antooooon?!", 4}},
    {7, {"I wan't to play counter strike", 4}},
    {8, {"Oooooooh, you son of a bitch, I'm in!", 3}},
    {9, {"Kevin join disc", 6}},
    {10, {"No", 5}},
    {11, {"Whyyyyy, I have something important to say", 6}},
    {12, {">:(", 6}},
    {13, {"Hello", 7}},
    {14, {"Hello", 8}},
    {15, {"Goodbye", 7}},
    {16, {"Goodbye", 8}},
    {17, {"Hello Rakuchan, it is me. Hitoshisan!", 9}},
    {18, {"Oh hello Hitoshisaaaaaaaaaaaaaan is it really you? uWu", 10}},
    {19, {"Yes, and I think you're downright sugoi, nya rawr", 9}},
    {20, {"Desu Hitoshisaaaaaaaaaaaaaaaaaaaaaaaaaaan nyaaaaaaaa!", 10}},
};