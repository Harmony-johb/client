#pragma once
#include <wx/wx.h>
#include <ConversationList.h>

class SideBar2 : public wxPanel
{
public:
    SideBar2(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
private:
    void Initialize();
private:
    ConversationList* conversation_list;
};