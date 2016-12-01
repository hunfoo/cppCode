#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout<<this<<" constructor"<<endl;
    }
    ~A()
    {
        cout<<this<<" destructor"<<endl;
    }

    A(const A & another)
    {
        cout<<this<<" cpy constructor from "<<&another<<endl;
    }

    A & operator=(const A & another)
    {
        cout<<this<<" operator= "<<&another<<endl;
    }
};

//拷贝构造发生的时机。
//1,构造新对象 A a ; A b= a;
//2,传参或返回对象

//对于普通变量来说，传引用效果不明显。
//对于类对象而言，传对象效率很高。
//传引用等价于，扩大了原对象的作用域。


//栈上的对象是可以返回的，但不能返回栈上的引用 (除非对象本身)




#if 0
A func(A &a)
{
    return a;
}


int main()
{
    A  x;

    A  t;

    t = func(x);
    cout<<"&t "<<&t<<endl;

    return 0;
}

#endif


A& func()
{
    A b;
    return b;
}


int main()
{
    A t ;
    t = func();
    cout<<"&t "<<&t<<endl;

    return 0;
}

