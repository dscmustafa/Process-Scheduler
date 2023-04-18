#pragma once
#include <string>
#include <list>
#include <tuple>
#include <vector>


struct process
{
	int pid;
	int arrival_time;
	int response_time;
	int cpu_time;
	int trm_time;
	int trt_time;
	int wait_time;
	int num_io;
	std::string status;
	int IOR[50];
	int IOD[50];
	int priority;
	int blocked_time;
};





