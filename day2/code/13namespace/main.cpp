#include <iostream>

using namespace  std;

//命名空间的key word  namespace 空间名

namespace Space {
    int x;
    int y;

    namespace Other {
        int m;
        int n;
    }
}


#if 0
int main1()
{
    Space::x = 200;
    cout<<Space::x<<endl;

    Space::y = 300;
    cout<<Space::y<<endl;

//    using Space::x; using Space ::y;
//    x = 20;

    {
        using namespace Space;
        x = 10; y = 20;
    }
    {
        using namespace  Other;
        x = 20; y =30;
    }

//    cout<<x<<y<<endl;

    int x; int y;
    cout<<x<<y<<endl;

    return 0;
}


int main()
{

    int m, n;
    cin>>m>>n;

    cout<<m<<n<<endl;
}

#endif


int main()
{
    using namespace Space::Other;
    m = 20;
    x = 300;
    return 0;
}


