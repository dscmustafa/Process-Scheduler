#pragma once
#include <iostream>
#include "../processor/processor.h"
#include "../../utils/utils.h"
#include <queue>

class SJF :public Processor
{
public:

	SJF();

	process run() override;
	void migrate(process) override;
	void steal(process) override;
	void print() override;
	~SJF();
};