#include <iostream>
using namespace std;

struct TypeP
{
    char *p;
};
struct TypeC
{
    char c;
};
struct TypeR
{
    char& r; //把引用单列出来，不与具体的对像发生关系
};



int main()
{

    printf("%d %d %d\n",sizeof(TypeP),sizeof(TypeC),sizeof(TypeR));

    int a;

    int & ra = a;

     int * const p ;


    ra = 200;


    int b;
    int &ra = b;




    return 0;
}
