#pragma once
#include <wx/wx.h>
#include <vector>
#include <Chat.h>

class App : public wxApp
{
public:
	bool OnInit();

private:
	std::vector<Chat> chats;
};

