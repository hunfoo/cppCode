#ifndef DATE_H
#define DATE_H


//类名其实也是一种变向的命名空间

namespace Space
{

class Date
{
public:
    void init();  //函数
    void print();
    const int& getYear();
    bool isLeapYear();
private:
    int year;   //数据成员
    int month;
    int day;
};

}


#endif // DATE_H
