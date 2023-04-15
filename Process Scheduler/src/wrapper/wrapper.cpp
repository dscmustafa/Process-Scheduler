#include "wrapper.h"

GUI* Wrapper::getGUI() const
{
	return p_gui;
}

Scheduler* Wrapper::getScheduler() const
{
	return p_scheduler;
}

Wrapper::~Wrapper()
{
	delete p_gui;
	delete p_scheduler;
}



