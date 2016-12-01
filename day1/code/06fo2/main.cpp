#include <iostream>

using namespace std;

//函数重载(静多态)
//函数名相同， 参数列表不同， 类型，个数，顺序

//返值类型不够成重载条件

//匹配原则
//1,严格匹配，2，隐式转化 double int float   int long double

long print(long a)
{
    cout<<a<<endl;
    printf("void print(int a)\n");
}

double print(int a)
{
    cout<<a<<endl;
    printf("void print(float a)\n");
}

//void print(char b)
//{
//    printf("void print(char b)\n");
//}

//void print(int a, char b)
//{
//    printf("void print(int a, char b)\n");
//}

//void print(char a, int b)
//{
//    printf("void print(char a, int b)\n");
//}

int main()
{
//    print((double)1); //signed int   int long double
//    print('a');  //A  a
//    print(3.4);  //  int a = 4.5;  double  int float

//    print("china");

//    long a = print(1);
//    double b = print(1);


    print(1);


    return 0;
}

