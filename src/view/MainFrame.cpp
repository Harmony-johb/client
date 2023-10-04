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

	gb_sizer->AddGrowableCol(0, 0);
	gb_sizer->AddGrowableCol(1, 0);
	gb_sizer->AddGrowableCol(2, 1);
	
	gb_sizer->AddGrowableRow(0, 1);
	gb_sizer->AddGrowableRow(1, 0);

	this->SetSizer(gb_sizer);
}