#pragma once
#include <queue>
#include "../../utils/utils.h"


class Processor
{
public:
	std::queue<process> __READY_QUEUE__;

	virtual process run() = 0;
	virtual void migrate(process) = 0;
	virtual void steal(process) = 0;
	virtual void print() = 0;
};