#pragma once
#include <wx/wx.h>

class Component : public wxPanel
{
public:
    Component(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~Component();

public:
    virtual void Load() = 0;
    virtual void Unload() = 0;
};