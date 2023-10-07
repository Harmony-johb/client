#include "SideBar1.h"

SideBar1::SideBar1(wxWindow* parent, wxWindowID winid, wxPoint pos, wxSize size) 
 : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(0,0,255));
    Initialize();
}

void SideBar1::Initialize()
{
    server_list = new ServerList(this);

    auto h_sizer = new wxBoxSizer(wxHORIZONTAL);
    h_sizer->Add(server_list, 1, wxEXPAND);
    this->SetSizer(h_sizer);
}
