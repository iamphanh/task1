
#include<iostream>
#include "Worker.hh"
#include "act.hh"
#include "start.hh"
#include "stop.hh"


void prepare_one()
{
	bool prepared = true;
    Part1 = 0x11;
}

void work_one()
{
	start();
	Worker* w = new Worker;
	extern int GoodWork;
	if ( GoodWork == ( w->part1() + w->part2() + w->part3() ) )
	{
		act( "one" );
	}
	stop();
}
