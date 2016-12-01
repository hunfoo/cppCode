#include <iostream>
#include <fstream>

using namespace std;

int main()
{
#if 0
    //此时的输入与输出，不是针对文件而言，而是当前进程
    ifstream  ifs("abc.txt");
    if(!ifs)
        cout<<"open error"<<endl;

    int a, b,c;
    ifs>>a>>b>>c;
    cout<<a<<b<<c;

    ofstream  ofs("xxx.txt");
    if(!ofs)
        cout<<"open error"<<endl;
    ofs<<12<<34<<56<<endl;

    int a ;
#endif
    fstream   fs;
    fs.open("bca.txt",ios::in|ios::out|ios::app);

    if(!fs)
        cout<<"open error"<<endl;


    fs.close();



    return 0;
}

