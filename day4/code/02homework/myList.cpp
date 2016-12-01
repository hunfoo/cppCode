#include "myList.h"
#include <stdio.h>

#include <iostream>
using namespace std;

List::List()
{
    head = new Node;
    head->next = NULL;
}

List::~List()
{
    Node * t = head;
    while(head)
    {
        head = head->next;
        delete t;
        t = head;
    }

}

void List::insertList(int d)
{
    Node * cur = new Node;
    cur->data = d;

    cur->next = head->next;
    head->next = cur;
}

void List::traverseList()
{
    Node *ph = head->next;

    while(ph != NULL)
    {
        cout<<ph->data<<endl;
        ph = ph->next;
    }

}

