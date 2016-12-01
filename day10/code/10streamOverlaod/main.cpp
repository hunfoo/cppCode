
#include <iostream>


using namespace std;
class A
{
public:
    bool operator!()
    {
        return false;
    }

    operator void *()
    {
        return 0;
    }

};

int main()
{
    A a;

    if(!a)
    {
        cout<<"abcdefg"<<endl;
    }


    if(a)
    {
        cout<<"asdlfjalsdfj"<<endl;
    }
    return 0;
}

