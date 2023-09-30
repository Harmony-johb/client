#include <MessageList.h>
#include <wx/wx.h>
#include <wx/vscroll.h>

MessageList::MessageList(wxWindow* parent) : wxScrolledWindow(parent, wxID_ANY)
{
    this->SetBackgroundColour(wxColour(56,58,64));
}
