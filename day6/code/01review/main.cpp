#include <iostream>

using namespace std;


#if 0
const  数据成员 成员函数  类对象

数据成员，初始化 在构造器的参数列表，不能修改
成员函数，实始化位置 声明之后 实现体之前。
    承诺不会修改数据。可以访问const和非const的数据，但只能用const 成员函数。
类对象  ， 承诺不会修改数据。可以访问const和非const的数据，但只能用const 成员函数。

#endif



#if 0

static 数据成员

实现族类的数据共享
存储位置  data rw/bss  sizeof(A)   4;  初始化 在类外初始化
type  类名::变量名 = 初值。

类名::变量名    成员函数访问


static 成员函数

类名::成员函数   对象./->成员函数   this指针

只能调用static 数据和成员函数。
;


const static     就地实始化
#endif


#if 0
指向类 的成员的指针
数据成员


;
#endif



//(this->*pa[idx])();

class B
{
public:
    void func()
    {
        cout<<"void func()"<<endl;
    }

    string name;


};


int main()
{
   string B:: *ps =  &B::name;  // 从类的起始地址的偏移量

   B  b;  B *pb = new B;
   b.*ps = "china"; cout<<b.*ps<<endl;
   pb->*ps = "canada"; cout<<pb->*ps<<endl;


   void (B::*pf)(void)  =  B::func;

   (b.*pf)();   // .*  ->*
   (pb->*pf)();



    return 0;
}
















class A
{
public:
    A()
    {

    }
    static void func(){


    }

    void print()
    {
       cout<<"void print()"<<endl;
       cout<<a<<endl;
    }

private:
    int a;
    static int b;

};

int main1()
{
    A::func();
    return 0;
}

