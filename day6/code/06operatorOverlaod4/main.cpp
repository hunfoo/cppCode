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
    friend ostream & operator<<(ostream &os,const Complex &c)
    {
         os<<"("<<c._x<<","<<c._y<<")"<<endl;
         return os;
    }


    friend istream & operator>>(istream &is, Complex &c)
    {
        is>>c._x; is>>c._y;
        return is;
    }


private:
    float _x;
    float _y;
};

int main()
{
    Complex c(1,2),c2(2,3);

//    cin>>c;
    operator>>(cin,c);
    cout<<c<<c2<<endl;
    //cout   c;  a + b;  a.operator+(b) cout.operator<<(c)
    // operator+(a,b)  operator<<(cout,c);

    operator<<(operator<<(cout,c),c2)<<endl;


    return 0;
}

