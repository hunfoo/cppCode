#include <stdio.h>


enum BOOL
{
    FALSE,TRUE
};

enum DAY
{
    Mon,Tue,Wen
};

int main1(void)
{
    const int a;
//    a = 100;
    const int *p = &a;  // &const int  const int *
//    *p = 100;
    printf("a = %d\n",a);

    char *q = malloc(100);


    enum BOOL m = FALSE;
    if(!m)
    {
        printf("a value is false");
    }
    return 0;
}

//const  a;   const a;
// *const p;
//const int *const p;
//c语言中表示真假，用0 和非0   int   float
int main2()
{
    enum DAY today;
    today = 100;
    return 0;
}

int main()
{
    int a, b = 10;

    a = b = 100;  //
    printf("a = %d b = %d\n",a,b);


//    (a!= b?a:b) = 1000;


    return 0;
}
//表达式，是不可被赋值。


