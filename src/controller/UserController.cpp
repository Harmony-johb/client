#include "UserController.h"
#include <SessionState.h>

std::vector<std::string> UserController::GetConversationNames()
{
    std::unordered_map<int, Chat *> chats = SessionState::Instance()->GetActiveUser()->GetChats();

    std::vector<std::string> names;
    for (auto chat : chats)
        names.push_back(chat.second->GetChatname());

    return names;
}
