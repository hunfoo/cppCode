#include <iostream>
#include <typeinfo>

using namespace std;


class CCApplication
{
public:
    CCAppdelegate()
    {
        sm_shared_pointer = this;
    }


public:
    static CCApplication *sm_shared_pointer;
};
CCApplication * CCApplication::sm_shared_pointer;

class CCAppdelegate:public CCApplication
{

};
int main()
{
    CCAppdelegate app;

    CCApplication *pa = &app;
    int *p = 0x12345678;
}

#if 0
class A
{
public:
    A()
    {
        cout<<this<<endl;
        cout<<typeid(this).name()<<endl;
        this->a;
    }
    int a;
};
class B:public A
{
public:
    B()
    {
        cout<<this<<endl;
        cout<<typeid(this).name()<<endl;
        this->a;
        this->b;
    }
    int b;
};
class C:public B
{
public:
    C()
    {
        cout<<this<<endl;
        cout<<typeid(this).name()<<endl;
        cout<<"&a"<<&a<<endl;
        cout<<"&b"<<&b<<endl;
        cout<<"&c"<<&c<<endl;
        this->a;
        this->b;
        this->c;

    }
    int c;
};

int main()
{
    C  c;
    A *pa = &c;
    return 0;
}
#endif
