#ifndef SALESMANAGER_H
#define SALESMANAGER_H
#include "manager.h"
#include "salesman.h"


class SalesManager:public Manager,public SalesMan
{
public:
    SalesManager();
    void init();
    void calcSalary() ;
    void promote() ;
    void disInfo() ;
    virtual ~SalesManager(){}
};

#endif // SALESMANAGER_H
