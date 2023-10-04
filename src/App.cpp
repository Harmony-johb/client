#include "App.h"
#include "MainFrame.h"
#include <ChatController.h>
#include <MessageController.h>
#include <ServerController.h>
#include <UserController.h>

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	ChatController::Initialize();
	MessageController::Initialize();
	ServerController::Initialize();
	UserController::Initialize();
	MainFrame *mainFrame = new MainFrame("Harmony");
	mainFrame->Show();

	return true;
}