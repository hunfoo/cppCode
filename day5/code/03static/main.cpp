#include <iostream>

using namespace std;

#if 0
static
全局变量 外延性 static  作用域 仅限于本文件

局部变量 auto           生命周期 存储位置
#endif

#if 0
static 在类内部的表现，用来实现族类对象间的数据共享。

在生成对象的时候，普通数据员才有空间。而 static 成员在类志明的时候，就己经开辟了空间(data rw)

static 数据成员，既属于类，也属于对象，但终归于类。

类其实本质上也是一个命名空间


1，初始化
   类内定义，类外初始化。 type 类名:: 变量名=初值
2，static 数据成员，既属于类，也属于对象，但终归于类。



;
#endif

namespace Space
{
    int share = 1111;
}

class A
{
public:
    void func()
    {
        cout<<share<<endl;
    }
    void modify(int m)
    {
        share = m;
    }


    int x; int y;
    static int share;
};

int A::share = 100;


int main()
{
//    A  a,b,c;
//    a.func();
//    a.modify(2000);
//    b.func();
//    c.func();

    cout<<A::share<<endl;
    A a;
    a.func();

    cout<<Space::share<<endl;
    return 0;
}

