#include <iostream>
#include "dog.h"
#include "cat.h"

using namespace std;

int main()
{

#if 0
    Dog  dog;
    dog.voice();

    Cat  cat;
    cat.voice();


    Animal  *ani = &dog;

    ani->voice();
    ani = &cat;
    ani->voice();

#endif


    Animal  * ani = new Dog;
    ani->voice();

    delete ani;
    return 0;
}

