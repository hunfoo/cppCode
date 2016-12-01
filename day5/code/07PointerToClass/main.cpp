#include <iostream>

using namespace std;


#if 0

int a;
int * p = &a;
void func();
void (*pf)() = &func;

//指向类成员的指针
//类    数据成员  函数成员

 成员类型 类名::  *指针名  = &类名::成员名

 函数返回类类型（类名::*函数指针名）（参数列表） = &类名::成员函数名

//对象
.*  ->*
  对象.*数据成员指针
  对象指针->*数据成员指针

 (对象.*成员函数指针)()
 (对象指针->*成员函数指针)()

#endif



class Stu
{
public:
    Stu(string sn, int ia):
        name(sn),age(ia){}
    void print()
    {
        cout<<name<<"--"<<age<<endl;
    }

public:
    string name;
    int age;
};


int main()
{
    Stu  s1("zhaosi",39);
    Stu  s2("aobaniu",79);

    Stu * pp = new Stu("nigulasikaiqi.zhaosi",60);

    string Stu::*pn  =  &Stu::name;

    cout<<s1.name<<s2.name<<endl;
    cout<<s1.*pn<<s2.*pn<<endl;      //  .* 在一起
    cout<<pp->*pn<<endl;




    void (Stu::*pf)() = &Stu::print;    //(*pf)();

    s1.print(); s2.print();
    (s1.*pf)();   (s2.*pf)();

    (pp->*pf)();   .*   ->*


    return 0;
}

