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


//��������Ĭ�ϣ� �м䲻����Ծ
//ʵ�εĸ���+ Ĭ�ϲ����ĸ��� >= �βεĸ���

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
