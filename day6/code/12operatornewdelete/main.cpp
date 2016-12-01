#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


//& *

//new new[]  delete delete[]


//void *operator new[](size_t)
//void operator delete[](void *)

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }

    void func()
    {
        cout<<"i am a function"<<endl;
    }


    void *operator new(size_t size)  //unsigned int
    {
        cout<<"size = "<<size<<endl;
        cout<<"void *operator new(size_t)"<<endl;
        void *p = malloc(size);
        memset(p,0,size);
        ((A*)p)->data = 100;       //可以实现自我，早的定制。
        return p;
    }

    void operator delete(void * p)
    {
        cout<<"void operator delete(void *)"<<endl;
        free(p);
    }

    void *operator new[](size_t size)
    {
        cout<<"size = "<<size<<endl;
        cout<<"void *operator new[](size_t size)"<<endl;

        void *p = (void*)malloc(size);
        return p;
    }

    void operator delete[](void *p )
    {
        cout<<"void operator delete[](void *)"<<endl;
        free(p);
    }


    int data;
};



//定制化 我要实现A类对象的生成，用我自己定制的new delete
//而其它仍然用系统的。
int main()
{

//    A *pa = new A[5];
//    delete []pa;


    int *p = new int;
    delete p;


    A *pa = new A;
    cout<<pa->data<<endl;
    delete pa;


    return 0;
}


