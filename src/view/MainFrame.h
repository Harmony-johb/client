#pragma once
#include <wx/wx.h>
#include <SideBar1.h>
#include <SideBar2.h>
#include <MainArea.h>
#include <ControlArea.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString title);
	~MainFrame();

private:
	void Initialize();

private:
	SideBar1* side_bar_1;
	SideBar2* side_bar_2;
	MainArea* main_area;
	ControlArea* ctrl_area;
};