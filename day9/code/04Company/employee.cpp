#include "employee.h"


int Employee::startNum = 1000;



Employee::Employee()
{
    grade = 1;
    num = startNum++;
}

