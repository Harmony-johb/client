#include "UserController.h"

User *UserController::user = nullptr;

void UserController::Initialize()
{
    UserController::user = new User();
}