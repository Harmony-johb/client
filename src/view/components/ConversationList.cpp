#include "ConversationList.h"

ConversationList::ConversationList(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

ConversationList::~ConversationList()
{
}

void ConversationList::LoadCustom()
{
    SetBackgroundColour(wxColour(43, 45, 49));
}
