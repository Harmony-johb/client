#include <view/components/ChatArea.h>
#include <view/components/MessageList.h>
#include <view/components/MessageWritingBox.h>

ChatArea::ChatArea(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
 : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColour(49,51,56));
    Initialize();
}

void ChatArea::Initialize()
{
    message_list = new MessageList(this);
    message_writing_box = new MessageWritingBox(this);

    wxBoxSizer* v_sizer = new wxBoxSizer(wxVERTICAL);
	v_sizer->Add(message_list, 1, wxEXPAND, 0);
	v_sizer->Add(message_writing_box, 0, wxEXPAND, 0);
	this->SetSizer(v_sizer);
	this->Layout();
}

