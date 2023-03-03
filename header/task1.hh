#ifndef TASK1_H
#define TASK1_H
#include "Zoo.hh"

enum Type {
    Person,
    Animal
};

struct Animal;

struct Person {
    const char * name;
    const int age;
};

void hard_work();
void chicken_and_egg();
void pets();
#endif