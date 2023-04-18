#include "SJF.h"

SJF::SJF()
{
	std::cout << "From Processor SJF" << std::endl;

}


process SJF::run()
{
	process temp = __READY_QUEUE__.front();
	__READY_QUEUE__.pop();
	return temp;
}

void SJF::migrate(process)
{

}

void SJF::steal(process)
{

}

void SJF::print()
{
	while (!__READY_QUEUE__.empty())
	{
		std::cout << "========||" << __READY_QUEUE__.front().pid << " SJF" << "||========" << std::endl;
		//__READY_QUEUE__.pop();
	}
}


SJF::~SJF()
{
	std::cout << "From SJF DESTRUCTOR" << std::endl;

}

