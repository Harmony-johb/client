#pragma once
#include <Component.h>

class AuthenticationPage : public Component
{
public:
    AuthenticationPage(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~AuthenticationPage();

private:
    void LoadCustom();
};