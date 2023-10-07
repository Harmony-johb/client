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
	SetupMenuBar();
	SetupPages();
}

MainFrame::~MainFrame()
{
	Persistance::SaveWindowProps(*this);
}

void MainFrame::SetupMenuBar()
{
	auto menu_bar = new wxMenuBar();
	auto nav_menu = new wxMenu();
	nav_menu->Append(NavMenu::Main, _T("&Main"));
	nav_menu->Append(NavMenu::Auth, _T("&Auth"));
	nav_menu->Append(NavMenu::Settings, _T("&Settings"));
	menu_bar->Append(nav_menu, _T("&Page"));
	nav_menu->Bind(wxEVT_MENU, &MainFrame::OnNavMenu, this);
	SetMenuBar(menu_bar);
}

void MainFrame::SetupPages()
{
	_main_page = new MainPage(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1));
	_settings_page = new SettingsPage(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1));
	_authentication_page = new AuthenticationPage(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1));
	_navigation = Navigation()
					  .Add("main_page", {_main_page})
					  .Add("settings_page", {_settings_page})
					  .Add("authentication_page", {_authentication_page})
					  .Set("main_page");
}

void MainFrame::OnNavMenu(wxCommandEvent &evt)
{
	switch (evt.GetId())
	{
	case NavMenu::Main:
		_navigation.Set("main_page");
		break;
	case NavMenu::Auth:
		_navigation.Set("authentication_page");
		break;
	case NavMenu::Settings:
		_navigation.Set("settings_page");
		break;
	default:
		break;
	}
	Layout();
}
