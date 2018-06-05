#ifndef NOSAY_H
#define NOSAY_H

#include "isaybehavior.h"

#include <iostream>

using namespace std;

class nosay: public ISayBehavior
{
public:
    nosay();
    void say();
};

#endif // NOSAY_H
