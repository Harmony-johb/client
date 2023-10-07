#include "ConversationList.h"
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
    for (auto conversation_name : conversation_names)
        wxLogMessage(wxString(conversation_name.c_str(), wxConvUTF8));
}
