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

 Student::Student(const Student& another)
 {
     this->age  = another.age;
     this->name = another.name;
     this->score = another.score;
 }

Student&  Student::operator=(const Student& another)
{
    if(this == &another)
        return *this;

    this->name = another.name;
    this->age = another.age;
    this->score = another.score;

    return * this;
}


