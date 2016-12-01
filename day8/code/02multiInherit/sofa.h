#ifndef SOFA_H
#define SOFA_H

#include "furniture.h"

class Sofa:virtual public Furniture
{
public:
    Sofa(float l, float wi,float we);

    void sit();

};

#endif // SOFA_H
