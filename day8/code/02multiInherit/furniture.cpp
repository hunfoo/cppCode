#include "furniture.h"
#include <iostream>
using namespace std;

Furniture::Furniture(float l, float wi, float we)
    :len(l),wid(wi),weight(we)
{

}


void Furniture::discript()
{
    cout<<"len = "<<len<<endl;
    cout<<"wid = "<<wid<<endl;
    cout<<"weight = "<<weight<<endl;
}
