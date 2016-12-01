#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int a = 0x12345678;
//    cout.unsetf(ios::dec);
//    cout.setf(ios::hex);
//    cout<<a<<endl;
//    cout.unsetf(ios::hex);
//    cout.setf(ios::oct);
//    cout<<a<<endl;
//    cout<<hex<<a<<endl;
//    cout<<dec<<a<<endl;
//    cout<<oct<<a<<endl;


//    double dd=123.4567;
//    cout<<dd<<endl;
//    cout<<setiosflags(ios::scientific)<<dd<<endl;
//    cout<<resetiosflags(ios::scientific);
//    cout<<setiosflags(ios::fixed)<<dd<<endl;
//    cout<<setprecision(2)<<setiosflags(ios::fixed)<<dd<<endl;


    int num=0xabcd;
    cout<<"以大小写方式输出进制数: "<<endl;
    cout<<"16 进制数(默认：小写方式):"<<hex<<num<<endl;
    cout<<"以大写方式输出进制数: "<<setiosflags(ios::uppercase)<<hex<<num<<endl;
    cout<<"恢复小写方式输出进制数: "<<resetiosflags(ios::uppercase)<<hex<<num<<endl;


    return 0;
}

