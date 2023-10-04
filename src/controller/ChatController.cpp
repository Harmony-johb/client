#include "ChatController.h"

Chat *ChatController::chat = nullptr;

void ChatController::Initialize()
{
    ChatController::chat = new Chat();
}
