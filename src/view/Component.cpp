#include "Component.h"
#include <stdexcept>

Component::Component(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size)
    : wxPanel(parent, winid, pos, size)
{
}

Component::~Component()
{
}

void Component::Load()
{
}

void Component::Unload()
{
    // if (!GetChildren().empty())
    //     for (auto child : GetChildren())
    //         child.UnLoad();
    // if (!DestroyChildren())
    //     throw std::domain_error("Could not destroy child: " + this->GetName());
}
