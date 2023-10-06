#include "ChatArea.h"
#include "MessageList.h"
#include "MessageWritingBox.h"

ChatArea::ChatArea(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
    : Component(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(49, 51, 56));
}

void ChatArea::Load()
{
}

void ChatArea::Unload()
{
}
