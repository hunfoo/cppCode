#ifndef DOCTOR_H
#define DOCTOR_H
#include "graduate.h"

class Doctor : public Graduate
{
public:
    Doctor(string sn,int ia,float fs, double ds,int iy,int im, int id,string st);

//    public dis  public public
//    public print public

    void dump()
    {
        print();
        cout<<"title:"<<title<<endl;
    }

private:
    string title;

};

#endif // DOCTOR_H
