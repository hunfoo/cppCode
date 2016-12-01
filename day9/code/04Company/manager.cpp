
#include "manager.h"

Manager::Manager()
{

}

void Manager::init()
{
    cout<<"请输入经理的姓名:";
    cin>>name;
    fixSalary = 8000;
}

void Manager::calcSalary()
{
    salary = fixSalary;
}

void Manager::promote()
{
    grade = 4;
}

void Manager::disInfo()
{
    cout<<"姓名："<<name<<endl;
    cout<<"工号: "<<num<<endl;
    cout<<"级别: "<<grade<<endl;
    cout<<"薪水: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}

