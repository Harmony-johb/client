#include "AuthenticationPage.h"
#include <MainFrame.h>

AuthenticationPage::AuthenticationPage(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

AuthenticationPage::~AuthenticationPage()
{
}

void AuthenticationPage::LoadCustom()
{
    SetBackgroundColour(wxColour(0, 0, 255));
}