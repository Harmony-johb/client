#include "MainFrame.h"
#include <Persistance.h>
#include <wx/wx.h>
#include <wx/gbsizer.h>

MainFrame::MainFrame(const wxString title) : wxFrame(nullptr, wxID_ANY, title)
{
	Persistance::LoadWindowProps(*this);
	Initialize();
}

MainFrame::~MainFrame()
{
	Persistance::SaveWindowProps(*this);
}

void MainFrame::Initialize()
{
	_main_page = new MainPage(this);
	_settings_page = new SettingsPage(this);
	_authentication_page = new AuthenticationPage(this);
	_navigator = Navigator()
					 .Add("main_page", {_main_page})
					 .Add("settings_page", {_settings_page})
					 .Add("authentication_page", {_authentication_page})
					 .Set("main_page");
}