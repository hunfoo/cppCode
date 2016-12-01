
#include <iostream>


//代码复用的问题  继承 派生  inherit derive  is-a
//class A:public class B,public class C
//继承方式：public  protected  private  //以前用的是一种访问权限
//不影响子类成员的访问方式，影响了父类成员在子类中的访问权限。一在子类内，二子类对象。
//public protected private  inaccess

#if 0
              public
pub           pub
pro           pro
pri           inaccess
#endif

//构造器，拷贝构造，赋值运算符重载

//初始化顺序的问题
//先父类的构造器,类对象的构造器，子类的构造器。析构顺序正好反之
using namespace std;


class M
{
public:
    M(){
        cout<<"M()"<<endl;
    }
};



class A
{
public:
    A(int i){
        cout<<"A()"<<endl;
    }
};


class B:public A
{
public:
    B():A(1){
        cout<<"B()"<<endl;
    }

    B(const B & another)
        :A(another),m(another.m)
    {

    }

    B & operator=(const B & another)
    {
        if(this == &another)
            return *this;
        A::operator =(another);

        m = another.m;

        return *this;
    }


private:
    M m;
};

int main()
{
    B  b;

    B  bb(b);

    B bbb;

    bbb = b;

    return 0;
}

