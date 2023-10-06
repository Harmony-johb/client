#include "Component.h"
#include <stdexcept>

Component::Component(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
{
    _parent = parent;
    _winid = winid;
    _pos = pos;
    _size = size;
}

Component::~Component()
{
}

void Component::Load()
{
    _panel = new wxPanel(_parent, _winid, _pos, _size);
    LoadCustom();
}

void Component::Unload()
{
    _panel->Destroy();
}

wxPanel *Component::GetPanel()
{
    return _panel;
}
