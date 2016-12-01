#include <iostream>
#include <string.h>

using namespace std;

//string 不是关键字，而是一个类  char *

int main1()
{
//    string  str("china");
//    string str = "china";
//    str = "good";

//    string str2;
//    str2 = str;
//    cout<<str<<"--"<<endl;
//    cout<<str2<<endl;
//    string str = "kajdsf;lkajdsf; laksdjflakdsjf;lakdsjf;alkdsfj";

//    cin>>str;

//    cout<<str<<endl;

//    string str;
//    cout<<sizeof(string)<<sizeof(str)<<endl;

    return 0;
}

int main2()
{
   string s = "china";

   string s2 = "ahina";
//   s += s2;

   cout<<s<<endl;
   cout<<s.size()<<endl;


   if(s == s2)
       cout<<"s = s2"<<endl;
   else if(s > s2)
       cout<<"s > s2"<<endl;
   else
       cout<<"s < s2"<<endl;

    cout<<s[3]<<endl;

    s[3] = 'w';
    cout<<s<<endl;

    char buf[1024];

    strcpy(buf,s.c_str());

    cout<<"***"<<buf<<endl;


   return 0;
}

//int find(char c, int pos = 0);
//int find(char * s, int pos = 0);

int main()
{
    string sArray[10] = {
    "0",
    "1",
    "22",
    "333",
    "4444",
    "55555",
    "666666",
    "7777777",
    "88888888",
    "999999999",
    };
    for(int i=0; i<10; i++)
    {
        cout<<sArray[i]<<endl;
    }
}















