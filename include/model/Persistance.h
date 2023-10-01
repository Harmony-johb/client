#pragma once
#include <view/MainFrame.h>

class Persistance
{
private:
	Persistance();
public:
	static void SaveWindowProps(MainFrame& window);
	static void LoadWindowProps(MainFrame& window);
};

