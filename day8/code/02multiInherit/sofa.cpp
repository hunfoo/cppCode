#include "sofa.h"
#include <iostream>
using namespace std;

Sofa::Sofa(float l, float wi, float we)
    :Furniture(l,wi,we)
{

}



void Sofa::sit()
{
    cout<<"have a seat and have a rest"<<endl;
}



