#pragma once
#include <Component.h>

class NavBar : public Component
{
public:
    NavBar(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxSize(75, -1));
    ~NavBar();

private:
    void LoadCustom();
};