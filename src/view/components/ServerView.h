#pragma once
#include <Component.h>

class ServerView : public Component
{
public:
    ServerView(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~ServerView();

private:
    void LoadCustom();
};