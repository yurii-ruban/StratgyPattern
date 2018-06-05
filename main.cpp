#include <iostream>
#include "animal.h"
#include "worm.h"
#include "dog.h"
#include "cat.h"
#include "lynx.h"

using namespace std;

int main()
{
    Animal* Tom = new Cat;
    Tom->display();
    Tom->say();
    cout<<"----------------------"<<endl;

    Animal* Rex = new Dog;
    Rex->display();
    Rex->say();
    cout<<"----------------------"<<endl;

    Animal* Katia = new Lynx;
    Katia->display();
    Katia->say();
    cout<<"----------------------"<<endl;

    Animal* Anton = new Worm;
    Anton->display();
    Anton->say();
    cout<<"----------------------"<<endl;

    return 0;
}
