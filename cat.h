#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include <iostream>

using namespace std;


class Cat: public Animal
{
public:
    Cat();
    void display();
};

#endif // CAT_H
