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
//    friend Complex operator+(Complex & a, Complex & b);

    const Complex operator+(Complex& another);


private:
    float _x;
    float _y;
};

//Complex operator+(Complex & a, Complex & b)
//{
//    Complex  t;
//    t._x = a._x + b._x;
//    t._y = a._y + b._y;

//    return t;
//}

const Complex Complex::operator+(Complex& another)
{
    Complex t;
    t._x = this->_x + another._x;
    t._y = this->_y + another._y;

    return t;
}


int main()
{
    Complex c1(1,2) ,c2(2,3);

    Complex  c =c1 + c2;  //operator+(c1,c2); c1.operator+(c2);
    c1.dis();
    c2.dis();
    c.dis();


    int i,j,k;  (i+j) = k;

    (c1+ c2) = c;
    return 0;
}

#if 0
通常情况下：

单目 和 双目
单目:
重载为成员话，需要0个参数，重载为友元的时候需要1个参数


双目 （+）
重载为成员话，需要一个参数，重载为友元的时候需要两个参数
    friend Complex operator+(Complex & a, Complex & b);
    const Complex operator+(Complex& another);
#endif








