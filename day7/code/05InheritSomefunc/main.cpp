#include <iostream>
#include "student.h"
#include "graduate.h"
#include "doctor.h"

using namespace std;

#if 1
//父类中如果有标配，重载或默认，把默认包含进来
//子类中可以不用显示的调用父类的构造器


//子类只需对父类负责，不需要对父类的父类负责。
//父类的父类，由父类负责


//类中的子对象的初始化  int age; float salary

//初始化顺序  父类初始化，类对象初始化  子类的初始化


class A
{
public:
    A(){cout<<"a"<<endl;}
};

class Father
{
public:
    Father(int i){
        cout<<"Father"<<endl;
    }

};
class Son:public Father
{
public:
    Son(int j):Father(j){
        cout<<"Son"<<endl;
    }
};

class GradSon:public Son
{
public:
    GradSon(int k):Son(k){
        cout<<"GradSon"<<endl;
    }

    A a;
};


#endif

int main()
{
    Student s("zhaosi",32,120);
    s.dis();
    cout<<"--------------------"<<endl;

    Graduate g("nengge",35,150,2000,1999,9,9);
    g.print();
    g.getBirthday();

    cout<<"--------------------"<<endl;
    Doctor  d("bigHead",23,200,20000,1999,9,9,"doctor,liu");

    d.dump();


    GradSon gs(2);




    return 0;
}

