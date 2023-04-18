#pragma once
#include <queue>
#include <list>
#include "../utils/utils.h"
#include "../processors/processor/processor.h"
#include "../block/block.h"
#include "../terminate/terminate.h"
#include <algorithm>
#include <iostream>
#include "../processors/FCFS/FCFS.h"
#include "../processors/SJF/SJF.h"
#include "../processors/Round_Robin/Round_Robin.h"
#include "../../libs/helpers/helpers.h"
class Criterion
{
	int size;
public:
	std::list<Processor*> __Processors__;
	Block* p_block;
	Terminate* p_terminate;
	Criterion(int, int, int);
	int getSize();
	void setSize(int);
	void distripute(std::list<process>);
	void excute();
	void Block2Ready();
	void print();
	~Criterion();
};