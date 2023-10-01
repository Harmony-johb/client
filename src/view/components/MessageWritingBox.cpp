#include "MessageWritingBox.h"
#include <wx/wx.h>

MessageWritingBox::MessageWritingBox(wxWindow* parent, wxWindowID winid, wxPoint pos, wxSize size)
 : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(49,51,56));
    Initialize();
    BindEventHandlers();
}

void MessageWritingBox::Initialize()
{
    text_input = new wxTextCtrl(this, wxID_ANY);
    text_input->SetBackgroundColour(wxColour(56,58,64));
    text_input->SetForegroundColour(wxColour(229,241,251));
    send_button = new wxButton(this, wxID_ANY, "Send");
    send_button->SetBackgroundColour(wxColour(56,58,64));
    send_button->SetForegroundColour(wxColour(229,241,251));

    wxBoxSizer* h_sizer = new wxBoxSizer(wxHORIZONTAL);
	h_sizer->Add(text_input, 1, wxEXPAND | wxALL, 10);
	h_sizer->Add(send_button, 0, wxEXPAND | wxTOP | wxRIGHT | wxBOTTOM, 10);
	this->SetSizer(h_sizer);
	this->Layout();
}

void MessageWritingBox::BindEventHandlers()
{
    send_button->Bind(wxEVT_BUTTON, &MessageWritingBox::OnSendButtonClicked, this);
}

void MessageWritingBox::OnSendButtonClicked(wxCommandEvent &evt)
{
    evt.SetString(text_input->GetValue());
    text_input->Clear();
    evt.Skip();
}