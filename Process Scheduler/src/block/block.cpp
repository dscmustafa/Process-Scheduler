#include "block.h"

void Block::print()
{
	std::cout << "From Block print" << std::endl;
	if (!__BLOCK_LIST__.empty())
	{
		for (auto element : __BLOCK_LIST__)
		{
			std::cout << "==============={" << element.pid << "}===============" << std::endl;
		}
	}
	else
	{
		std::cout << "Empty Block print" << std::endl;

	}

}
