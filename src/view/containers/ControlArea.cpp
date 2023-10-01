#include <view/containers/ControlArea.h>

ControlArea::ControlArea(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
 : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(255,0,0));
    Initialize();
}

void ControlArea::Initialize()
{
    btn_profile = new wxButton(this, wxID_ANY, "profile", wxDefaultPosition, wxSize(-1, 50));
    btn_mute = new wxButton(this, wxID_ANY, "mute", wxDefaultPosition, wxSize(-1, 50));
    btn_deafen = new wxButton(this, wxID_ANY, "deafen", wxDefaultPosition, wxSize(-1, 50));
    btn_settings = new wxButton(this, wxID_ANY, "settings", wxDefaultPosition, wxSize(-1, 50));

    // TODO: Prevent buttons from increasing parents size. The buttons should resize to fit inside parent instead.
    auto h_sizer = new wxBoxSizer(wxHORIZONTAL);
    h_sizer->Add(btn_profile, 1, wxEXPAND);
    h_sizer->Add(btn_mute, 1, wxEXPAND);
    h_sizer->Add(btn_deafen, 1, wxEXPAND);
    h_sizer->Add(btn_settings, 1, wxEXPAND);
    h_sizer->Layout();
    this->SetSizer(h_sizer);
}
