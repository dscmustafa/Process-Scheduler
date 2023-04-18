#include "terminate.h"

#include <iostream>

void Terminate::print()
{
	std::cout << "From Terminate print" << std::endl;
	if (!__TERMINATE__.empty())
	{
		for (auto element : __TERMINATE__)
		{
			std::cout << "========*======={" << element.pid << "}========*=======" << std::endl;
		}
	}
	else
	{
		std::cout << "Empty Block print" << std::endl;

	}
}
