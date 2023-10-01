#pragma once
#include <wx/wx.h>
#include <wx/vscroll.h>
#include <view/components/MessageList.h>
#include <view/components/MessageWritingBox.h>

class ChatArea : public wxPanel
{
public:
    ChatArea(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

private:
    void Initialize();
    
private:
    MessageList* message_list;
    MessageWritingBox* message_writing_box;
};