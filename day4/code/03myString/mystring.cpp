#include "mystring.h"
#include <string.h>

myString::myString(const char *p)  //""
{
    if(p == NULL)
    {
        _str = new char[1];
        *_str = '\0';
    }
    else
    {
        int len = strlen(p);
        _str = new char[len+1];
        strcpy(_str,p);
    }
}

#if 0
1,格式    A(const A & another);
2,若不提供，系统会提供默认(成功编译)，一旦自定义，系统不再提供默认。
3,系统提供的默认，是一种等位拷贝。也就是江湖说的，浅浅的拷贝。
4,浅拷贝，会导致，内存重析构。double free. 在有些情况下(含有堆空间的时候)，要自实现拷贝构造



#endif

#if 0
赋值运算符重载=

1,编译器提供默认(编译成功的原因)，一旦自定义，系统不再提供默认
2,默认赋值运算符重载也是一种等位赋值，浅赋值。
3,浅赋值，有可能会导致
    1，自身内存泄漏。
    2，内存发生重析构。
    3，自赋值。;


#endif


myString& myString::operator=(const myString & another)
{
    if(this == &another)
        return *this;
    delete []this->_str;
    int len = strlen(another._str);
    this->_str = new char [len+1];
    strcpy(this->_str,another._str);

    return *this;
}

myString::myString(const myString & another)
{
    //在同类之间，是没有隐私的。
    int len = strlen(another._str);
    _str = new char[len+1];
    strcpy(_str,another._str);
}

myString::~myString()
{
    delete []_str;
}

char * myString::c_str()
{
    return _str;
}

myString myString::operator+(const myString & another)
{
    myString tmp;    // char * = ""->"abcd efg";  *this  char * = "abcd"  another char *  = "efg"
    delete []tmp._str;

    int len = strlen(this->_str);
    len += strlen(another._str);

    tmp._str = new char[len+1];
    memset(tmp._str,0,len+1);

    strcat(tmp._str,this->_str);
    strcat(tmp._str,another._str);
    return tmp;
}

bool myString::operator>(const myString & another)
{
    if(strcmp(this->_str,another._str)>0)
        return true;
    else
        return false;

}

bool myString::operator<(const myString & another)
{
    if(strcmp(this->_str,another._str)<0)
        return true;
    else
        return false;
}

bool myString::operator==(const myString & another)
{
    if(strcmp(this->_str,another._str)==0)
        return true;
    else
        return false;
}

char& myString:: operator[](int idx)   //xx[2]; xx.operator[](int idx)
{
    return this->_str[idx];
}

char myString:: at(int idx)
{
    return this->_str[idx];
}
