#include <iostream>

using namespace std;


void func(const int &ref)
{
    cout<<ref<<endl;
}


void foo(int& ref)
{

}

#if 0

命名空间，要包含，声明和定义。


namespace Space {
.h 类(.h
}
namespace Space{
.cpp  .cpp)
}

#endif



int main()
{

    const int a = 20;

//    const int & ra = a;
    foo(const_cast<int&>(a));

    std::cout<<"abcd"<<std::endl;

    using namespace std;
    cout<<"abcd"<<endl;




    return 0;
}

