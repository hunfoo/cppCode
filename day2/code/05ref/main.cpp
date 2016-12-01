#include <iostream>

using namespace std;

int main()
{
    int a;  // 变量名是，一段内存的引用（别名）
    int & ra = a;

    int *p = &ra;
    //可以对引用取地址，但是不能建引用的指针  int & *p = &ra;


    int &rra = ra;
    //可以对引用再次引用，但是不能建引用的引用 int & & =  ra



    return 0;
}

