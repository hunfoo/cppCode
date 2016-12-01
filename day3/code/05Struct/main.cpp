#include <iostream>
#include "date.h"

using namespace std;



int main()
{
    Date d;
    init(d);
    print(d);

    d.year = 1999;

    if(isLeapYear(d))
        cout<<d.year<<" is leap year"<<endl;
    else
        cout<<d.year<<" is not leap year"<<endl;

    return 0;
}

