#pragma once
#include <wx/wx.h>

class Component : public wxPanel
{
public:
    Component(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~Component();

public:
    void Load();
    void Unload();

private:
    virtual void LoadCustom() = 0;

private:
    wxWindow *_parent;
};