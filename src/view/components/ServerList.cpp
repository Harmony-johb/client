#include "ServerList.h"

ServerList::ServerList(wxWindow* parent, wxWindowID winid, wxPoint pos, wxSize size)
 : wxPanel(parent, winid, pos, size)
{
    this->SetBackgroundColour(wxColor(30,31,34));
}

ServerList::~ServerList()
{
}
