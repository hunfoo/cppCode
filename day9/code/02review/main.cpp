#include <iostream>

using namespace std;

//virtual 解决了，多个父类中有相同成员(数据成员和成员函数)，在子类中形成冗余。给访问带来了不便。
//从诸多父类中，提取公因式，把相同的类成员提到祖父类中去，分别令父类虚继承自，祖父类。然后，子类正常
//继承自父类，此时，子类中无冗余信息，访问亦方便。

class M
{
public:
    M(int m):a(m){}
protected:
    int a;
};



class A:virtual public M
{
public:
    A(int i):M(i){}

};
class B:virtual public M
{
public:
    B(int j):M(j){}

};
class C:public A, public B
{
public:
    C(int m ):A(m),B(m),M(m){}
    void func()
    {
        cout<<a<<endl;
    }
};

int main()
{
    C c(100);
    c.func();
    return 0;
}

