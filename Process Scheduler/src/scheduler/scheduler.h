#pragma once
#include <queue>
#include <fstream>
#include "../utils/utils.h"

class Scheduler
{
	std::queue<process> __NEW_PROCESSES__;

	void fill(std::fstream);
};