#include <iostream>

using namespace std;

class Stu
{
public:
    Stu(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout<<name<<"---"<<age<<endl;
    }
    Stu & growUp()
    {
        this->age ++;
        return *this;
    }

private:
    string name;
    int age;

};

int main()
{
    Stu  s("bob",16);
    cout<<"&s:"<<&s<<endl;
    s.display();

    s.growUp().growUp().growUp().growUp().growUp().display();

    return 0;
}















