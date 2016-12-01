#include <iostream>

using namespace std;

#if 0
优点：代码内嵌，避免了函数的调用。
缺点: 易产生歧义，易使text段体积增大,不会进行类型检查。
#endif

#define SQR(i) ((i)*(i))


#if 0
优点：一段高度抽象的逻辑，不易产生歧义,使text段体积变小，会进行类型检查。
缺点: 函数调用的压栈与出栈的开销。
#endif

inline int sqr(int i)
{
    return i*i;
}


//为何不把所有的函数inline

//inline 变成了给编译器的一种建议。




int main()
{
    int i = 0;
    while(i<5)
    {
        cout<<SQR(i++)<<endl;
    }

    return 0;
}

