#ifndef SAYSTRATEGY1_H
#define SAYSTRATEGY1_H

#include "isaybehavior.h"
#include <iostream>

using namespace std;

class SayStrategy1: public ISayBehavior
{
public:
    SayStrategy1();
    void say();
};

#endif // SAYSTRATEGY1_H
