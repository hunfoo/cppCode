#include <iostream>

using namespace std;

class Point2D
{
public:
    Point2D(int x, int y)
        :_x(x),_y(y){}
    void dis()
    {
        cout<<"( "<<_x<<","<<_y<<" )"<<endl;
    }

private:
    int _x;
    int _y;
};

class Point3D
{
public:
    Point3D(int x, int y, int z)
        :_x(x),_y(y),_z(z){}
    void dis()
    {
        cout<<"( "<<_x<<","<<_y<<","<<_z<<" )"<<endl;
    }
    //无参，无返回
    operator Point2D(void)
    {
        return Point2D(this->_x,this->_y);
    }


private:
    int _x;
    int _y;
    int _z;

};

int main()
{
    Point3D  p3(5,6,3);

    Point2D p2(0,0);

    p2 = p3;
    p2.dis();


    return 0;
}

