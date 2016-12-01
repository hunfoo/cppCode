#ifndef LIST_H
#define LIST_H


struct Node
{
    int data;
    struct Node * next;
};


class List
{
public:
    List(); //¿ÕÁ´±í
    ~List(); //Ïú»ÙÁ´±í

    void insertList(int d);
    void traverseList();

private:
    Node *head;
};

#endif // LIST_H
