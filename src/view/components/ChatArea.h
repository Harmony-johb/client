#pragma once
#include <Component.h>

class ChatArea : public Component
{
public:
    ChatArea(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~ChatArea();

private:
    void LoadCustom();
};