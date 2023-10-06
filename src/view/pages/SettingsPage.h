#pragma once
#include <Component.h>

class SettingsPage : public Component
{
public:
    SettingsPage(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~SettingsPage();

public:
    void Load();
    void Unload();

private:
};