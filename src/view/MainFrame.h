#pragma once
#include <wx/wx.h>
#include <MainPage.h>
#include <AuthenticationPage.h>
#include <SettingsPage.h>
#include <Navigator.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString title);
	~MainFrame();

private:
	void Initialize();

private:
	Navigator _navigator;
	MainPage *_main_page;
	AuthenticationPage *_authentication_page;
	SettingsPage *_settings_page;
};