#include <cstdio>
#include <cstddef>

#include <iostream>
#include "task1.hh"
#include "12.hh"
#include "Zoo.hh"
#include "Worker.hh"


void hard_work()
{
    GoodWork = 0x77;
	prepare_one();
	work_one();
	GoodWork = 0xEE;
	prepare_two();
	work_two();
}

void chicken_and_egg()
{
	using Zoo::Chicken;
	typedef Zoo::Egg Egg;
	Chicken chicken;
	Egg egg;
	chicken.creator = &egg;
	egg.creator = &chicken;
	Egg* e = chicken.getCreator();
	Chicken* c = egg.getCreator();
	if( chicken.creator == c->creator 
		&& egg.creator == e->creator )
	{
		using namespace std;
		cout << "the `Chicken and Egg' dilemma is solved!" << endl;
	}
}


void pets()
{
	using namespace Zoo;
	Cat cat;
	Dog dog;
	Pet & myCat = cat;
	Pet & myDog( dog );
	using namespace std;
    cout << "myCat says '" << myCat.say() << "', knows " << (myCat.gnaw() ? "no" : "every") << "thing and has " 
	         << myCat.getLifes() << " lifes" << endl;
    cout << "myDog says '" << myDog.say() << "', knows " << (myDog.gnaw() ? "no" : "every") << "thing and has " 
	        << myDog.getLifes() << " lifes" << endl;
}

int main( int argc, char** argv )
{   
	Type type = argc ? Person : Animal;
	Person fry;
	if( Person == type )
		fry = { "Fry" , 26 };
	hard_work();
	chicken_and_egg();
	pets();
}