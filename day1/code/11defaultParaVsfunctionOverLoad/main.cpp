#include <iostream>

using namespace std;

//void print(int a)
//{
//    printf("void print(int a)\n");
//}
void print(int a, int b = 10)
{
    printf("void print(int a, int b = 10)\n");
}

int main()
{
    print(1,20);
    // 1个参数或是2个参数的形式，重载，默认参数 都是可以实现的。但不可同时存在。
    return 0;
}

