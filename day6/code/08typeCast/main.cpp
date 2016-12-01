#include <iostream>

using namespace std;
class Point2D
{
public:
    Point2D(int x, int y)
        :_x(x),_y(y){}

    friend class Point3D;
private:
    int _x;
    int _y;
};

class Point3D
{
public:
    Point3D(int x, int y, int z)
        :_x(x),_y(y),_z(z){}

    Point3D& operator=(const Point3D & another)
    {
        this->_x = another._x;
        this->_y = another._y;
        this->_z = another._z;
        return *this;
    }

#if 0
我们把这一类，单参的构造器，称为类型转化构造器。
赋值 传参
#endif
#if 1
    explicit Point3D(const Point2D &p2)  // implicit  explicit
    {
        this->_x = p2._x;
        this->_y = p2._y;
        this->_z = 9;
    }
#endif
    void dis()
    {
        cout<<"( "<<_x<<","<<_y<<","<<_z<<" )"<<endl;
    }

private:
    int _x;
    int _y;
    int _z;
};



int main()
{
    Point2D  p2(1,2);
    Point3D  p3(3,4,5);

    p3 = static_cast<Point3D>(p2);
    p3.dis();


#if 0
    string s("laksdjf");
    string s1(s);
    string s2 = s1;

    string s3;
    s3 = s2;
    string s4 = "china";

    s4 = "china";  // char * -> string  string
#endif



    return 0;
}






















