#ifndef GRADUATE_H
#define GRADUATE_H
#include "student.h"
#include "birthday.h"


class Graduate:public Student
{
public:
    Graduate(string sn, int ia, float fs ,double ds,int iy,int im, int id);

    void print();

    void getBirthday();

private:
    double salary;

    Birthday  birth;
};

#endif // GRADUATE_H
