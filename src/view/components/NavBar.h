#pragma once
#include <Component.h>

class NavBar : public Component
{
public:
    NavBar(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~NavBar();

public:
    void Load();
    void Unload();
};