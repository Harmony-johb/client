#include "MainFrame.h"
#include <Persistance.h>
#include <wx/wx.h>
#include <wx/gbsizer.h>

MainFrame *MainFrame::_instance = 0;

MainFrame *MainFrame::Instance(const wxString title)
{
	if (_instance == 0)
		_instance = new MainFrame(title);
	return _instance;
}

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
	_main_page = new MainPage(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1));
	_settings_page = new SettingsPage(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1));
	// _authentication_page = new AuthenticationPage(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1));
	_navigator = Navigator()
					 .Add("main_page", {_main_page})
					 .Add("settings_page", {_settings_page})
					 //  .Add("authentication_page", {_authentication_page})
					 .Set("main_page");
}