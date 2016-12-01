#include <iostream>
#include <cmath>
using namespace std;

class A
{
public:
    A(int i,int j,int k)
        :x(i),y(j),z(k){}

    int x;
    int y;
    int z;
};

double triangle(double x, double y, double z)
{
    double area;
    double s = (x+y+z)/2;
    if(x+y>z&&x+z>y&&y+z>x)
        area = sqrt(s*(s-x)*(s-y)*(s-z));
    else
        throw A(x,y,z);

    return area;
}
int main()
{
    int a, b,c;
    cin>>a>>b>>c;

    try{
        while(a>0&&b>0&&c>0)
        {
            cout<<triangle(a,b,c)<<endl;
            cin>>a>>b>>c;
        }
    }
    catch(int e)
    {
        cout<<"catch a exception int"<<e<<endl;
    }
    catch(float e)
    {
        cout<<"catch a exception float"<<e<<endl;
    }
    catch(char e)
    {
        cout<<"catch a exception  char"<<e<<endl;
    }
    catch(double e)
    {
        cout<<"catch a exception  double"<<e<<endl;
    }
    catch(A e)
    {
        cout<<"catch a exception  A"<<endl;
        cout<<e.x<<e.y<<e.z<<endl;
    }
    catch(...)
    {
        cout<<"catch default"<<endl;
    }




    return 0;
}
