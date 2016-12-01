#include <iostream>
#include <stdlib.h>

using namespace std;

enum BOOL
{
    FALSE,TRUE
};

int main1()
{
    const int a = 100; //真正的const
//    a = 200;
    const int *p = &a;  // const int *   int *;

    char *q = (char*)malloc(100);  //void *


//    string s;
    BOOL   b = FALSE;
    if(!b)
    {
        printf("b value is false\n");
    }
    else
        printf("b value is true\n");

    bool bb;
    printf("sizeof(bb) = %d sizeof(bool) = %d\n",sizeof(bb),sizeof(bool));

    return 0;
}


//#define Spr 0
//#define Sum 1

enum
{
    Spr=1,Sum,Autu,Win
};

int main()
{
    int a ,b = 5;
    (a = b) = 100;
    printf("a = %d b = %d\n",a,b);

    (a!= b?a:b) = 1000;
    printf("a = %d b = %d\n",a,b);
    return 0;
}

//表达式，可以被赋值了。

