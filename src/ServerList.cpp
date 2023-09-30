#include "ServerList.h"

ServerList::ServerList(wxWindow* parent) : wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(75, -1))
{
    this->SetBackgroundColour(wxColor(30,31,34));
}

ServerList::~ServerList()
{
}
