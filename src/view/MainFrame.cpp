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
	wxGridBagSizer* gb_sizer = new wxGridBagSizer();
	gb_sizer->SetFlexibleDirection(wxBOTH);
	gb_sizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_NONE);

	side_bar_1 = new SideBar1(this, wxID_ANY, wxDefaultPosition, wxSize(75, -1));
	side_bar_2 = new SideBar2(this, wxID_ANY, wxDefaultPosition, wxSize(200, -1));
	main_area = new MainArea(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);
	ctrl_area = new ControlArea(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);
	
	gb_sizer->Add( side_bar_1, wxGBPosition( 0, 0 ), wxGBSpan( 2, 1 ), wxEXPAND);
	gb_sizer->Add( side_bar_2, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxEXPAND);
	gb_sizer->Add( main_area, wxGBPosition( 0, 2 ), wxGBSpan( 2, 1 ), wxEXPAND);
	gb_sizer->Add( ctrl_area, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxEXPAND);

	gb_sizer->AddGrowableCol(0, 0);
	gb_sizer->AddGrowableCol(1, 0);
	gb_sizer->AddGrowableCol(2, 1);
	
	gb_sizer->AddGrowableRow(0, 1);
	gb_sizer->AddGrowableRow(1, 0);

	this->SetSizer(gb_sizer);
}