#pragma once
#include <Component.h>
#include <Navigation.h>
#include <ChatArea.h>
#include <ControlArea.h>
#include <ConversationList.h>

class ConversationView : public Component
{
public:
    ConversationView(wxWindow *parent, wxWindowID winid = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize);
    ~ConversationView();

private:
    void LoadCustom();

private:
    Navigation _navigation;
    ChatArea *_chat_area;
    ControlArea *_control_area;
    ConversationList *_conversation_list;
};