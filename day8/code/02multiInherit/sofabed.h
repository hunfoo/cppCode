#ifndef SOFABED_H
#define SOFABED_H

#include "sofa.h"
#include "bed.h"

class Sofabed:public Sofa, public Bed
{
public:
    Sofabed(float len, float wi, float we);
};

#endif // SOFABED_H
