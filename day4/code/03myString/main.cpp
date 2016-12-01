#include <iostream>
#include "mystring.h"
using namespace std;


int main1()
{


    string s;             //char * p = "";
    string s2("china");   //char *p = "china";

    cout<<s.c_str();       //string  char *
    cout<<s2.c_str()<<endl;


    string s3(s2);        //用一个对象生成另外一个对象  拷贝构造器
    cout<<s3<<endl;

    string s4 = s3;        //本质也是拷贝构造，用己有一个对象，完成一个对象从无到有的创建过
    cout<<s4<<endl;

    string  s5;
    s5 = s4;
    string s6;
    s6 = s5 = s4;

    cout<<s5.c_str()<<endl;
    cout<<s6.c_str()<<endl;


    cout<<"---------------------------------------"<<endl;


    myString ms;
    myString ms2("canada");
    cout<<ms.c_str();
    cout<<ms2.c_str()<<endl;


    myString ms3(ms2);           // NULL   char *   String
    cout<<ms3.c_str()<<endl;

    myString ms4 = ms3;
    cout<<ms4.c_str()<<endl;

    myString ms5;                  //赋值运算符重载
    ms5 = ms3;
    ms5.operator =(ms3);

    myString ms6;
    (ms6 = ms5) = ms4;
    ms6.operator =(ms5.operator =(ms4));


    cout<<ms5.c_str()<<endl;
    cout<<ms6.c_str()<<endl;

    ms6 = ms6;


    int a = 1, b = 2 ,c = 3;



    return 0;
}

int main2()
{
    myString a = "aa", b = "bb", c = "ccc";

    (a = b) = c;

    cout<<a.c_str()<<endl;
    cout<<b.c_str()<<endl;
    cout<<c.c_str()<<endl;

    return 0;
}

int main()
{
    string x = "cbc", y = "bbc";


    if(x == y)
        cout<<" x == y"<<endl;
    else if (x> y )
        cout<<"x > y"<<endl;
    else
        cout<<"x < y"<<endl;
    string z = x+y;
    cout<<z.c_str()<<endl;

    cout<<x[2]<<endl; x[2] = '#';
    cout<<x.at(2)<<endl;


    cout<<"----------------------------"<<endl;

    myString  xx = "aaaaa",yy = "bbc";

    cout<<xx[2]<<endl;
    xx[2] = '$';
    cout<<xx.c_str()<<endl;

    if(xx == yy)
        cout<<" xx == yy"<<endl;
    else if (xx> yy )
        cout<<"xx > yy"<<endl;
    else
        cout<<"xx < yy"<<endl;

    myString zz = xx.operator+(yy);
    cout<<zz.c_str()<<endl;



    return 0;
}

