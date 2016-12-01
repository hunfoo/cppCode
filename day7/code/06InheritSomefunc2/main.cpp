#include <iostream>
#include "student.h"
#include "graduate.h"

using namespace std;

int main()
{
    Student  s("zhaosi",34,150);
    s.dis();
    cout<<"---------------------"<<endl;

    Graduate  g("nengge",40,200,20000);
    g.print();
    cout<<"---------------------"<<endl;


    Graduate gg("laksdf",1,1,1);
    gg.print();

    gg = (g);
    gg.print();


    return 0;
}

