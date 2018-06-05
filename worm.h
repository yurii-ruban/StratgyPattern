#ifndef WORM_H
#define WORM_H

#include "animal.h"
#include <iostream>

using namespace std;

class Worm: public Animal
{
public:
    Worm();
    void display();
};

#endif // WORM_H
