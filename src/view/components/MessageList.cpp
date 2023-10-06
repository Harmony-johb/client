#include "MessageList.h"
#include <wx/wx.h>
#include <wx/vscroll.h>

MessageList::MessageList(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
    : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(49, 51, 56));
}
