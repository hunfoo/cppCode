#include <iostream>

using namespace std;


//static 修饰成员函数，他的作用只有一个，用于管理static成员。
//static 修饰的成员函数，既属类也属于对象，但终归于类。
//staic 修饰的成员函数，因为他属于类，所以没有this指针，不能访问非staitc 数据成员及及成员函数


class School
{
public:
    string & getTower()
    {
        return tower;
    }
    static string& getLib()
    {
        return lib;
    }

private:
    string tower;
    string lake;

    static string lib;
};


string School::lib = "";
int main()
{
    School::getLib() = "九阴真经";
    School::getLib() += "+六脉神剑";


//    School cz, bn, blueshit;
//    cz.getTower() = "boyala";
//    bn.getTower() = "shuita";
//    blueshit.getTower() = "wajueta";

//    cz.getLib()  += "+ 传智求职面试大全";
//    bn.getLib()  += "+ 远离成为鸟人";
//    blueshit.getLib() += "+挖掘机哪家强技术";

//    cout<<cz.getLib()<<endl;
//    cout<<blueshit.getLib()<<endl;

    cout<<School::getLib()<<endl;

    return 0;
}

