#ifndef PET_H
#define PET_H

class Pet
{
public:
    Pet(){};
	~Pet(){}
	virtual const char * say() = 0;
	virtual bool gnaw() = 0;
	int getLifes() { return lifes(); }
protected:
	friend void pets();
	virtual int lifes() = 0 ; 
};

#endif//PET_H
