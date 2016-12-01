#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(int r=0, int i=0)
        :real(r),image(i){}

    Complex operator +( Complex & b)
    {
        Complex t;
        t.real = this->real + b.real;
        t.image = this->image + b.image;
        return t;
    }


    void dis()
    {
        cout<<"( "<<real<<","<<image<<" )"<<endl;
    }

private:
    int real;
    int image;
};


int main()
{
    Complex c1(1,2), c2(2,3);
    c1.dis();
    c2.dis();
    Complex c3 = c1.operator +(c2);  //c1 + c2;
    c3.dis();
    return 0;
}

