#include "lynx.h"

Lynx::Lynx()
{
    S = new SayStrategy2();
}

void Lynx::display()
{
    cout<<"This is a lynx"<<endl;
}
