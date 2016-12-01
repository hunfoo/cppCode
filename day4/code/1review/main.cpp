#include <iostream>
#include <string.h>

using namespace std;

#if 0
class Date
{

};
Date d; d.init()
class List
{

};
class Stack
{

};

#endif


#if 0

构造器
1,与类名同，无返回，在生成对象（栈堆）时，自动被调用。一定用实始化工作
2,系统提供默认无参空构造器，可以有参数，可以被重载，或默认参数。
  重载或是默认都可以实现无参的情况，默认更好一些。
3,一经提供自定义构造器，系统默认不复存在。


参数列表： 在函数声明之后，实现体之前  ：开头 x(y)

析构器
1,~与类名同，无参无返回。在对象销毁之前被调用。
2，栈对象离开作用域，堆对象被delete





class A
{
public:
    A(int i=0,int j=0, int k=0)   //参数列表。效率高
        :x(i),y(j),z(k)
    {

    }

private:
    int x;
    int y;
    int z;

};



int main()
{
    A  a;


    return 0;
}



class Stu
{
public:
    Stu()
    {
        name = new char[100];
    }
    ~Stu()
    {
        delete name;
    }

    char *name;
    int age;
};

int main()
{
    Stu * s = new Stu;

    delete s;
}

#endif


//参数列表，初始化顺序，跟变量的声明顺序有关，跟初始化表中的顺序无关

class Stu
{
public:
    Stu(string na)
        :len(strlen(na.c_str())),name(na)
    {
    }

    void dis()
    {
        cout<<len<<endl;
    }


private:
    string name;
    int len;

};

int main()
{
    Stu s("china");

    s.dis();
    return 0;
}

