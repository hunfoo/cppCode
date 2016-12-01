
#include "salesman.h"


SalesMan::SalesMan()
{

}

void SalesMan::init()
{
    cout<<"请输入销售的姓名:";
    cin>>name;
    cout<<"请输入销售人员的当月销售额:";
    cin>>monthSaleAmount;
    rate = 0.04;
}

void SalesMan::calcSalary()
{
    salary = monthSaleAmount * rate;
}
void SalesMan::promote()
{
    grade = 1;
}

void SalesMan::disInfo()
{
    cout<<"姓名："<<name<<endl;
    cout<<"工号: "<<num<<endl;
    cout<<"级别: "<<grade<<endl;
    cout<<"薪水: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}

