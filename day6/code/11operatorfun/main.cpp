#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#if 0
class Pow
{
public:
    int operator()(int i)
    {
        return i * i;
    }
};
int main()
{
    Pow pow;
    int i = 4;  //把类对象当成函数名一样使用  需要重载()
    cout<<pow.operator ()(i)<<endl; // pow(i);  a+b;    a + b;  仿函数
    return 0;
}
#endif

bool myCmp(int i,int j)
{
    return i<j;
}

class Cmp
{
public:
    bool operator()(int i, int j)
    {
        return i<j;
    }
};

int main()
{
    int array[8] = {5,3,2,12,34,1,90,11};

    vector<int> vi(array,array+8);

    sort(vi.begin(), vi.end(),[=](int i,int j){return i<j;});  // lambda 本质就是仿函数

    for(int i=0; i<vi.size(); i++)
    {
        cout<<vi[i]<<endl;
    }


    return 0;
}

