#include "dog.h"

Dog::Dog()
{
    S = new SayStrategy1();
}

void Dog::display()
{
    cout<<"This is a dog"<<endl;
}


