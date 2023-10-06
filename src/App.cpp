#include "App.h"
#include "MainFrame.h"
#include <ChatController.h>
#include <MessageController.h>
#include <ServerController.h>
#include <UserController.h>

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	MainFrame *mainFrame = new MainFrame("Harmony");
	mainFrame->Show();

	return true;
}