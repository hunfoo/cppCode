#include <iostream>
using namespace std;

#if 0
1,父类中有虚函数。
2,子类中覆写(override)父类的虚函数。
3,子类对象的地址赋给了父类的指针，并能过该指针用虚函数。
#endif


class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    virtual ~A()
    {
        cout<<"~A()"<<endl;
    }

    virtual void func() = 0;

};
class B:public A
{
public:
    void func()
    {
        cout<<"class B"<<endl;
    }
    B()
    {
        cout<<"B()"<<endl;
    }
    ~B()
    {
        cout<<"~B()"<<endl;
    }

};


int main()
{
    A *pa =  new B;

    delete pa;
    return 0;
}

