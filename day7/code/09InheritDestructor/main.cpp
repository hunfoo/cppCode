
#include <iostream>

using namespace std;


class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }

};

class Base
{
public:
    Base()
    {
        cout<<"Base()"<<endl;
        p = new char[100];
    }
    ~Base()
    {
        cout<<"~Base()"<<endl;
        delete p;
    }

private:
    char *p;
};

class Derive:public Base
{
public:
    Derive()
    {
        cout<<"Derive()"<<endl;
        q = new char[200];
    }
    ~Derive()
    {
        cout<<"~Derive()"<<endl;
        delete q;
    }
private:
    char *q;
};

int main()
{
    Derive d;
    return 0;
}

#if 0
overload重载  同一个作用域 函数名相同，参数列表不同(个数，类型，顺序)  希望发生
shadow        父子类中，只要函数相同，即可构成shadow                  不希望发生

#endif

