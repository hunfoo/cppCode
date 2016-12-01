#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

void print(vector<string> &vi)
{
    for(int i=0; i<vi.size(); i++)
        cout<<vi[i]<<endl;
}

int main()
{
#if 0
    FILE *fp = fopen("aa.txt","r+");
    if(fp == NULL)
        return -1;

    vector<string>  vs;
    char buf[1024];

    while(fgets(buf,1024,fp) != NULL)
    {
        vs.push_back(buf);
    }

    for(int i=0; i<vs.size(); i++)
        cout<<vs[i];
    fclose(fp);
#endif
    vector<string>  vi;

    vi.push_back("laskdjfalsdf");
    vi.push_back("lajsdflakdsjf;lakdj");
    vi.push_back("asdfja;dsf");
    vi.push_back(";askldjf;aksdjf;asldfjk");

    print(vi);


    return 0;
}


