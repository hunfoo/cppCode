#ifndef BRITHDAY_H
#define BRITHDAY_H
#include <iostream>
using namespace std;


class Birthday
{
public:
    Birthday(int y, int m,int d);

    void dis()
    {
        cout<<"birthday:"<<year<<"/"<<month<<"/"<<day<<endl;
    }

private:
    int year;
    int month;
    int day;
};

#endif // BRITHDAY_H
