#ifndef TECHNICIAN_H
#define TECHNICIAN_H
#include "employee.h"

class Technician:public Employee
{
public:
    Technician();
    virtual void init();
    virtual void calcSalary() ;
    virtual void promote() ;
    virtual void disInfo() ;
    virtual ~Technician(){}
private:
    int hourAmount;
    float moneyPerHour;
};

#endif // TECHNICIAN_H
