#include <iostream>
using namespace std;

// 1 引用是一种声明关系，声明的时候必须要初始化。引用不开辟空间
// 2 此种声明关系，一经声明，不可变更。
// 3 可以对引用，再次引用。多次引用的结果，多个引用指向同一个变量

int main()
{
    int a = 500;          // 变量名  实质一段内存空间的别名
//    *(int *)0xb0002345 = 500;
    int& ra = a;          // ra 是a的引用

    printf("sizeof(a) = %d, sizeof(ra) = %d\n",sizeof(a),sizeof(ra));
    printf("&a = %p &ra = %p\n",&a,&ra);
    a = 1000;
    printf("a = %d  ra = %d\n",a,ra);
    ra = 2000;
    printf("a = %d  ra = %d\n",a,ra);

    int  b = 200;
    ra = b;  //赋值
//    int &ra = b; //声明
    printf("a = %d  ra = %d\n",a,ra);

    int& rr =  ra;
    printf("a = %d  ra = %d rr = %d\n",a,ra,rr);

    int& rrr = rr;
    printf("a = %d  ra = %d rr = %d rrr = %d\n",a,ra,rr,rrr);


    return 0;
}

