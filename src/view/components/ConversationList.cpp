#include "ConversationList.h"
#include <Logger.h>
#include <User.h>

ConversationList::ConversationList(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

ConversationList::~ConversationList()
{
}

void ConversationList::LoadCustom()
{
    SetBackgroundColour(wxColour(43, 45, 49));
    _user_controller = UserController();
    std::vector<std::string> conversation_names = _user_controller.GetConversationNames();
    std::string bla = "";
    for (auto conversation_name : conversation_names)
        bla.append(conversation_name.append("/n"));

    LOG_MESSAGE(wxString(bla.c_str(), wxConvUTF8));
}
