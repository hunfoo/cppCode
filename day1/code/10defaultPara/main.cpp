#include <iostream>
#include <time.h>

using namespace std;


void weatherCast(string w = "pm2.5")
{
    time_t t = time(0); //1970,0,0,0
    char tmp[64];
    strftime( tmp, sizeof(tmp), "%Y/%m/%d %X %A ",localtime(&t) );
    cout<<tmp<< "today is weahter "<<w<<endl;
}

// rainy  sunshine  windy  snowy  flogy  pm2.5


//从右向左默认， 中间不能跳跃
//实参的个数+ 默认参数的个数 >= 形参的个数

int volume(int l , int w , int h = 5)
{
    return l*w*h;
}



int main()
{
    cout<<volume(3,1,2)<<endl;
//    cout<<volume(1,2)<<endl;
//    cout<<volume(1,2,10)<<endl;
    return 0;
}

