#include "gui.h"


std::string GUI::getfile() const
{
	return file;
}

void GUI::setfile()
{
	std::cout << "Enter Processes file: ";
	std::cin >> filename;
}

