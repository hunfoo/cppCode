#include <iostream>
using namespace std;

//void swap(int *pa, int *pb)
//{
//    *pa ^= *pb;
//    *pb ^= *pa;
//    *pa ^= *pb;
//}

void swap(int &ra, int &rb)
{
    ra ^= rb;
    rb ^= ra;
    ra ^= rb;
}

//void swap(char**p, char **q)
//{
//    char *t = *p;
//    *p = *q;
//    *q = t;
//}


//平级内解决问题，然后不开辟多余的空间

//引用的本质，是对指针的再次包装。 指针可以有引用，不应该有引用的指针。
void swap(char* &p, char *& q)
{
    char *t = p;
    p = q;
    q = t;
}



int main()
{
    int a = 5;int b = 3;
    swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;


    char *p = "china";  //char* & rp =   p;
    char *q = "america";

    cout<<"p = "<<p<<" q = "<<q<<endl;
    swap(p,q);
    cout<<"p = "<<p<<" q = "<<q<<endl;
    return 0;
}

