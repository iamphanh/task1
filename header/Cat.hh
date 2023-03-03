#ifndef CAT_H
#define CAT_H
#include "Pet.hh"

class Cat : public Pet 
{
public:
     Cat(){};
	 ~Cat(){}
	 virtual const char * say() { return "miaow" ; }
	 virtual bool gnaw() { return false; }
protected:
	 virtual int lifes() { return 9; }
};

#endif//CAT_H

