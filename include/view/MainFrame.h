#pragma once
#include <wx/wx.h>
#include <ServerList.h>
#include <ConversationList.h>
#include <ChatArea.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString title);
	~MainFrame();

private:
	void CreateComponents();
	void CreateLayout();

private:
	ServerList* server_list;
	ConversationList* conversation_list;
	ChatArea* chat_area;
};