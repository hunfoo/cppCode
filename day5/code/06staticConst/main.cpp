
#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout<<a<<endl;
    }
    static const int a = 8;
};

int main()
{
    A  a;
    return 0;
}

