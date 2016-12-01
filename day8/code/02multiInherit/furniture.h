#ifndef FURNITURE_H
#define FURNITURE_H


class Furniture
{
public:
    Furniture(float l, float wi, float we);
    void discript();

protected:
    float len;
    float wid;
    float weight;
};

#endif // FURNITURE_H
