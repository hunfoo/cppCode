#include <iostream>
#include <fstream>

using namespace std;

struct Stu
{
    char name[30];
    char sex;
    int age;
};

int main()
{
    fstream  fs("abc.binary",ios::in|ios::out|ios::trunc|ios::binary);
    if(!fs)
        cout<<"open error"<<endl;

    Stu s[5] =   // int a[10];
    {
        {"zhaosi",'x',23},
        {"automan",'x',34},
        {"nengge",'y',43},
        {"automan",'x',34},
        {"nengge",'y',43}
    };

//    fs.write((char*)s,sizeof(s));

    for(int i=0; i<5; i++)
    {
        fs.write((char *)&s[i],sizeof(Stu));
    }

    fs.seekg(0,ios::beg);

    Stu  tmp;
    while (fs.read((char*)&tmp,sizeof(Stu)))
    {
        cout<<"name:"<<tmp.name<<endl;
        cout<<"sex :"<<tmp.sex<<endl;
        cout<<"age :"<<tmp.age<<endl;
    }

    fs.close();
    return 0;
}

