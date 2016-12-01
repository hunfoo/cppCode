#include <iostream>

using namespace std;


class myString
{
public:
//    myString(){}
//    myString(char*){}
    myString(char * p = NULL){}


private:
    char *_str;
};




class A
{
public:
    A(){}
    ~A(){}


private:
    A(const A &){}
    A & operator=(const A &){}
};

int main()
{
    A  a;
    A  b(a);  A c = b;

    A  d; d = c;

    string a;  string b("alsdjf");
    string c(a); string d = a;
    string e; e = a;


    return 0;
}

