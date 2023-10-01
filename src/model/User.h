#pragma once
#include <string>

class User
{
private:
    int id;
    std::string username;
    std::vector<int> chat_ids;
};