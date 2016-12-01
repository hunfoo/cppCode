
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fsr("xyz.txt",ios::in|ios::out|ios::trunc);
    if(!fsr)
        cout<<"open error"<<endl;

    fsr<<"abcd    abcdef"<<endl;
    fsr<<"12345   67890"<<endl;
    fsr<<"12345   67890"<<endl;
    fsr<<"12345   67890"<<endl;

    fstream fsw("zyx.txt",ios::in|ios::out|ios::trunc);
    if(!fsw)
        cout<<"open error"<<endl;

    fsr.seekg(0,ios::beg);

    char buf[1024];
    while(fsr.getline(buf,1024,'\n'),!fsr.eof())
    {
        fsw<<buf<<endl;
    }

    fsr.close();
    fsw.close();

    return 0;
}

/*
fputc;    fgetc
fputs;    fgets
fwrite;  fread
*/

