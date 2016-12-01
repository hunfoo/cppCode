#include <iostream>

using namespace std;

//函数(全局，也可类的成员函数)可以作友元，称为友元函数。



class A
{
public:
    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    int getZ()
    {
        return z;
    }
    friend  void dis(A & t);

    void dis()
    {
        cout<<x<<y<<z<<endl;
    }


private:
    int x;
    int y;
    int z;

};



void dis(A & t)
{
    cout<<t.x<<t.y<<t.z<<endl;
}




int main()
{
    A  a;
    B  b;
    for(int i=0; i<1000; i++)
        b.dis(a);
    return 0;
}

