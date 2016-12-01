#include <iostream>

using namespace std;

class Base
{
public:
     virtual void f(){cout<<"Base::f()"<<endl;}
     virtual void g(){cout<<"Base::g()"<<endl;}
     virtual void h(){cout<<"Base::h()"<<endl;}

private:
     int a;
};

typedef void (*Pfunc)(void);

int main()
{
    Base b;
    cout<<sizeof(Base)<<endl;
    cout<<sizeof(b)<<endl;

    cout<<"对象b的起始地址:"<<&b<<endl;
    cout<<"vtable的起始地址:"<<(int**)*(int*)(&b)<<endl;
    cout<<"vtable中第0个函数的地址:"<<*((int**)*(int*)(&b)+0)<<endl;
    cout<<"vtable中第1个函数的地址:"<<*((int**)*(int*)(&b)+1)<<endl;
    cout<<"vtable中第2个函数的地址:"<<*((int**)*(int*)(&b)+2)<<endl;
    cout<<"vtable中第3个函数的地址:"<<*((int**)*(int*)(&b)+3)<<endl;



    Pfunc  pf = (Pfunc)*((int**)*(int*)(&b)+0);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+1);
    pf();
    pf = (Pfunc)*((int**)*(int*)(&b)+2);
    pf();



    return 0;
}

