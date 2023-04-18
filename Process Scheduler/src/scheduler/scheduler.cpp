#pragma once
#include "scheduler.h"

void Scheduler::fetch(std::string file)
{
	std::string filename = "F:\\Spring 2023\\CIE 205\\Process Scheduler\\Process Scheduler\\docs\\" + file;
	std::ifstream input(filename.c_str());
	if (input.fail())
	{
		std::cout << "File does not exist" << std::endl;
		std::cout << "Exit program" << std::endl;
	}
	input >> nFCFS >> nSJF >> nRR;
	input >> slice_time;
	input >> RTF >> maxW >> STL >> forkP;
	input >> nprocess;

	std::cout << nFCFS << " " << nSJF << " " << nRR << std::endl;
	std::cout << slice_time << std::endl;
	std::cout << RTF << " " << maxW << " " << STL << " " << forkP << std::endl;
	std::cout << nprocess << std::endl;
	std::string sp;
	std::getline(input, sp);
	for (int i = 0; i < nprocess; i++)
	{
		std::getline(input, data[i]);
		std::cout << data[i] << std::endl;
	}
	input >> nkill;
	std::cout << nkill << std::endl;

	std::getline(input, sp);
	for (int i = 0; i < nkill; i++)
	{
		std::getline(input, kill[i]);
		std::cout << kill[i] << std::endl;
	}
	std::cout << "==========================================" << std::endl;
	input.close();
}


void Scheduler::fill()
{
	//std::string input = "abc,def,ghi";
	//std::istringstream ss(input);
	//std::string token;

	//while (std::getline(ss, token, ',')) {
	//	std::cout << token << '\n';
	//}

	for (int i = 0; i < nprocess; i++)
	{
		std::string input = data[i];
		std::istringstream ss(input);
		std::string token;

		std::string temp[20];
		int j = 0;
		while (std::getline(ss, token, '-') && j < 20) {
			temp[j] = token;
			//std::cout << temp[j];
			j++;
		}
		//std::cout << std::stoi(temp[0]) << std::endl;
		process tempProcess;
		tempProcess.arrival_time = std::stoi(temp[0]);
		tempProcess.pid = std::stoi(temp[1]);
		//std::cout << tempProcess.arrival_time << std::endl;
		tempProcess.cpu_time = std::stoi(temp[2]);
		tempProcess.num_io = std::stoi(temp[3]);
		for (int k = 4; k < tempProcess.num_io + 4; k++)
		{
			int* pair;
			pair = extractIntegerWords(temp[k]);
			tempProcess.IOR[k - 4] = pair[0];
			tempProcess.IOD[k - 4] = pair[1];
			std::cout << tempProcess.IOR[k - 4] << "==>" << tempProcess.IOD[k - 4] << std::endl;
		}
		std::cout << "=====================" << std::endl;
		__NEW_PROCESSES__.push_back(tempProcess);
	}
}




void Scheduler::print() const
{
	for (auto element : __NEW_PROCESSES__)
	{
		std::cout << "==============={" << element.pid << "}===============" << std::endl;
	}
}
