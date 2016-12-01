#ifndef SALESMAN_H
#define SALESMAN_H
#include "employee.h"


class SalesMan: virtual public Employee
{
public:
    SalesMan();
    void init();
    void calcSalary();
    void promote();
    void disInfo();
    virtual ~SalesMan(){}
protected:
    float monthSaleAmount;
    float rate;
};

#endif // SALESMAN_H
