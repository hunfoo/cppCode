#include <iostream>

using namespace std;

#if 0
//友元   频繁访问  破坏封装   do while

友元函数  全局友元函数   类成员友元函数  前向声明 不完全声明。

跨类实现。

友元类    把一个类的所有的成员函数当作了另外一个类的友元函数。


声明为谁的友元，就可以通过谁的对象，访问谁的私有成员。

#endif

class Point
{
public:
    Point(int x, int y)
        :_x(x),_y(y){}

    friend class B;

private:
    int _x;
    int _y;
};

class B
{
public:
    int getDistance(Point & a, Point& b)
    {
        a._x +b._y;
    }
};




int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

