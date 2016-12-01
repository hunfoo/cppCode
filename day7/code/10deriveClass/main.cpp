#include <iostream>

using namespace std;

//类内部的private protected public 影响的访问权限
//继承中  private protected public，父类中的成员在子类中的访问权限,
//不影响子类现有的成员访问方式
//1,在子类中，2，在子类对象中

// 99% 只使用public继承方式


#if 0

           public              protected                  private
pub        pub                 pro                        pri
pro        pro                 pro                        pri
pri        inaccess            inaccess                   inaccess

#endif

#if 0
            public              public                  public
pub         pub                 pub                      pub
pro         pro                 pro                      pro
pri         inaccess            inaccess                 inaccess

#endif



//public    接供接口用的
//protected 隐藏数据用的,传承数据
//private   隐藏数据用的

#if 0
            protected           protected                protected
pub         pro                 pro                      pro
pro         pro                 pro                      pro
pri         inaccess            inaccess                 inaccess

#endif


#if 0
            private             private                  private
pub         pri                 inaccess                 inaccess
pro         pri                 inaccess                 inaccess
pri         inaccess            inaccess                 inaccess

#endif


//继承方式总结
//public     传承接口，也传承了数据
//protected  传承了数据
//private    既没有传承接口，也没有传承数据。



class Base
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class Derive:protected Base
{
public:
    int x;

    void func()
    {
        pub = 100;
        pro = 200;

    }

protected:
    int y;
private:
    int z;
};

int main()
{
    Derive d;
    d.x = 100;
    d.pub = 100;



    return 0;
}

