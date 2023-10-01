#pragma once
#include <wx/wx.h>
#include <view/components/ChatArea.h>

class MainArea : public wxPanel
{
public:
    MainArea(wxWindow* parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

private:
    void Initialize();
    
private:
    ChatArea* chat_area;
};