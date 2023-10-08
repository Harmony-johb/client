#pragma once
#include <Component.h>

class ControlArea : public Component
{
public:
    ControlArea(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxSize(-1, 75));
    ~ControlArea();

private:
    void LoadCustom();
};