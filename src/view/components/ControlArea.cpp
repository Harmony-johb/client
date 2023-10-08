#include "ControlArea.h"

ControlArea::ControlArea(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

ControlArea::~ControlArea()
{
}

void ControlArea::LoadCustom()
{
    SetBackgroundColour(wxColour(35, 36, 40));
}
