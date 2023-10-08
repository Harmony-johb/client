#include "App.h"
#include "MainFrame.h"
#include <ChatController.h>
#include <MessageController.h>
#include <ServerController.h>
#include <UserController.h>

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	MainFrame *main_frame = MainFrame::Instance("Harmony");
	main_frame->Show();

	return true;
}