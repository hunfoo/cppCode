#include "date.h"
#include <iostream>
using namespace std;

void init(Date & d)
{
    cin>>d.year;
    cin>>d.month;
    cin>>d.day;
}

void print(Date & d)
{
    cout<<"year:"<<d.year<<"month:"<<d.month<<"day:"<<d.day<<endl;
}

bool isLeapYear(Date & d)
{
    if((d.year %4 == 0&&d.year%100 != 0) || d.year%400==0)
        return true;
    else
        return false;
}
