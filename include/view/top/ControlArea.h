#pragma once
#include <wx/wx.h>

class ControlArea : public wxPanel
{
public:
    ControlArea(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

private:
    void Initialize();
    
private:
    wxButton* btn_profile;
    wxButton* btn_mute;
    wxButton* btn_deafen;
    wxButton* btn_settings;
};