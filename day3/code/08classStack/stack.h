#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;



// constructor  构造器
// 1,与类名相同，无返回，被系统生成对象时自动调用，用于初始化。
// 2,可以有参数，构造器的重载，默认参数, 重载和默认不同时存在 ,包含标配，为了对象的无参创建。
// 3,若未提供任何构造，系统默认生成一个无参空构造器。若提供，则不再生成默认构造器


//destrcutor   析构器
// 1,~与类名相同，无参，无返回，
// 2,对象消失的时候，自动被调用用于对象销毁时的内存处理工作。
// 3,若未提供，系统默认生成一个空析构器。

class Stack
{
public:
    Stack(int size = 100)
    {
        top = 0;
        space = new char[size];
        _size = size;
    }

    bool isEmpty();
    bool isFull();
    char pop();
    void push(char c);

    ~Stack()
    {
        delete space;
    }

private:
    char *space;
    int top;
    int _size;
};


#endif // STACK_H
