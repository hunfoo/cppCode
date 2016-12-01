#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 12345; float b = 4.5671212;

//    printf("%-8d--",a);
//    printf("%10.2f\n",b);
//    printf("%f",b);
//    cout<<"xxxxxxxxxxxxxx"<<endl;
//    cout<<setiosflags(ios::left)<<setw(8)<<a<<endl;
//    cout<<b<<endl;
//    cout<<setw(10)<<setprecision(2)<<setiosflags(ios::fixed)<<b<<endl;

//    printf("%x\n",a);
//    printf("%o\n",a);
//    printf("%d\n",a);

//    cout<<hex<<a<<endl;
//    cout<<oct<<a<<endl;
//    cout<<dec<<a<<endl;

//    printf("%8d",a);
//    cout<<setfill('x')<<setiosflags(ios::left)<<setw(8)<<a<<endl;

    int hour =0 ,min = 11, sec = 0;  // 00:00:00 sleep(1)
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;

    return 0;
}

