#include <iostream>
using namespace std;
int main()
{
    char str[]="Programming with C++";
    for( int i=sizeof(str)/sizeof(str[0])-2 ; i>=0; i--)
        cout.put(*(str+i));
    cout.put('\n');

    cin.get();
    cout.put();
    return 0;
}
