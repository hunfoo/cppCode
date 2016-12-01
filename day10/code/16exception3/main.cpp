#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"A constructor"<<endl;
    }
    A(const A & other)
    {
        cout<<" A(const A & other)"<<endl;
    }

    ~A()
    {
        cout<<"~A destructor"<<endl;
    }
};

int divide(int x, int y)
{

    if(y == 0)
        throw  A();
    return x/y;
}
int myDivide(int x, int y)
{
    divide(x,y) ;
}
int main()
{
    try{
        myDivide(4,0);
    }catch(int x){
        cout<<"x"<<endl;
        cout<<x<<endl;
    }catch(double y){
        cout<<"y"<<endl;
        cout<<y<<endl;
    }catch(A a){
        cout<<"no x, no y"<<endl;
    }
    return 0;
}
