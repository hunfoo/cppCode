#include <iostream>

using namespace std;

#if 0

学生  姓名， 年龄， 性别， 学号， 吃饭， 学习
老师  姓名， 年龄， 性别， 工号， 吃饭， 教学


              姓名， 年龄， 性别，吃饭                           父类  基类
                                                                 继承  派生
学生: 学号， 学习                        工号 ，教学 ：老师      子类  派生类;

#endif

// C++ 通过继承关系，实现了代码的可重用性。
class Human   //父类   共性
{
public:
    void eat(string food)
    {
        cout<<" i am eating "<<food<<endl;
    }
};

//public 继承方式

//public 访问权限

class Student:private Human  //子类 是在父类的基础上增加新的功能， 体现的是个性。
{
public:
    void study(string course)
    {
        cout<<" i am a student , i am learning "<<course<<endl;
    }
};

class Teacher:public Human
{
public:
    void tech(string course)
    {
        cout<<" i am teacher , i am teaching "<<course<<endl;
    }
};

int main()
{
    Student  s;
    s.study("c++");
    s.eat("黄焖鸡米饭");

    Teacher t;
    t.tech("java");
    t.eat("大盘鸡");

    return 0;
}

