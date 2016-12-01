#include <iostream>
using namespace std;
void g()
{
    double a;
    try
    {
        throw a;
    }catch(char)
    {
        cout<<"catch g()"<<endl; //throw
    }
    cout<<"end g()"<<endl;
    return ;
}
void h()
{
    try{
        g();
    }catch(int)
    {
        cout<<"catch h()"<<endl;
    }
    cout<<"end h()"<<endl;
}
void f()
{
    try{
        h();
    }catch(char)
    {
        cout<<"catch f()"<<endl;
    }
    cout<<"end f()"<<endl;
}


void func(int a)  throw()
{
    if(a>1)
        throw (int)a;
    if(a>1)
        throw  (float)a;
    if(a == 1)
        throw  (double)a;
}

int main()
{
    try
    {
        func(1);
    }catch(int e)
    {

    }catch(float e)
    {

    }catch(double e)
    {

    }

    return 0;
}
