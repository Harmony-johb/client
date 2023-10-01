#include "model/App.h"
#include "view/MainFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("Harmony");
	mainFrame->Show();

	return true;
}