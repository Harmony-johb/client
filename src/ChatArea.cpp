#include "ChatArea.h"
#include <MessageList.h>

ChatArea::ChatArea(wxWindow *parent) : wxPanel(parent, wxID_ANY)
{
    this->SetBackgroundColour(wxColour(49,51,56));
    CreateComponents();
    CreateLayout();
}

void ChatArea::CreateComponents()
{
    message_list = new MessageList(this);
    message_writing_box = new MessageWritingBox(this);
}

void ChatArea::CreateLayout()
{
    wxBoxSizer* v_sizer = new wxBoxSizer(wxVERTICAL);
	v_sizer->Add(message_list, 1, wxEXPAND | wxALL, 10);
	v_sizer->Add(message_writing_box, 0, wxEXPAND | wxALL, 10);
	this->SetSizer(v_sizer);
	this->Layout();
}

