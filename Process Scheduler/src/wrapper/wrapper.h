#pragma once
#include "../gui/gui.h"
#include "../scheduler/scheduler.h"
#include "../criterion/criterion.h"
class Wrapper {

	GUI* p_gui;
	Scheduler* p_scheduler;
	Criterion* p_criterion;
public:
	Wrapper();
	GUI* getGUI()const;
	Scheduler* getScheduler()const;

	void Run();

	~Wrapper();

};