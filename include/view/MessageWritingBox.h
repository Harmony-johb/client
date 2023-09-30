#pragma once
#include <wx/wx.h>

class MessageWritingBox : public wxPanel
{
public:
    MessageWritingBox(wxWindow* parent);
private:
    void CreateComponents();
    void CreateLayout();
private:
    wxTextCtrl* text_input;
    wxButton* send_button;
};