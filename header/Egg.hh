#include <cstdlib>





class Chicken;
class Egg {
public:
    // Egg(){};
	Egg() : creator ( NULL){}
	Chicken * creator;
    Chicken * getCreator(){
        if (!creator) exit(1);
		return creator;
    };
};





