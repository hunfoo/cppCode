#include <iostream>

using namespace std;


#if 0

1, const 修饰数据成员   成员函数   类对象

2，修饰数据成员时候
    初始化位置只能在  参数列表里面
    被const 修饰的数据成员，不能被修改。

3，修饰成员函数
    位置 函数声明之后，实现体之前。要求在声明和定义处都要有const 修饰
    意义: const 函数承诺， 不会修改数据成员。
    能访问const 和非const 数据成员 但不能修改 非const 数据成员
    只能访问 const 成员函数。

    构成重载
    const 对象只能调用const 成员函数。
    非const 成员对象，优先调用非const 成员函数，若无，则可调用const 成员函数。

4，修饰类对象

   const 修饰函数，是从函数的层面，不修改数据。
   const 修饰对象，是从对象的层面，不修改数据, 只能调用const 成员函数。
              ;

#endif




class A
{
public:
    A(int v)
        :val(v)
    {
        a = 200;
    }

    void  dis( ) const;       // int const const int
    void  dis( );             // int const const int


    virtual void print();


private:
    const int val;
    int x, y;


    static  int a;
};

int A::a = 0;

void A::print()
{
    x = 100;
    y = 200;
}

void  A::dis( ) const                 // int const const int
{
    cout<<" void  dis( ) const "<<endl;
}


void  A::dis( )                  // int const const int
{
    cout<<" void  dis( ) "<<endl;
}

int main()
{
    A a(5);
    a.dis();
    return 0;
}

