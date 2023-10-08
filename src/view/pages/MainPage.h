#pragma once
#include <Component.h>
#include <Navigation.h>
#include <NavBar.h>
#include <ConversationView.h>
#include <ServerView.h>

class MainPage : public Component
{
public:
    MainPage(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~MainPage();

private:
    void LoadCustom();

private:
    Navigation _navigation;
    NavBar *_nav_bar;
    ConversationView *_conversation_view;
    ServerView *_server_view;
};