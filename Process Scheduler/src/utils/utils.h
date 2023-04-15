#pragma once
#include <string>

struct process
{
	int pid;
	int arrival_time;
	int status;
	int burst_time;
	int priority;
	int blocked_time;
	std::string type;
	std::string code;
};
