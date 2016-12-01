#include "graduate.h"

Graduate::Graduate(string sn, int ia, float fs, double ds, int iy, int im, int id)
    :Student(sn,ia,fs),birth(iy,im,id)
{
    salary = ds;
}
void Graduate:: print()
{
    dis();  // name age score  public public public
    cout<<"salary:"<<salary<<endl;
}

void Graduate::getBirthday()
{
    birth.dis();
}

