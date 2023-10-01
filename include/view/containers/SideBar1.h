#pragma once
#include <wx/wx.h>
#include <view/components/ServerList.h>

class SideBar1 : public wxPanel
{
public:
    SideBar1(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

private:
    void Initialize();
    
private:
    ServerList* server_list;
};