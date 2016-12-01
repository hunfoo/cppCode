#include <iostream>

using namespace std;

//出现了冗余信息，给调用都带很大的不便利。
//要解决的问题：第一：实现Z类中数据只有一份，第二：数据访问便利。

//提取相同数据到一个共同M类中去,然后让被提取公因式的类，分别虚继承自公共类(M)

//class　Ｍ　　虚基类　虚继承

class M
{
public:
    M(int d):
        _d(d){}
    void func()
    {
        cout<<"mmmmm"<<endl;
    }
    int _d;
};

class X:virtual public M
{
public:
    X(int x):M(x){}
    void setData(int d)
    {
        _d = d;
    }
};


class Y:virtual public M
{
public:
    Y(int y):M(y){}

    int getData()
    {
        return _d;
    }

};


class Z:public X, public Y
{
public:
    Z():M(100),X(1),Y(2){}
    void dis()
    {
        cout<<X::_d<<endl;
        cout<<Y::_d<<endl;
        cout<<_d<<endl;
        func();
    }

};


int main()
{
    Z z;
    z.dis();


    return 0;
}

