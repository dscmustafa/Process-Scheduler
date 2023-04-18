#include "Round_Robin.h"

Round_Robin::Round_Robin()
{
	std::cout << "From Processor Round_Roubin" << std::endl;
}

void Round_Robin::migrate(process)
{

}

void Round_Robin::steal(process)
{

}

process Round_Robin::run()
{
	process temp = __READY_QUEUE__.front();
	__READY_QUEUE__.pop();
	return temp;
}

void Round_Robin::print()
{
	while (!__READY_QUEUE__.empty())
	{
		std::cout << "========||" << __READY_QUEUE__.front().pid << " RR" << "||========" << std::endl;
		//__READY_QUEUE__.pop();
	}
}


Round_Robin::~Round_Robin()
{
	std::cout << "From Round_Robin DESTRUCTOR" << std::endl;

}
