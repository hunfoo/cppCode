#include <iostream>

using namespace std;

class Widget
{

public:
    Widget()
    {
        pa[0] = &f;
        pa[1] = &g;
        pa[2] = &i;
        pa[3] = &j;
    }

    void select(int idx)
    {
        (this->*pa[idx])();
    }

private:
    void f() {cout<<"void f()"<<endl;}
    void g() {cout<<"void g()"<<endl;}
    void i() {cout<<"void i()"<<endl;}
    void j() {cout<<"void j()"<<endl;}

    enum {cnt=4};
    void (Widget::*pa[cnt])()= {f,g,i,j};
};

//void f() {cout<<"void f()"<<endl;}
//void g() {cout<<"void g()"<<endl;}
//void i() {cout<<"void i()"<<endl;}
//void j() {cout<<"void j()"<<endl;}

//void(*pa[])()= {f,g,i,j};

//指向类成员函数的指针

int main()
{
    Widget w;
    w.select(0);
    return 0;
}

