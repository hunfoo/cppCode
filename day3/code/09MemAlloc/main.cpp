#include <iostream>
#include <string.h>

using namespace std;


#if 0

struct Stu
{
    char * name;
    int age;
};


int main()
{
    {
        struct Stu s;
        printf("%d\n",sizeof(Stu));
        s.name = (char *)malloc(100);
        strcpy(s.name,"alksdfjaldskf");
        free(s.name);
    }
    {

        struct Stu   *ps = (Stu*)malloc(sizeof(Stu)); // 8
        ps->name = (char*)malloc(100);
        strcpy(ps->name,"lakdsjflad");
        free(ps->name);
        free(ps);
    }
    while(1);

    return 0;
}

#endif




class Stu
{
public:
    Stu()
    {
        name = new char[100];
    }
    ~Stu()
    {
        delete []name;
    }


    char * name;
    int age;
};

int main()
{
    {
        Stu s;
        strcpy(s.name,"lasdjfladsjfl");

        cout<<s.name<<endl;
    }
    {
        Stu * ps = new Stu;
        strcpy(ps->name,"alsdkjflakdsjfladsfkja");

        cout<<ps->name<<endl;
        cout<<(*ps).name<<endl;

        delete ps;
    }


}












