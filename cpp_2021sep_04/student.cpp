#include"student.h"

int student::getroll()
{
    return roll_no;
}

std::string student::getname()
{
    return name;
}

void student::setname(std::string inname)
{
    name = inname;
}


void student::setroll(int inroll)
{
    roll_no = inroll;
}