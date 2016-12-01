#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(float x=0, float y=0)
        :_x(x),_y(y){}
    void dis()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }
    Complex& operator+=(const Complex &another);

private:
    float _x;
    float _y;
};

Complex& Complex::operator+=(const Complex &another)
{
    this->_x += another._x;
    this->_y += another._y;
    return *this;
}


int main()
{

#if 0
    int a = 10, b = 20, c = 30;
    a += b;
    b += c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"-----------------------"<<endl;
    Complex x(10,0),y(20,0),z(30);

    x += y;
    y += z;

    x.dis();
    y.dis();
    z.dis();


    int a = 10, b = 20, c = 30;
    a += b += c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"-----------------------"<<endl;
    Complex x(10,0),y(20,0),z(30);

    x += y += z;

    x.dis();
    y.dis();
    z.dis();
#endif

    int a = 10, b = 20, c = 30;
    (a += b) += c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"-----------------------"<<endl;
    Complex x(10,0),y(20,0),z(30);

    (x += y) += z;

    x.dis();
    y.dis();
    z.dis();



    return 0;
}

