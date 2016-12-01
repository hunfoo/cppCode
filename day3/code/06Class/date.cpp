#include "date.h"
#include <iostream>
using namespace std;

namespace Space
{

void Date::init()
{
    cin>>year;
    cin>>month;
    cin>>day;
}

void Date::print()
{
    cout<<"year:"<<"month:"<<"day"<<endl;
    cout<<year<<":"<<month<<":"<<day<<endl;
}
int& Date::getYear()
{
    return year;
}

bool Date::isLeapYear()
{
    if((year %4 == 0&&year%100 != 0) || year%400==0)
        return true;
    else
        return false;
}

}
