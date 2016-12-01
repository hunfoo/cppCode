#include <iostream>
#include "myList.h"

using namespace std;

int main()
{
    List list;
    list.insertList(1);
    list.insertList(2);
    list.insertList(3);

    list.traverseList();

    return 0;
}

