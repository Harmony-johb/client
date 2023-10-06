#pragma once
#include <wx/wx.h>
#include <MainPage.h>
#include <AuthenticationPage.h>
#include <SettingsPage.h>
#include <Navigator.h>

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
	void Initialize();

public:
	Navigator _navigator;

private:
	MainPage *_main_page;
	AuthenticationPage *_authentication_page;
	SettingsPage *_settings_page;
};