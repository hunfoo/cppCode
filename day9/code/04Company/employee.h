#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;


class Employee
{
public:
    Employee();
    virtual void init() = 0;
    virtual void calcSalary() = 0;
    virtual void promote() = 0;
    virtual void disInfo() = 0;
    virtual ~Employee(){}
protected:
    string name;
    int grade;
    int num;
    float salary;

protected:
    static int startNum;

};



#endif // EMPLOYEE_H
