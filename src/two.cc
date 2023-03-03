#include <iostream>
#include "Worker.hh"
#include "act.hh"
#include "start.hh"
#include "stop.hh"


void prepare_two()
{
	bool prepared = true;
	Part1 = 0x88;
}

void work_two()
{
	start();
	Worker* w = new Worker;
	extern int GoodWork;
	if (GoodWork == ( w->part1() + w->part2() + w->part3() ) )
	{
		act( "two" );
	}
	stop();
}