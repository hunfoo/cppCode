#include "graduate.h"

//子类未实现拷贝构造时，会调用父类的拷贝构造器(无论实现或未实现)
//子类一旦实现拷贝构造，则必须显示的调用父类的拷贝构造器。


//子类中未实现赋值重载时，会调用父类的赋值重载(无论实现或未实现)
//子类一旦实现赋值重载，不会主动调用父类的赋值重载。

Graduate::Graduate(string sn, int ia, float fs,double ds)
    :Student(sn,ia,fs),salary(ds)
{

}

void Graduate::print()
{
    dis();
    cout<<"salary:"<<salary<<endl;
}

Graduate::Graduate(const Graduate& another)  //name,age,score, salary
    :Student(another),salary(another.salary)
{
    // 赋值兼容(子类对象(引用或指针)，可以赋给父类对象(引用或指针))

}

Graduate& Graduate:: operator=(const Graduate & another)
{
    if(this == &another)
        return *this;

    Student::operator =(another);  // Student &operator=(const Student &)

    this->salary = another.salary;

    return *this;
}

