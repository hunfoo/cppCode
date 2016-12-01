#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
public:
    Student(string sn, int ia, float fs);
    void dis();
    Student(const Student& another);

    Student& operator=(const Student& another);


private:
    string name;
    int age;
    float score;
};

#endif // STUDENT_H
