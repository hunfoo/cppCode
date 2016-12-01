#include <iostream>

using namespace std;


class IReader
{
public:
    virtual  string getContents() = 0;
};

class Book:public IReader
{
public:
    virtual string getContents()
    {
        return "从前有座山，山里有座庙，庙里有个小和尚，要听老和尚讲故事，从前有座山";
    }
};

class NewsPaper:public IReader
{
public:
    virtual string getContents()
    {
        return "在下一届米国大选 ，希拉里，当选了米国首位女总统";
    }
};

class Mother
{
public:
    void tellStroy(IReader * i)
    {
        cout<<i->getContents()<<endl;
    }
};

int main()
{
    Book b;
    NewsPaper p;

    Mother m;
    cout<<"mother start to tell stroy"<<endl;
    m.tellStroy(&b);
    cout<<"mother start to tell newspaper"<<endl;
    m.tellStroy(new NewsPaper);
    return 0;
}

