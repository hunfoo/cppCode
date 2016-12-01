#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

//malloc  free  #include <stdlib.h>  库函数
//new  delete  key work 关键字   int  for

// 单变量空间

// 数组
// 一维   多维

int main1()
{
//    int *p = (int*)malloc(sizeof(int));
    int *p = new int(200);
    cout<<*p<<endl;

    string *ps = new string("purple palace");
//    *ps = "china";
    cout<<*ps<<endl;

    struct Stu
    {
        int age;
        string name;
    };

    Stu* pStu = new Stu{10,"bob"};

    cout<<pStu->age<<endl;
    cout<<pStu->name<<endl;


    return 0;
}

int main2()
{
    char *p  = new char[40];
    strcpy(p,"china");
    cout<<p<<endl;

    int *pi = new int[5]{0};
    memset(pi,0,sizeof(int[5]));
    for(int i=0; i<5; i++)
    {
        cout<<pi[i]<<endl;
    }


    char **ppc = new char*[5]{NULL};

    ppc[0] = new char[10];
    strcpy(ppc[0],"china");
    ppc[1] = "automan";
    ppc[2] = "greatWall";

    while(*ppc)
    {
        cout<<*ppc++<<endl;
    }


    int (*pa)[4] = new int[3][4]{{0}};

    for(int i=0; i<sizeof(int[3][4])/sizeof(int[4]); i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<pa[i][j]<<" ";
        }
        cout<<endl;
    }


    int (*px)[3][4][5] = new int[2][3][4][5];

    return 0;

}

int main()
{
//    int *p = new int;
//    delete p;

//    int *q  = new int[1000];
//    delete []q;

    int *p = (int*)malloc(100);
    if(p == NULL)
        return -1;

    int *pi = new (std::nothrow) int[10];
    if(pi == NULL)
        return -1;


}






















