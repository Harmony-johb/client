#include "ConversationView.h"
#include <wx/gbsizer.h>

ConversationView::ConversationView(wxWindow *parent, wxWindowID winid, wxPoint pos, wxSize size) : Component(parent, winid, pos, size) {}

ConversationView::~ConversationView()
{
}

void ConversationView::LoadCustom()
{
    SetBackgroundColour(wxColour(255, 0, 0));

    _chat_area = new ChatArea(this);
    _control_area = new ControlArea(this);
    _conversation_list = new ConversationList(this);

    auto sizer = new wxGridBagSizer();
    sizer->Add(_control_area, wxGBPosition(1, 0), wxGBSpan(1, 1), wxEXPAND);
    sizer->Add(_conversation_list, wxGBPosition(0, 0), wxGBSpan(1, 1), wxEXPAND);
    sizer->Add(_chat_area, wxGBPosition(0, 1), wxGBSpan(2, 1), wxEXPAND);
    sizer->AddGrowableCol(1, 1);
    sizer->AddGrowableRow(0, 1);
    SetSizer(sizer);

    _navigation = Navigation(this)
                      .Add("conversation_view", {_chat_area, _control_area, _conversation_list})
                      .Set("conversation_view");
}
