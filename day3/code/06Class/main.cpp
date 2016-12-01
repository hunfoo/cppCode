#include <iostream>
#include "date.h"

using namespace std;

//权限控制         private  protected  public
//数据和行为在一起
//对内开放数据，逻辑抽象   对外提供接口
//类   类对象  对象，调用行为完成需求。

// 声明和实现要分开

using namespace Space;


int main()
{
    Date d;
    d.init();
    d.print();


    if(d.isLeapYear())
        cout<<d.getYear()<<" is leap year"<<endl;
    else
        cout<<d.getYear()<<" is not leap year"<<endl;


    return 0;
}

