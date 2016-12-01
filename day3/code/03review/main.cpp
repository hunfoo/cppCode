#include <iostream>

using namespace std;

int main()
{
    string  str = "  abcdedg          ";

    str.erase(0,str.find_first_not_of(' '));  //erase(int pos=0, int n = npos);
    cout<<str<<"--"<<endl;

    str.erase(str.find_last_not_of(' ')+1);

    cout<<str<<"--"<<endl;

    return 0;
}

