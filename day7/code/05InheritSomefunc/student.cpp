#include "student.h"

Student::Student(string sn, int ia, float fs)
    :name(sn),age(ia),score(fs)
{

}

void Student::dis()
{
    cout<<"name :"<<name<<endl;
    cout<<"age  :"<<age<<endl;
    cout<<"score:"<<score<<endl;
}

