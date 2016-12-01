
#include "bed.h"
#include <iostream>
using namespace std;

Bed::Bed(float l, float wi, float we)
    :Furniture(l,wi,we)
{

}

void Bed::sleep()
{
    cout<<"go to bed and have a good sleep"<<endl;
}

