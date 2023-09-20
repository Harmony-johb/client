#include "Persistance.h"
#include "MainFrame.h"
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
	ostream << pos.x << " " << pos.y << "\n";
	ostream << size.x << " " << size.y << "\n";
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
	istream >> pos.x >> pos.y;
	istream >> size.x >> size.y;
	window.SetPosition(pos);
	window.SetSize(size);
}
