#include <iostream>
#include <memory>

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

    void func()
    {
        cout<<"alsdjflaksdflasd"<<endl;
    }

};

//new A 被 ptr托管以后， 不需要再关心delete的问题。delete 在ptr 离开其栈空间的时候发生。
//对象的行为表现像一个指针。()  ->  *

class Smt
{
public:
    Smt(A* p)
    {
        ptr = p;
    }

    ~Smt()
    {
        delete ptr;
    }

    A* operator->()
    {
        return ptr;
    }

    A& operator*()
    {
        return *ptr;
    }

private:
    A * ptr;

};

void foo()
{
//    auto_ptr<A>  ptr(new A);   // auto_ptr类模板   auto_ptr<A> 模板类

//    ptr->func();
//    (*ptr).func();

    Smt  smt(new A);
//    smt.ptr->func();
//    (*smt.ptr).func();
    smt->func();   smt->func();      // a.operator+();   a +;
    (*smt).func();  (*smt).func();

}

int main()
{
    foo();
    return 0;
}

