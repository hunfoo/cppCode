#include <iostream>
#include <fstream>

using namespace std;

class MyStream
{
public:
    MyStream(char *path,char * mode)
    {
        fp = fopen(path,mode);
    }

    char  get()
    {
        return fgetc(fp);
    }

    void put(char ch)
    {
        fputc(ch,fp);
    }
    void seek(int offset,int where)
    {
        fseek(fp,offset,where);
    }

private:
    FILE *fp;
};

int main()
{
    fstream  fs("abc.txt",ios::in|ios::out|ios::trunc);

    //fs<<; fs.operator <<()
    //fs>>; fs.operator >>()
    //cin>>; cin.operator >>()
    //cout<<;cout.operator <<()
    //char val;
    //val = cin.get();  cin>>val;   cout<<val;
    //cout.put(val);

//    fs.put('b');
//    fs.seekg(0,ios::beg);
//    char ch;
//    ch = fs.get();
//    cout<<ch<<endl;

//    MyStream  ms("cba.txt","w+");

//    ms.put('n');
//    ms.seek(0,SEEK_SET);

//    char ch;
//    ch = ms.get();
//    cout<<ch<<endl;


    fputs("alsdjfasd",stdout);



    return 0;
}

