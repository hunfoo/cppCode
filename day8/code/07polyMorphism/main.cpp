#include <iostream>

using namespace std;

// virtual void draw() = 0; 纯虚函数格式
//纯虚函数没有实现体，含有纯虚函数的类，称抽象基类，抽象基类，不可以实列化
//java interface 接口，作用就是给族类提供接口用的。


class Shape
{
public:
    Shape(int x, int y)
        :_x(x),_y(y){}
    virtual void draw() =0 ;

protected:
    int _x;
    int _y;
};


class Rect:public Shape
{
public:
    Rect(int x,int y, int len, int wid)
        :Shape(x,y),_len(len),_wid(wid)
    {
    }
//    virtual void draw()
//    {
//        cout<<"start from "<<"("<<_x<<","<<_y<<")";
//        cout<<"len = "<<_len<< " wid = "<<_wid<<endl;
//    }


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

    Rect  r(3,4,5,6);

    Shape *ps = &c;
    ps->draw();

    ps = &r;
    ps->draw();

    return 0;
}


