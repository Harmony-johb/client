#include "MainFrame.h"
#include <wx/wx.h>
#include "Persistance.h"

MainFrame::MainFrame(const wxString title) : wxFrame(nullptr, wxID_ANY, title)
{
	Persistance::LoadWindowProps(*this);
	CreateControls();
	BindEventHandlers();
	CreateStatusBar();
}

MainFrame::~MainFrame()
{
	Persistance::SaveWindowProps(*this);
}

void MainFrame::CreateControls()
{
	panel = new wxPanel(this);
	button = new wxButton(panel, wxID_ANY, "button", wxPoint(100, 50), wxDefaultSize);
}

void MainFrame::BindEventHandlers()
{
	button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClick, this);
}

void MainFrame::OnButtonClick(wxCommandEvent& evt)
{
	static int counter = 0;
	wxLogStatus(wxString::Format("hello %d", counter++));
}

