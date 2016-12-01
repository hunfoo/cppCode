#ifndef GRADUATE_H
#define GRADUATE_H


#include "student.h"

class Graduate:public Student
{
public:
    Graduate(string sn, int ia, float fs,double ds);
    void print();  //void dis();
    Graduate(const Graduate& another);

    Graduate &operator=(const Graduate & another);
private:
    double salary;
};

#endif // GRADUATE_H
