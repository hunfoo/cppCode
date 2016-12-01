#include <iostream>
using namespace std;

#if 0
1,父类中有虚函数.
2,子类中覆写(override)了父类的虚函数
3,将子类对象地址赋给父类的指针，并发生虚函数的调用。
#endif

//1声明虚函数的方法。 virtual void func(); 声明型关键字

//2覆写(override)
//overload重载 同一作用域中，函数名相同，参数列表不同。
//shadow       发生在父子类中的同名成员。
//override     发生在父子类中，父类中函数有virtual声明的函数，
//子类中,同参，同名，同返回的函数，之间构成覆写。

//3覆写的函数，是不是一定同父类的访问方式一致。看子类的需求。

#if 0

class Shape
{
public:
    Shape(int x, int y)
        :_x(x),_y(y){}
    virtual void draw();

protected:
    int _x;
    int _y;
};
void  Shape::draw()
{
    cout<<"draw from"<<"("<<_x<<","<<_y<<")"<<endl;
}

class Rect:public Shape
{
public:
    Rect(int x,int y, int len, int wid)
        :Shape(x,y),_len(len),_wid(wid)
    {
    }


private:
    int _len;
    int _wid;
};

class Circle:public Shape
{
public:
    Circle(int x, int y,int r)
        :Shape(x,y),_radius(r){}

    virtual void draw()
    {
        cout<<"start from "<<"("<<_x<<","<<_y<<")";
        cout<<" radius = "<<_radius<<endl;
    }

private:
    int _radius;
};

int main()
{
    Circle c(1,2,3);
    c.draw();
    Rect r (3,4,5,6);
    r.draw();

    Shape* ps;

    int choice;

    while(1)
    {
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                ps =&c;
                ps->draw();
                break;
            case 2:
                ps = &r;
                ps->draw();
                break;
        }
    }

    return 0;
}
#endif

class A
{
public:
    virtual void func(){
        cout<<"aaaaaa"<<endl;
    }
};

class B:public A
{

};

class C:public B
{
public:
    virtual void func(){
        cout<<"cccccccc"<<endl;
    }
};
int main()
{
    C c;
    A *pa = &c;
    pa->func();
    return 0;
}



















#if 0

//静多态，编译阶段决定的。
//动多态，在运行时决定的。

void func(int a,float b)  //func_i_f()
{

}
void func(float a, int b) //func_f_i()
{

}

int main()
{
    func_i_f(2,3.0);
    func_f_i(3.0,4);
    return 0;
}

#endif
