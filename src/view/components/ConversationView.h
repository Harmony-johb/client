#pragma once
#include <Component.h>

class ConversationView : public Component
{
public:
    ConversationView(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~ConversationView();

public:
    void Load();
    void Unload();
};