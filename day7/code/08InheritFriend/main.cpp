#include <iostream>
using namespace std;
class Student
{
public:
    Student(int a, int b):_a(a),_b(b){}

    friend ostream &operator<<(ostream & out, const Student & stu);
private:
    int _a;
    int _b;
};
ostream &operator<<(ostream & out, const Student & stu)
{
    out<<stu._a<<"--"<<stu._b<<endl;
}

class Graduate:public Student
{
public:
    Graduate(int a,int b, int c):
        Student(a,b),_c(c){}
    friend ostream &operator<<(ostream & out,  Graduate & gra);

private:
    int _c;
};
ostream &operator<<(ostream & out, Graduate & gra)
{
    cout<<static_cast<Student>(gra);
    cout<<"--"<<gra._c;
    return out;
}

//¸³Öµ¼æÈÝ

int main()
{
    Student s(1,2);
    cout<<s; // operator<<(cout,s);

    Graduate  g(3,4,5);
    cout<<g;
    return 0;
}

