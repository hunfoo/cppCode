#include <iostream>
#include "technician.h"
#include "manager.h"
#include "salesman.h"
#include "salesmanager.h"
#include "employee.h"
#include <typeinfo>


using namespace std;

int main()
{
//    Technician  tech;
//    tech.calcSalary();
//    tech.disInfo();

//    Manager  man;
//    man.calcSalary();
//    man.promote();
//    man.disInfo();

//    SalesMan  sm;
//    sm.calcSalary();
//    sm.promote();
//    sm.disInfo();

//    SalesManager  smg;
//    smg.calcSalary();
//    smg.promote();
//    smg.disInfo();


    Employee * emp[] = {new Technician,new Manager,new SalesMan,new SalesManager};
    for(int i=0; i<sizeof(emp)/sizeof(emp[0]); i++)
    {

        emp[i]->init();
        if(typeid(*emp[i]) == typeid(Manager))
        {
            Manager *t = dynamic_cast<Manager*>(emp[i]);
            t->addFixSalary(30000);
        }

        emp[i]->calcSalary();
        emp[i]->promote();
        emp[i]->disInfo();
    }

    for(int i=0; i<4; i++)
    {
        delete emp[i];
    }

    return 0;
}

//以前不平， 找平
//由平，找不平的东西。

