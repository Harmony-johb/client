#pragma once
#include <wx/wx.h>

class ServerList : public wxPanel
{
public:
    ServerList(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~ServerList();
};