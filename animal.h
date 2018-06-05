#ifndef ANIMAL_H
#define ANIMAL_H

#include "isaybehavior.h"
#include "saystrategy1.h"
#include "saystrategy2.h"
#include "nosay.h"

#include <iostream>

using namespace std;

class Animal
{
public:
    Animal();
    virtual void say();
    virtual void display() =0;
    ISayBehavior* S;
};

#endif // ANIMAL_H
