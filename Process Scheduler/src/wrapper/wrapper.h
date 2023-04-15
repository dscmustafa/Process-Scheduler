#pragma once
#include "../gui/gui.h"
#include "../scheduler/scheduler.h"
class Wrapper {

	GUI* p_gui;
	Scheduler* p_scheduler;

public:
	GUI* getGUI()const;
	Scheduler* getScheduler()const;

	void Run();

	~Wrapper();

};