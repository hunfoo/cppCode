#include <iostream>
#include <typeinfo>

using namespace std;
typedef void (*PF)(int);

class A
{
public:
    virtual ~A(){}
};
class B:public A
{

};

class C:public A
{

};

int main()
{
//    cout<<typeid(int).name()<<endl;
//    cout<<typeid(char).name()<<endl;
//    cout<<typeid(double).name()<<endl;
//    cout<<typeid(float).name()<<endl;
//    cout<<typeid(long).name()<<endl;
//    cout<<typeid(PF).name()<<endl;
//    cout<<typeid(const int* const ).name()<<endl;


    B b; C c;
//    cout<<typeid(b).name()<<endl;
//    A & ra = b;
//    cout<<typeid(ra).name()<<endl;


    A *pa = &b;
    if(typeid(pa) == typeid(B))
        cout<<typeid(pa).name()<<endl;
    if(typeid(*pa) == typeid(B))
        cout<<typeid(*pa).name()<<endl;



    return 0;
}

