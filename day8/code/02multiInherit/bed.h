#ifndef BED_H
#define BED_H

#include "furniture.h"

class Bed:virtual public Furniture
{
public:
    Bed(float l, float wi, float we);
    void sleep();

};

#endif // BED_H
