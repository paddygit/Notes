// cpp_2021sep_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "student.h"
using namespace std;
//struct student
//{
//    char name[25]; //all variables are public
//    int roll_no;
//    char email[40];
//    string getname()
//    {
//        return this->name;
//    }
//};
//Structure
//- we cannot implement abstraction
//- we cannot protect data inheritance

//so we use class
//Aceess specifiers: public, private, protected
//class student
//{
//public:
//    string getname()
//    {
//        return name;
//    }
//    
//    void setname(string inname)
//    {
//        name = inname;
//    }
//
//    int getroll();
//
//    void setroll(int inroll)
//    {
//        roll_no = inroll;
//    }
//
//
//private:
//    string name; //the default access specifier in class is private.
//    int roll_no;
//};
//
//int student::getroll()
//{
//    return roll_no;
//}

//
//int main()
//{
//    //Classes and Objects
//    student obj;
//    obj.setname( "Anirudh");
//    obj.setroll(1);
//
//    cout << obj.getname() << endl;
//    cout << obj.getroll() << endl;
//    
//}



//Creating an instance in CPP < version11 will give us 4 functions
//Constructor
//Destructor
//Copy Constructor
//Assignment operator

//class dummyClass
//{
//public:
//	dummyClass()
//	{
//		cout << "dummyClass instance created!"<<endl;
//	}
//
//
//	dummyClass(int j, int k = 30)
//	{
//
//		a = j;
//		b = k;
//		c = new int(30);
//
//
//		cout << "a : " << a << " b :" << b << " c :" << *c <<endl;;
//	}
//
//	dummyClass(const dummyClass& refobj) // we need to write our own copy cons when we have pointers in the class
//	{
//		a = refobj.a + 5;
//		b = refobj.b + 5;
//		c = new int;
//		*c = (*refobj.c )+ 5;
//	}
//
//	void seta(int aval)
//	{
//		a = aval;
//	}
//	void setc(int aval)
//	{
//		*c = aval;
//	}
//	void printab()
//	{
//		cout << "a : " << a << " b :" << b << " c :" << *c << endl;;
//	}
//
//private:
//	int a, b;
//	int* c;
//};
//
//int main()
//{
//	dummyClass obj;  //dummyClass()
//	dummyClass obj1(25); //dummyClass(int j, int k = 30)
//	dummyClass obj2(60, 100); //dummyClass(int j, int k = 30)
//	dummyClass cobj = obj2;  //copy constructor is called //dummyClass(const dummyClass& refobj)
//	obj2.setc(90);
//	cobj.printab();
//	obj2.printab();
//}
//
//
//https://www.geeksforgeeks.org/copy-constructor-in-cpp/

//class dummyClass
//{
//private:
//	char* s = new char('a');
//	char* t = new char[10];
//
//	
//
//public:
//	dummyClass()
//	{
//		cout << "Constructor" << endl;
//		t[0] = 'a';
//		t[1] = 'a';
//		t[2] = 'a';
//		t[3] = 'a';
//		t[4] = 'a';
//
//	}
//	~dummyClass()
//	{
//		cout << "Destructor" << endl;
//		delete s;
//		delete[] t;
//
//	}
//};
//
//int main()
//{
//	{
//		dummyClass obj;
//		cout << sizeof(obj) << endl;
//	}
//	cout << "end of program" << endl;
//	return 0;
//}


//OOPS
//Encapsulation
//Abstraction
//Inheritance
//Polymorphism

class product
{
private:
	string name;
	float price;
	float  discount;

public:

	product() {}
	product(string n, float p)
	{
		name = n;
		price = p;
		discount = 0.0;
	}
	void setDiscount(float  d)
	{
		discount = d;
	}
	void getquote()
	{
		cout << "discount of : " << this->discount << endl;
		cout << "name : " << name << " price : " << (price - (price * (discount / 100)));
	}
	string getname()
	{
		return name;
	}
	float getprice()
	{
		return price;
	}
	void setname(string n)
	{
		name = n;
	}
	void  setprice(float p)
	{
		price = p;
	}
	float getdiscount()
	{
		return discount;
	}
};

class stationary : public product
{
private:
	string color;
public:
	stationary(string name, float price, string colour)
	{
		setname(name);
		setprice(price);
		color = colour;
	}
	void getquote()
	{
		cout << "discount of : " << this->getdiscount() << endl;
		cout << "name : " << getname() << " colour : " << color << " price : " << (getprice() - (getprice() * (getdiscount() / 100)));
	}
};

int main()
{
	stationary obj("pen", 15.0,"blue");
	obj.setDiscount(2);
	obj.getquote();
}