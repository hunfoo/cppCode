#include <iostream>

using namespace std;

//定义和声明一体，默认参数定义和声明一体

//声明在前，定义在后。  默认参数在声明而不在定义。

void func(int a, int b = 10);

int main()
{
    func(1,10);  //对同一个函数，不要即实现重载，默认参数
    return 0;
}

void func(int a, int b )
{

}

