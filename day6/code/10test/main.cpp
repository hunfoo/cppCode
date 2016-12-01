#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(float x, float y)
        :_x(x),_y(y){}

    Complex(float x)
    {
        _x = x;
        _y = 0;
    }

    operator int()
    {
        return (int)this->_x;
    }

    void dis()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }

    const Complex operator+(const Complex& another);


private:
    float _x;
    float _y;
};

const Complex Complex::operator+( const Complex & another)
{
    Complex t(0,0);
    t._x = this->_x + another._x;
    t._y = this->_y + another._y;

    return t;
}

int main()
{
    Complex c(1,2);
    Complex c2(100,0);
    c2 = c._x + 3.0f;

    int d;
    d  = 3 + c2;

    cout<<d<<endl;
    return 0;
}


int a;

const double& d = a;




