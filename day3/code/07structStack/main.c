#include <stdio.h>
#include <stdlib.h>


typedef struct stack
{
    char space[1024];
    int top;
}Stack;

void init(Stack *s)
{
    s->top = 0;
    memset(s->space,0,1024);
}

int isEmpty(Stack * s)
{
    return s->top == 0;
}

int isFull(Stack * s)
{
    return s->top == 1024;
}

char pop(Stack *s)
{
    return s->space[--s->top];
}

void push(Stack*s,char c)
{
    s->space[s->top++] = c;
}



int main(void)
{
    Stack st;
    init(&st);

    if(!isFull(&st))
        push(&st,'a');
    if(!isFull(&st))
        push(&st,'b');
    if(!isFull(&st))
        push(&st,'c');
    if(!isFull(&st))
        push(&st,'d');
    if(!isFull(&st))
        push(&st,'e');

    st.top  = 0;


    while(!isEmpty(&st))
        printf("%c\n",pop(&st));

    return 0;
}

