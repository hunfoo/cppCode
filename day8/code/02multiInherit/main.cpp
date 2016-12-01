#include <iostream>
#include "sofabed.h"

using namespace std;

int main()
{
    Bed b(1,2,3);
    b.discript();

    Sofabed sb(2,3,4);
    sb.sleep();
    sb.sit();

    sb.discript();

    return 0;
}

