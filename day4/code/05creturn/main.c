#include <stdio.h>



int func()
{
    int a = 5;
    return a;
}


int main(void)
{
    int i = 3;
    i = func();

    printf("%d\n",i);
    return 0;
}

