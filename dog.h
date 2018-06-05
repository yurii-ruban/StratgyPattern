#ifndef DOG_H
#define DOG_H

#include "animal.h"
#include <iostream>

using namespace std;

class Dog: public Animal
{
public:
    Dog();
    void display();
};

#endif // DOG_H
