#include "SideBar2.h"

SideBar2::SideBar2(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
 : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(255,255,0));
    Initialize();
}

void SideBar2::Initialize()
{
    conversation_list = new ConversationList(this);

    auto h_sizer = new wxBoxSizer(wxHORIZONTAL);
    h_sizer->Add(conversation_list, 1, wxEXPAND);
    this->SetSizer(h_sizer);
}
