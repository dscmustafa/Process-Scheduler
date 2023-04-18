#include "wrapper.h"

Wrapper::Wrapper()
{
	p_scheduler = new Scheduler;
	p_gui = new GUI;
	//p_criterion = new Criterion;
}


GUI* Wrapper::getGUI() const
{
	return p_gui;
}

Scheduler* Wrapper::getScheduler() const
{
	return p_scheduler;
}

void Wrapper::Run()
{
	p_gui->setfile();
	std::string file = p_gui->getfile();
	p_scheduler->fetch(file);
	p_scheduler->fill();
	p_scheduler->print();
	p_criterion = new Criterion(p_scheduler->nFCFS, p_scheduler->nSJF, p_scheduler->nRR);
	p_criterion->distripute(p_scheduler->__NEW_PROCESSES__);
	p_criterion->excute();
	p_criterion->p_block->print();
	p_criterion->p_terminate->print();
	p_criterion->Block2Ready();
	std::cout << "From Block after sending to Ready" << std::endl;
	p_criterion->p_block->print();
}


Wrapper::~Wrapper()
{
	delete p_gui;
	delete p_scheduler;
	delete p_criterion;
}



