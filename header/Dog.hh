#ifndef DOG_H
#define DOG_H
#include"Pet.hh"

class Dog : public Pet
{
public:
     Dog() {};
     ~Dog(){}
	 virtual const char * say() { return "bow-wow" ; }
	 virtual bool gnaw() { return true; } 
protected:
     int lifes() { return 1; }
};

#endif//DOG_H
