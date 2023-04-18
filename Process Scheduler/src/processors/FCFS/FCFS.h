#pragma once
#include <iostream>
#include "../processor/processor.h"
#include <queue>
#include "../../utils/utils.h"
class FCFS :public Processor
{
public:
	FCFS();

	process run() override;
	void migrate(process) override;
	void steal(process) override;
	void kill(int, int);
	void fork(process);
	void killOrphan(process);
	void print() override;

	~FCFS();
};