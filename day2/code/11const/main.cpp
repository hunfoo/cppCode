#include <iostream>

using namespace std;

#define N  200  //宏，在预处理的发生了替换

//const 永远不会发生改变


int main()
{
    const int a = 200; //编译阶段发生了替换
    int b  = 10;
    int c;
    c = b + 200;


    return 0;
}

