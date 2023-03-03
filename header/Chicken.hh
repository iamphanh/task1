#include <cstdlib>
#include <cstddef>
#include <iostream>



class Egg;
class Chicken {
public:
    //Chicken(){};
	Chicken(): creator(NULL){}
	Egg * creator;
	Egg * getCreator(){
		if (!creator) exit(1);
		return creator;
	};
};




