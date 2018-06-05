#ifndef SAYSTRATEGY2_H
#define SAYSTRATEGY2_H

#include "isaybehavior.h"
#include <iostream>

using namespace std;

class SayStrategy2: public ISayBehavior
{
public:
    SayStrategy2();
    void say();
};

#endif // SAYSTRATEGY2_H
