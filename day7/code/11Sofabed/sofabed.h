#ifndef SOFABED_H
#define SOFABED_H

#include "bed.h"
#include "sofa.h"


class SofaBed:public Bed,public Sofa
{
public:
    SofaBed();
};

#endif // SOFABED_H
