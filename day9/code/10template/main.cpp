#include <iostream>

using namespace std;


#if 0
void Swap(int & a,int & b)
{
    int t = a;
    a = b;
    b = t;
}
void Swap(double &a, double&b)
{
    double t = a;
    a = b;
    b = t;
}
void Swap(long &a, long &b)
{
    long t = a;
    a = b;
    b = t;
}
#endif


//函数模板  根据具体的类型产生 模板函数
template<typename  T>
void Swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

int main()
{
    long a = 4;long b = 5;
    cout<<a<<b<<endl;
    Swap<long>(a,b);
    cout<<a<<b<<endl;
    return 0;
}

