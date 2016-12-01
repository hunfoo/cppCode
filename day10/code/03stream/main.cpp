#include <iostream>
#include <fstream>

using namespace std;



int main()
{
//    int a;
//    cin>>a;
//    cout<<a;


    fstream  fs("abc.txt",ios::in|ios::out|ios::trunc);

    fs<<1<<" "<<2<<" "<<3<<endl;
    fs.seekp(0,ios::beg);

    int x,y,z;
    fs>>x>>y>>z;

    cout<<x<<y<<z<<endl;

    return 0;
}

