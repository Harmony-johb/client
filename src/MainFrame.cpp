#include "MainFrame.h"
#include <wx/wx.h>
#include "Persistance.h"
#include <ServerList.h>

MainFrame::MainFrame(const wxString title) : wxFrame(nullptr, wxID_ANY, title)
{
	Persistance::LoadWindowProps(*this);
	CreateComponents();
	CreateLayout();
}

MainFrame::~MainFrame()
{
	Persistance::SaveWindowProps(*this);
}

void MainFrame::CreateComponents()
{
	server_list = new ServerList(this);
	conversation_list = new ConversationList(this);
	chat_area = new ChatArea(this);
}

void MainFrame::CreateLayout()
{
	wxBoxSizer* h_sizer = new wxBoxSizer(wxHORIZONTAL);
	h_sizer->Add(server_list, 0, wxEXPAND | wxALL, 0);
	h_sizer->Add(conversation_list, 0, wxEXPAND | wxALL, 0);
	h_sizer->Add(chat_area, 1, wxEXPAND | wxALL, 0);
	this->SetSizer(h_sizer);
	this->Layout();
}
