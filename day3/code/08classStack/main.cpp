#include <iostream>
#include "stack.h"
using namespace std;



int main()
{


    Stack  *ps = new Stack;  // 无参构造器，标配
    delete ps;

    Stack  *ps2 = new Stack(100);  // 无参构造器，标配

    delete ps2;

//    {
//        Stack  st;  // 无参构造器，标配
//    }

//    Stack  st2(123);  // 有参构造器

#if 0
    for(char v = 'a'; !st.isFull()&& v != 'z'+1; v++)
    {
        st.push(v);
    }

    while(!st.isEmpty())
        cout<<st.pop()<<endl;
#endif


    return 0;

}


#if 0

class List
{
public:
   void init();
   void insertList(int d);

   void traverseList();

private:
   struct Node
   {
       int data;
       struct Node * next;
   } * head;
};

void List::init()
{
    head = new Node;
    head->next = NULL;
}

void List::insertList(int d)
{
    Node * cur = new Node;
    cur->data = d;

    cur->next = head->next;
    head->next = cur;
}

void List:: traverseList()
{
    Node * ph = head->next;
    while(ph != NULL)
    {
        cout<<ph->data<<endl;
        ph = ph->next;
    }
}


int main()
{
    List list;
    list.createList();

    for(int i=0; i<10; i++)
    {
        list.insertList(i);
    }

    list.traverseList();
    return 0;

}

#endif






