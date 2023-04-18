#pragma once
#include "../processor/processor.h"
#include <queue>
#include "../../utils/utils.h"
#include <iostream>

class Round_Robin :public Processor
{
	int QUANTUM_TIME;
public:
	Round_Robin();

	process run() override;
	void migrate(process) override;
	void steal(process) override;
	void print() override;

	~Round_Robin();
};
