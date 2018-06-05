#ifndef LYNX_H
#define LYNX_H

#include "animal.h"
#include <iostream>

using namespace std;

class Lynx: public Animal
{
public:
    Lynx();
    void display();
};

#endif // LYNX_H
