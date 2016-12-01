#ifndef STRING_H
#define STRING_H

#include <stdio.h>

//OOP


class myString
{
public:
    myString(const char * p = NULL);  //默认参数只能在声明。
    myString(const myString & another);
    myString& operator=(const myString & another);
    myString operator+(const myString & another);
    bool operator>(const myString & another);
    bool operator<(const myString & another);
    bool operator==(const myString & another);
    char& operator[](int idx);
    char  at(int idx);
    char * c_str();
    ~myString();

private:
    char * _str;
};

#if 0

char array[] = "lasjdf;laskdjf";
strcpy(); strlen(); strcat();


// OOP
struct Node
{
    int data;
    struct Node * next;
};

class List
{


private:
    Node * head;
};

#endif


#endif // STRING_H
