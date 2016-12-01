#include <iostream>

using namespace std;

int main()
{
    char buf[1024];

    cin.get(buf,1024,'/');  //i like c/             i like c++ also/
    cin.ignore(100,'i');
    cin.putback('i');

    char peek = cin.peek();
    cout<<"peek:"<<peek<<endl;

    cout<<buf<<endl;
    cin.get(buf,1024,'/');
    cout<<buf<<endl;

    return 0;
}

#if 0

           FILE*         func           class                          赋值 拷贝>><<    成员函数
keyboard  stdin          getc           istream               cin                     getc getline get
screen   stdout          putc           ostream               cout                    格式  put

abc.txt   FILE *         fgets          fstream         fstream fs

#endif
