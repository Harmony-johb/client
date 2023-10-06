#pragma once
#include <wx/wx.h>

class Component
{
public:
    Component(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~Component();

public:
    void Load();
    void Unload();

public:
    wxPanel *GetPanel();

private:
    virtual void LoadCustom() = 0;

private:
    wxPanel *_panel;
    wxWindow *_parent;
    wxWindowID _winid;
    wxPoint _pos;
    wxSize _size;
};