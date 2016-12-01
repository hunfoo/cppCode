
#include "cat.h"
#include <iostream>
using namespace std;

Cat::Cat()
{
    cout<<"Cat()"<<endl;
}
Cat::~Cat()
{
    cout<<"~Cat()"<<endl;
}

void Cat::voice()
{
    cout<<"i am cat : miao miao miao "<<endl;
}
