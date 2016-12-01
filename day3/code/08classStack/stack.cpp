#include "stack.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


bool Stack::isEmpty()
{
    return top == 0;
}

bool Stack::isFull()
{
    return top == _size;
}

char Stack::pop()
{
    return space[--top];
}

void Stack::push(char c)
{
    space[top++] = c;
}
