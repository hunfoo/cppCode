#include <iostream>
#include <string.h>

using namespace std;


//静多态
//编译阶段
//函数名相同，参数列表不同(类型，个数，顺序)
//返值类型不能作为重载的标志

//严格匹配  隐式转化
// double int float    int long double  ambiguous

extern "C"
{
void func(int a) // void func_i(int a)
{

}

void func(int a, char b) // void func_ic(int a, char b)
{

}

}

int main()
{
    func(10);    //func_i(10);
    func(10,'a');//func_ic(10,'a');
    return 0;
}

