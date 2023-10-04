#include "MessageController.h"

Message *MessageController::message = nullptr;

void MessageController::Initialize()
{
    MessageController::message = new Message();
}