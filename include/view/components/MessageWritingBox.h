#pragma once
#include <wx/wx.h>

class MessageWritingBox : public wxPanel
{
public:
    MessageWritingBox(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

private:
    void Initialize();
    
private:
    wxTextCtrl* text_input;
    wxButton* send_button;
};