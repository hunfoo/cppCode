#include <iostream>

using namespace std;

//malloc free c库函数  new  new[]  delete  delete[] 关键字
//new delete > malloc free

//申请单变量空间
//申请数组 一维 多维



int main1()
{
    //new int;  new struct Stu; new string ;

    string *ps = new string("alasdjf");

    *ps = "china";
    cout<<ps<<endl;
    cout<<*ps<<endl;

    delete ps;


    int *pi= new int[10]{0};
    delete []pi;
    char **ppc = new char*[5]{NULL};
    delete []ppc;


    int (*pa)[4] = new int[3][4];
    delete []pa;

    int (*p)[4][5] = new int [3][4][5];

    delete []p;

    return 0;
}

int main()
{
    float a; int b;
    a = static_cast<float>(b);
    b = static_cast<int>(a);

    void *p; int *q;

    p = q;
    q = static_cast<int*>(p);


    int *px; double * py;

    px = reinterpret_cast<int*>(py);
    py = reinterpret_cast<double*>(px);

    int data;

    px = reinterpret_cast<int*>(data);
    data = reinterpret_cast<int>(px);




    return 0;
}

