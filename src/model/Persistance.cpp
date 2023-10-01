#include "model/Persistance.h"
#include "view/MainFrame.h"
#include <string>
#include <filesystem>
#include <fstream>

const std::string FILENAME_WINDOW_PROPS = "window_props.txt";
const wxSize DEFAULT_WINDOW_SIZE = wxSize(800, 600);

void Persistance::SaveWindowProps(MainFrame& window)
{
	std::ofstream ostream(FILENAME_WINDOW_PROPS);
	wxPoint pos = window.GetPosition();
	wxSize size = window.GetSize();
	bool is_maximized = window.IsMaximized();
	ostream << pos.x << " " << pos.y << "\n";
	ostream << size.x << " " << size.y << "\n";
	ostream << is_maximized << "\n";
}

void Persistance::LoadWindowProps(MainFrame& window)
{
	if (!std::filesystem::exists(FILENAME_WINDOW_PROPS)) {
		window.SetSize(DEFAULT_WINDOW_SIZE);
		window.Center();
		return;
	}
	std::ifstream istream(FILENAME_WINDOW_PROPS);
	wxPoint pos;
	wxSize size;
	bool is_maximized;
	istream >> pos.x >> pos.y;
	istream >> size.x >> size.y;
	istream >> is_maximized;
	window.SetPosition(pos);
	if (is_maximized) {
		window.Maximize();
		window.SetSize(DEFAULT_WINDOW_SIZE);
	}
	else
		window.SetSize(size);
}
