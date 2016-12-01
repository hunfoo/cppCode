#include "technician.h"

Technician::Technician()
{

}

void Technician::init()
{
    cout<<"请输入技术人员的姓名:";
    cin>>name;
    cout<<"请输入技术人员的工时:";
    cin>>hourAmount;
    moneyPerHour = 100;
}


void Technician::calcSalary()
{
    salary = hourAmount *moneyPerHour;
}

void Technician::promote()
{
    grade = 3;
}

void Technician::disInfo()
{
    cout<<"姓名："<<name<<endl;
    cout<<"工号: "<<num<<endl;
    cout<<"级别: "<<grade<<endl;
    cout<<"薪水: "<<salary<<endl;
    cout<<"---------------------"<<endl;
}
