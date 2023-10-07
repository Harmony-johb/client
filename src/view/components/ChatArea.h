#pragma once
#include <wx/wx.h>
#include <wx/vscroll.h>
#include <MessageList.h>
#include <MessageWritingBox.h>

class ChatArea : public wxPanel
{
public:
    ChatArea(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

private:
    void Initialize();
    void BindEventHandlers();

private:
    void OnSendButtonClicked(wxCommandEvent& evt);
    
private:
    MessageList* message_list;
    MessageWritingBox* message_writing_box;
};