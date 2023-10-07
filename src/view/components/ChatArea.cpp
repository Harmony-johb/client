#include "ChatArea.h"

ChatArea::ChatArea(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

ChatArea::~ChatArea()
{
}

void ChatArea::LoadCustom()
{
    SetBackgroundColour(wxColour(49, 51, 56));
}
