#include "Component.h"
#include <stdexcept>

Component::Component(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : wxPanel(parent, winid, pos, size)
{
    _parent = parent;
    Reparent(nullptr);
    Hide();
}

Component::~Component()
{
}

void Component::Load()
{
    Reparent(_parent);
    LoadCustom();
    Layout();
    Show();
}

void Component::Unload()
{
    DestroyChildren();
    Reparent(nullptr);
    Hide();
}
