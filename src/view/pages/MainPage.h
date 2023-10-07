#pragma once
#include <Component.h>

class MainPage : public Component
{
public:
    MainPage(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~MainPage();

private:
    void LoadCustom();
};