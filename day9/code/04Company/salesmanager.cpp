#include "salesmanager.h"

SalesManager::SalesManager()
{

}

void SalesManager::init()
{
    cout<<"请输入销售经理的姓名:";
    cin>>name;

    cout<<"请输入销售人员的当月销售额:";
    cin>>monthSaleAmount;
    fixSalary = 5000;
    rate = 0.05;
}

void SalesManager::calcSalary()
{
    salary = fixSalary + monthSaleAmount * rate;
}

void SalesManager::promote()
{
     grade  = 3;
}

void SalesManager::disInfo()
{
    cout<<"姓名："<<name<<endl;
    cout<<"工号: "<<num<<endl;
    cout<<"级别: "<<grade<<endl;
    cout<<"薪水: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}

