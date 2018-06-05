#include "cat.h"

Cat::Cat()
{
    S = new SayStrategy2();
}

void Cat::display()
{
    cout<<"This is a cat"<<endl;
}
