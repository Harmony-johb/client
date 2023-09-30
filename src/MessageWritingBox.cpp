#include <MessageWritingBox.h>
#include <wx/wx.h>

MessageWritingBox::MessageWritingBox(wxWindow* parent) : wxPanel(parent, wxID_ANY)
{
    this->SetBackgroundColour(wxColour(56,58,64));
    CreateComponents();
    CreateLayout();
}

void MessageWritingBox::CreateComponents()
{
    text_input = new wxTextCtrl(this, wxID_ANY, "hello");
    send_button = new wxButton(this, wxID_ANY, "Send");
}

void MessageWritingBox::CreateLayout()
{
    wxBoxSizer* h_sizer = new wxBoxSizer(wxHORIZONTAL);
	h_sizer->Add(text_input, 1, wxEXPAND | wxALL, 10);
	h_sizer->Add(send_button, 0, wxEXPAND | wxALL, 10);
	this->SetSizer(h_sizer);
	this->Layout();
}
