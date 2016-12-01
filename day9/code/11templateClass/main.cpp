#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

//典型的数据结构之一
//底层的存储空间，类型一致，
//push进去的数据，根底层保持一致
//pop 出来的数据，根底层保持一致


//引时的类，是一种类 模板--》模板类-》 类对象

template<typename T>
class Stack
{

public:
    Stack(int size)
    {
        space = new  T[size];
        top = 0;
    }
    ~Stack();
    bool isEmpty();
    bool isFull();
    void push( T data);
     T pop();
private:
     T* space;
    int top;
};

template<typename T>
Stack<T>::~Stack()
{
    delete []space;
}
template<typename T>
bool Stack<T>::isEmpty()
{
    return top == 0;
}
template<typename T>
bool Stack<T>::isFull()
{
    return top == 1024;
}
template<typename T>
void Stack<T>::push(T data)
{
    space[top++] = data;
}
template<typename T>
T Stack<T>::pop()
{
    return space[--top];
}
int main()
{
    //Stack  Stack<int>
#if 0
    Stack<int> s(100);
    if(!s.isFull())
        s.push(10);
    if(!s.isFull())
        s.push(10);
    if(!s.isFull())
        s.push(30);
    if(!s.isFull())
        s.push(40);
    if(!s.isFull())
        s.push(50);
    while(!s.isEmpty())
        cout<<s.pop()<<endl;

#endif

    vector<int>  vi;

    for(int i=0; i<10; i++)
        vi.push_back(i);

    for(int i=0; i<vi.size(); i++)
        cout<<vi[i]<<endl;

    return 0;
}
