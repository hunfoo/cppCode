#include <iostream>

using namespace std;

class Father
{
public:
    int x;
protected:
    int y;
private:
    int z;

};

class Son:public Father
{
public:
    int pub;
    void func()
    {
       x = 3;
       y = 4;
//       z = 5;
    }

protected:
    int pro;
private:
    int pri;
};

// 继承方式public没有影响啥， 影响了啥
//没有影响 子类的成员访问方式，
//影响了父为中的成员在子类的访问方式, 在子类内， 还是子类对象

#if 0

father      public
pub         pub(pubic)
pro         pro(protected)
pri         inaccess

#endif

int main()
{
    Son s;
    s.pub;

    s.x = 100;
    s.y = 200;
    s.z = 200;



    return 0;
}

