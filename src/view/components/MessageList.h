#pragma once
#include <wx/vscroll.h>

class MessageList : public wxPanel
{
public:
    MessageList(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

private:
    void Initialize();

private:
};