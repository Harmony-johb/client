#pragma once
#include <Component.h>
#include <UserController.h>

class ConversationList : public Component
{
public:
    ConversationList(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxSize(300, -1));
    ~ConversationList();

private:
    void LoadCustom();

private:
    UserController _user_controller;
};