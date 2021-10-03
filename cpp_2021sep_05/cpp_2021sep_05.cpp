// cpp_2021sep_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


// Virtual and runtime polymorphism
//class Animal
//{
//public:
//	virtual void  makeSound()
//	{
//		cout << "All animals make sound!"<< endl;
//	}
//};
//
//class cat : public Animal
//{
//public:
//	void  makeSound()
//	{
//		cout << "Cat says meow!" << endl;
//	}
//};
//
//class dog : public Animal
//{
//public:
//	void  makeSound()
//	{
//		cout << "Dog says bow!" << endl;
//	}
//};
//
//class cow : public Animal
//{
//public:
//	void  makeSound()
//	{
//		cout << "Cow says moo!" << endl;
//	}
//};
//
//int main()
//{
//	Animal* obj;
//	cat objcat;
//	dog objdog;
//	cow objcow;
//	int op;
//
//	cout << "Make which animal say? " << endl << "1. cat" << endl << "2.Dog " << endl << "3.Cow" << endl << "Enter your choice : ";
//	cin >> op;
//	// in real world scenario, based op if 100 activities are to be performed then you will have to wite 100 activities for  each cat, dog and cow
//	// to avoid this we use dynamic poymorphism.
//	switch (op)
//	{
//	case 1: obj = &objcat;
//		break;
//	case 2: obj = &objdog;
//		break;
//	case 3: obj = &objcow;
//		break;
//	default:
//		obj = &objcat;
//	}
//	obj->makeSound();// run time polymorphism
//	return 0;
//}
//
//// Assignment
//// https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-c-set-1-introduction/
//
////Initializer list
//class dummy
//{
//public:
//	dummy(int xv, int yv) : x(xv), y(yv) // Initializer list served same purpose as commented code in constructor
//	{
//		//x = xv;
//		//y = yv;
//	}
//private:
//	int x;
//	int y;
//};
//
//int main()
//{
//	dummy o(4, 5);
//}

//Static 
//static variable and static methods

//class dummy {
//public:
//	static int objsofdummy;
//	void printdummyobjectcount()
//	{
//		cout << objsofdummy << endl;
//	}
//	dummy() {
//		objsofdummy++;
//	}
//
//};
//
//int dummy::objsofdummy = 0;
//
//int main()
//{
//	dummy ob1;
//	dummy ob2;
//	dummy ob3;
//	ob1.printdummyobjectcount();
//	dummy ob4;
//	dummy ob5;
//	dummy ob6;
//	dummy ob7;
//	ob5.printdummyobjectcount();
//	dummy ob[12];
//	ob7.printdummyobjectcount();
//	return 0;
//}

class dummy {
public:
	static int objsofdummy;
	void printdummyobjectcount()
	{
		cout << objsofdummy << endl;
	}

	static int nextobjnumber();
	//{								one way of doing
	//	return objsofdummy + 1;
	//}
	dummy() {
		objsofdummy++;
	}

};

int dummy::objsofdummy = 0;

int dummy::nextobjnumber() 
{
	return objsofdummy + 1;
}

int main()
{
	cout << dummy::nextobjnumber();
	return 0;
}


//https://www.learncpp.com/