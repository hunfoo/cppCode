#include <iostream>

using namespace std;

//static_cast upcast downcast
//dynamic_cast 只有含有虚函数的父子类中。downcast, 是不是得到其目标类型，
//如果是返回其指针，如果不是，返回null


class A
{
public:
    virtual ~A()
    {}

};
class B:public A
{

};
class C:public A
{
public:
    void func();
};
class D
{

};

int main()
{
    B  b;
    A *pa = &b;

#if 0
    B* pb  = dynamic_cast<B*>(pa);  //成功
    cout<<pb<<endl;
    C* pc  = dynamic_cast<C*>(pa);  //成功  安全
    if(pc != NULL)
        cout<<pc<<endl;
    D *pd = dynamic_cast<D*>(pa);    //成功 安全
    if(pd != NULL)
        cout<<pd<<endl;

    B * pb = static_cast<B*>(pa);     //成功
    cout<<pb<<endl;
    C * pc = static_cast<C*>(pa);     //成功  不安全
    cout<<pc<<endl;

    D * pd  = static_cast<D*>(pa);     //不成功 安全
    cout<<pd<<endl;
#endif
    //void *
    B * pb = reinterpret_cast<B*>(pa);     //成功   不安全
    cout<<pb<<endl;
    C * pc = reinterpret_cast<C*>(pa);     //成功   不安全
    cout<<pc<<endl;
    D * pd  = reinterpret_cast<D*>(pa);     //成功  不安全
    cout<<pd<<endl;

    return 0;
}



















