#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog()
{
    cout<<"Dog()"<<endl;
}
Dog::~Dog()
{
    cout<<"~Dog()"<<endl;
}


void Dog::voice()
{
    cout<<"iam a dog :wang wang wang wang "<<endl;
}
