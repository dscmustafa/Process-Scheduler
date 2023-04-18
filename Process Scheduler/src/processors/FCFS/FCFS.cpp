#include "FCFS.h"
#include <algorithm>

FCFS::FCFS()
{
	std::cout << "From Processor FCFS" << std::endl;
}


process FCFS::run()
{
	process temp = __READY_QUEUE__.front();
	__READY_QUEUE__.pop();
	return temp;
}

void FCFS::migrate(process)
{

}


void FCFS::steal(process)
{

}

void FCFS::kill(int, int)
{

}

void FCFS::killOrphan(process)
{

}

void FCFS::fork(process)
{

}

void FCFS::print()
{
	while (!__READY_QUEUE__.empty())
	{
		std::cout << "========||" << __READY_QUEUE__.front().pid << " FCFS" << "||========" << std::endl;
		//__READY_QUEUE__.pop();
	}
}


FCFS::~FCFS()
{
	std::cout << "From FCFS DESTRUCTOR" << std::endl;
}







