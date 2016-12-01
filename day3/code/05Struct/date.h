
//c 语言的封装风格  数据放到一起打包struct  然后把数据以引用或指针的方式传给行为。

//c++ 认为c 封装不彻底。
//数据和行为分类， 没有权限控制。 对内数据开放，逻辑抽象，对外，提供接口。

struct Date
{
    int year;
    int month;
    int day;
};

void init(Date & d);
void print(Date & d);
bool isLeapYear(Date & d);
