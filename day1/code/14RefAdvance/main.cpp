#include <iostream>

using namespace std;

int main()
{
#if 0
    int * p;  int **pp = &p;
    int * & rp = p;

    int a;
    int &ra = a;

//    int& * p =  &ra;  // int * &   int & *

    int x, y,z;
    int * p[] = {&x, &y,&z};

//    int & rp[] = {x, y,z};   //  rp   & int&   int & *

    int arr[] = {1,2,3,4,5};  //  int[5]  int[5] &

    int(&rarr)[5]  = arr;


    const int a = 100;
    const int *p = &a;
    const int &ra  = a;

#endif

    int a;
    const int & rr = a+6;

    const double & ra = a + 5;


    return 0;
}

