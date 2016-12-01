#include <iostream>

using namespace std;

class Father
{
public:
    void dis(int)
    {
        cout<<"fatherfather"<<endl;
    }

    void print()
    {

    }
};

class Son:public Father
{
public:
    void dis()          //shadow 子类中会把父类重名的成员shadow 函数名同，即可构成shadow
                        //绝 不要使子类中的成员同父类中的成员同名
    {
        dis(4);
        cout<<"sonson"<<endl;
    }
};

int main()
{
    Son son;
    son.dis();
    return 0;
}

