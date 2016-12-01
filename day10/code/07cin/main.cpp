#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



int main()
{
//    int a;
//    double b;
//    char buf[1024];

//    cin>>buf;

//    cout<<"a = "<<a<<endl;
//    cout<<"b = "<<b<<endl;
//    cout<<"buf = "<<buf<<endl;
//    fstream fs("abc.txt",ios::in|ios::out|ios::trunc);
//    fs<<1<<" "<<2<<" "<<3<<endl;  //123\n
//    fs.seekg(0,ios::beg);
//    int a,b,c;
//    fs>>a>>b>>c;
//    cout<<"a = "<<a<<endl;
//    cout<<"b = "<<b<<endl;
//    cout<<"c = "<<c<<endl;

//    char a,b,c,d;


////    while((cin.get(ch)),!cin.eof())
////    {
////        cout.put(ch);
////    }


    //去读n个字符，在读完n-1字符前，遇到了截止符，停止读，返回。截止符没有被读进buf，也没有从流对象中消失或越过。
    //去读n个字符，在没有遇到截止符前，也没有读完n-1个符，处于阻塞状态。
    //去读n个字符，在没有遇到截止符前,己读完n-1个字符。留下的空间\0
//    cin.get(a).get(b).get(c).get(d);
//    cout<<a<<b<<c<<d<<endl;

//    char buf = new char[1024];
    char buf[1024];
//    cin>>buf;
//    cout<<buf<<endl;
//    cin.get(buf,1024,'i');
//    cout<<buf<<"xxx"<<endl;
//    cin.ignore(1);
//    memset(buf,0,1024);
//    cin.get(buf,10,'i');
//    cout<<buf<<"ooo"<<endl;
//    cin.get(buf,10,'i');
//    cout<<buf<<endl;

    //去读n个字符，在读完n-1字符前，遇到了截止符，停止读，返回。
    //截止符没有被读进buf，越过了截止符。

    cin.getline(buf,1024,'i');
    cout<<buf<<endl;
    cin.getline(buf,1024,'i');
    cout<<buf<<endl;




    return 0;
}

