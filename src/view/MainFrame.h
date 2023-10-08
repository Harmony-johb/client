#pragma once
#include <wx/wx.h>
#include <MainPage.h>
#include <AuthenticationPage.h>
#include <SettingsPage.h>
#include <Navigation.h>

class MainFrame : public wxFrame
{
public:
	static MainFrame *Instance(const wxString title = "");

protected:
	MainFrame(const wxString title);
	~MainFrame();

private:
	static MainFrame *_instance;

private:
	void SetupMenuBar();
	void SetupPages();

private:
	enum NavMenu
	{
		Main,
		Auth,
		Settings
	};
	void OnNavMenu(wxCommandEvent &evt);

private:
	Navigation _navigation;
	MainPage *_main_page;
	AuthenticationPage *_authentication_page;
	SettingsPage *_settings_page;
};