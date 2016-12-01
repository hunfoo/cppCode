#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"

class Manager:virtual public Employee
{
public:
    Manager();
    void init();

    void calcSalary();
    void promote();
    void disInfo();

    void addFixSalary(float addAmount)
    {
        fixSalary += addAmount;
    }

   virtual ~Manager(){}
protected:
    float fixSalary;
};

#endif // MANAGER_H
