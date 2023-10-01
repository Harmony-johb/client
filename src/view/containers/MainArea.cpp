#include "MainArea.h"

MainArea::MainArea(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
 : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(0,255,0));
    Initialize();
}

void MainArea::Initialize()
{
    chat_area = new ChatArea(this);

    auto h_sizer = new wxBoxSizer(wxHORIZONTAL);
    h_sizer->Add(chat_area, 1, wxEXPAND);
    this->SetSizer(h_sizer);
}
