#pragma once
#include <string>
class student
{
public:
    std::string getname();
    void setname(std::string inname);
    int getroll();
    void setroll(int inroll);

private:
    std::string name; //the default access specifier in class is private.
    int roll_no;
};

