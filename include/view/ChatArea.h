#pragma once
#include <wx/wx.h>
#include <wx/vscroll.h>
#include <MessageList.h>
#include <MessageWritingBox.h>

class ChatArea : public wxPanel
{
public:
    ChatArea(wxWindow* parent);
private:
    void CreateComponents();
    void CreateLayout();
private:
    MessageList* message_list;
    MessageWritingBox* message_writing_box;
};