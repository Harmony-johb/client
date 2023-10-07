#include "SettingsPage.h"
#include <MainFrame.h>

SettingsPage::SettingsPage(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

SettingsPage::~SettingsPage()
{
}

void SettingsPage::LoadCustom()
{
    SetBackgroundColour(wxColour(0, 255, 0));
}
