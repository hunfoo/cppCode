#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
    }

    void foo()
    {
        this->func();
    }

    virtual void func()
    {
        cout<<"aaaaaaaaaaaaaaa"<<endl;
    }
    ~A()
    {
    }

};
class B:public A
{
public:
    B()
    {

    }
    void func()
    {
        cout<<"bbbbbbbbbbbbbbbbb"<<endl;
    }
};


int main()
{
    B b;
    b.foo();
    return 0;
}

