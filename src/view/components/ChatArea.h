#pragma once
#include <wx/wx.h>
#include <wx/vscroll.h>
#include <MessageList.h>
#include <MessageWritingBox.h>
#include <Component.h>

class ChatArea : public Component
{
public:
    ChatArea(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);

public:
    void Load();
    void Unload();
};