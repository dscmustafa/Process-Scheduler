#pragma once
#include <fstream>
#include <iostream>
#include <filesystem>
#include <list>
#include <queue>
#include "../utils/utils.h"
#include "../../libs/helpers/helpers.h"
#include <sstream>
#include <string>

class Scheduler
{

public:
	int nFCFS, nSJF, nRR, slice_time, RTF, maxW, STL, forkP, nprocess, nkill;
	std::string data[1000];
	std::string kill[50];
	std::list<process> __NEW_PROCESSES__;
	void fetch(std::string);
	void fill();
	void print()const;
};