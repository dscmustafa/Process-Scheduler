#include "criterion.h"



Criterion::Criterion(int nFCFS, int nSJF, int nRR)
{
	p_block = new Block();
	p_terminate = new Terminate();
	size = nFCFS + nSJF + nRR;
	for (int i = 0; i < size; i++)
	{
		if (i < nFCFS)
		{
			Processor* tempProcessor = new FCFS();
			__Processors__.push_back(tempProcessor);
		}
		else if (i >= nFCFS && i < (nFCFS + nSJF))
		{
			Processor* tempProcessor = new SJF();
			__Processors__.push_back(tempProcessor);
		}
		else if (i >= (nFCFS + nSJF))
		{
			Processor* tempProcessor = new Round_Robin();
			__Processors__.push_back(tempProcessor);
		}
	}
}

int Criterion::getSize()
{
	return size;
}

void Criterion::setSize(int size)
{
	this->size = size;
}




Criterion::~Criterion()
{
	while (!__Processors__.empty()) delete __Processors__.front(), __Processors__.pop_front();
}



void Criterion::distripute(std::list<process> mylist)
{
	std::list<process>::iterator iter1;
	std::list<Processor*>::iterator iter2 = __Processors__.begin();
	int i = 0;
	for (iter1 = mylist.begin(); iter1 != mylist.end(); ++iter1) {
		(*iter2)->__READY_QUEUE__.push(*iter1);
		//(*iter2)->print();
		iter2++;
		i++;
		iter2 = (i % size == 0) ? __Processors__.begin() : iter2;
	}

}

void Criterion::excute()
{
	std::cout << ((__Processors__.front())->__READY_QUEUE__).front().pid;
	for (int i = 0; i < 1000; i++)
	{
		std::list<Processor*> ::iterator iter;
		for (iter = __Processors__.begin(); iter != __Processors__.end(); ++iter)
		{
			if (!(*iter)->__READY_QUEUE__.empty())
			{
				int random = generateRandomNumber(1, 100);
				if (random >= 1 && random <= 15)
				{
					p_block->__BLOCK_LIST__.push_back((*iter)->__READY_QUEUE__.front());
					std::cout << (*iter)->__READY_QUEUE__.front().pid << std::endl;
					(*iter)->__READY_QUEUE__.pop();
				}
				else if (random >= 50 && random <= 60)
				{
					p_terminate->__TERMINATE__.push_back((*iter)->__READY_QUEUE__.front());
					(*iter)->__READY_QUEUE__.pop();
				}
			}
		}
	}
}

void Criterion::Block2Ready()
{
	std::list<process> ::iterator iter;

	for (iter = p_block->__BLOCK_LIST__.begin(); iter != p_block->__BLOCK_LIST__.end(); ++iter)
	{
		int random = generateRandomNumber(1, 100);
		if (random < 10)
		{
			this->distripute(p_block->__BLOCK_LIST__);
		}
	}

}


