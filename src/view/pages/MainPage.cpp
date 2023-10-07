#include "MainPage.h"
#include <MainFrame.h>

MainPage::MainPage(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

MainPage::~MainPage()
{
}

void MainPage::LoadCustom()
{
    SetBackgroundColour(wxColour(255, 0, 0));

    // _nav_bar = new NavBar(this);
    // _conversation_view = new ConversationView(this);
    // _server_view = new ServerView(this);
    // _navigation = Navigation()
    //                  .Add("conversation_view", {_nav_bar, _conversation_view})
    //                  .Add("server_view", {_nav_bar, _server_view})
    //                  .Set("conversation_view");

    // wxGridBagSizer *gb_sizer = new wxGridBagSizer();
    // gb_sizer->SetFlexibleDirection(wxBOTH);
    // gb_sizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_NONE);

    // // gb_sizer->AddGrowableCol(0, 0);
    // // gb_sizer->AddGrowableCol(1, 0);
    // // gb_sizer->AddGrowableCol(2, 1);

    // // gb_sizer->AddGrowableRow(0, 1);
    // // gb_sizer->AddGrowableRow(1, 0);

    // this->SetSizer(gb_sizer);
}