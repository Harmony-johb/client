#include "NavBar.h"

NavBar::NavBar(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

NavBar::~NavBar()
{
}

void NavBar::LoadCustom()
{
    SetBackgroundColour(wxColour(30, 31, 34));
}
