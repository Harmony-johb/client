#pragma once
#include <User.h>

class UserController
{
private:
    static User *user;

public:
    static void Initialize();
};