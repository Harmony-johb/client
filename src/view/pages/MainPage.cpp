#include "MainPage.h"
#include <MainFrame.h>

MainPage::MainPage(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

MainPage::~MainPage()
{
}

void MainPage::LoadCustom()
{
    SetBackgroundColour(wxColour(255, 0, 0));

    _nav_bar = new NavBar(this);
    _conversation_view = new ConversationView(this);
    _server_view = new ServerView(this);

    _nav_bar->SetSize(wxSize(100, 100));

    auto sizer = new wxBoxSizer(wxHORIZONTAL);
    sizer->Add(_nav_bar, 0, wxEXPAND);
    sizer->Add(_conversation_view, 1, wxEXPAND);
    sizer->Add(_server_view, 1, wxEXPAND);
    SetSizer(sizer);

    _navigation = Navigation(this)
                      .Add("conversation_view", {_nav_bar, _conversation_view})
                      .Add("server_view", {_nav_bar, _server_view})
                      .Set("conversation_view");
}