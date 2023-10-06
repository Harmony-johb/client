#pragma once
#include <wx/wx.h>
#include <NavBar.h>
#include <ConversationView.h>
#include <ServerView.h>
#include <Component.h>
#include <Navigator.h>

class MainPage : public Component
{
public:
    MainPage(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~MainPage();

public:
    void Load();
    void Unload();

private:
    Navigator _navigator;
    NavBar *_nav_bar;
    ConversationView *_conversation_view;
    ServerView *_server_view;
};