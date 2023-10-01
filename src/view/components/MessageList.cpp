#include <MessageList.h>
#include <wx/wx.h>
#include <wx/vscroll.h>

MessageList::MessageList(wxWindow* parent, wxWindowID winid, wxPoint pos, wxSize size)
 : wxScrolledWindow(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(56,58,64));
}
