#include <iostream>

using namespace std;

void func(const int & rv)
{

}

int main()
{
#if 0
    // const 不可以改，也不可通过指针或引用去改变。
    const int a = 10;
    const int * p = &a;

    int b;
    const int *q = &b;

    const int x  =10;

    const int & rx = x;

    int y;
    const int & ry = y;
#endif

//    int a = 200;
//    const double &ra = a;
//    const int& rv =  200;
//    func(200 + a);


    int a = 200;

    int & ra = a;
    const double & rd  = a;

    a = 400;

    cout<<"a = "<<a<<endl;
    cout<<"ra = "<<ra<<endl;
    cout<<"rd = "<<rd<<endl;

    cout<<"&a = "<<&a<<endl;
    cout<<"&ra = "<<&ra<<endl;
    cout<<"&rd = "<<&rd<<endl;



    return 0;
}

