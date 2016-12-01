#include <iostream>
#include <math.h>

using namespace std;

// 把一个类作为另一个类的友元， 友元类
// 声明为谁的友元，就可以通过谁的对象，访问谁数据成员。


class Point
{
public:
    Point(double xx, double yy)
    {
        x = xx;
        y = yy;
    }
    friend class PointManagement;
private:
    double x, y;
};

class PointManagement
{
public:
    double getDirectDistance(Point & a, Point & b);
    double getTriDistance(Point & a, Point & b);


};
double PointManagement::getDirectDistance(Point & a, Point & b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

double PointManagement::getTriDistance(Point & a, Point & b)
{

}




int main()
{
    Point a(1,2);  Point b(3,4);

    PointManagement pm;
    double dis = pm.getDirectDistance(a,b);
    cout<<dis<<endl;
    return 0;
}

