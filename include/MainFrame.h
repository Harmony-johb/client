#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString title);
	~MainFrame();

private:
	void CreateControls();
	void BindEventHandlers();

private:
	void OnButtonClick(wxCommandEvent& evt);

private:
	wxPanel* panel;
	wxButton* button;
};

