// cpp_2021sep_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Codes from session conducted on 12th September 2021

//#include <iostream>
//
//void find()
//{
//	std::cout << "calling find";
//}
//
//
//using std::cout;
//using std::endl;
//
//int main()
//{
//	int x = 6;
//	if (x > 5)
//	{
//		cout << "greater than five" << endl;
//		cout << "second line";
//		find();
//	}
//	else
//	{
//		cout << "five or less";
//	}
//}


//Loops
//#include <iostream>
//
//int main()
//{
//	//while loops and for loops
//	//while loop is of 2 types: 
//	//entry controlled
//	//exit controlled
//
//	//entry controlled while
//
//	//int x = 6;
//	//int y{ 4 };
//	//auto z{ 9 };
//	//auto a{ 3.2 };
//
//	//while (x < z)
//	//{
//	//	std::cout << x << std::endl;
//	//	x++;
//	//}
//	//
//	////exit controlled loop do...while
//	//std::cout << "exit controlled loop do...while";
//	//do
//	//{
//	//	std::cout << x << std::endl;
//	//	x--;
//	//} while (x > y);
//
//
//	////for loop
//	////for (initializer; conditional part; incrementer/decrementer part)
//
//	//auto x{ 5 }; //initializing
//	//auto sum{ 0 };
//	//x = 10; //assigning has to be with = operator
//	////x {10} will not work!
//	////program to find 1+2+3+4+5
//	//for (auto i{ 1 }; i <= 5; i++)
//	//	sum += i; // sum = sum + i;
//	//std::cout << std::endl << sum;
//
//
//	////break and continue
//	//auto i{ 20 };
//	//while (1)
//	//{
//	//	if (i == 15)
//	//	{
//	//		i--; //all lines before continue!!!!
//	//		continue;
//
//	//	}
//	//	std::cout << i << " ";
//	//	if (i == 10)
//	//	{
//	//		break;
//	//	}
//	//	i--;
//	//}
//
//
//
//	//int y = 7;
//	//std::cout << y-- << std::endl;
//	//std::cout << y++ << std::endl;
//
//	//std::cout << --y << std::endl;
//	//std::cout << ++y << std::endl;
//
//	//auto x{ 4 };
//	//std::cout << x << std::endl; 
//	//std::cout << x-- << std::endl << x++; //Don't use multiple increment and decrement in a statement
//
//	return 0;
//}

//Functions

//Function declaration - this shows what a function should have
//Function definition - this is defining the body of the function
//
//#include <iostream>
//#include "myFuncs.h"
//
//
//
//int main()
//{
//	auto number1{ 3.1 };
//	auto number2{ 4.6 };
//	auto retval =  addnumbers(number1, number2);
//	std::cout << retval << std::endl;
//	return 0;
//}

//#include <iostream>
// Overloading is not permitted for value and reference 
// parameter for same function name
//void printnumber(int num)
//{
//	std::cout << "The value is : " << num <<std::endl;
//	num = num + 1;
//}

//void printnumber(int& num)
//{
//	std::cout << "The value is : " << num <<std::endl;
//	num = num + 1;
//}
//
//int main()
//{
//	auto x{ 7 };
//	printnumber(x);
//	printnumber(x);
//}

//#include <iostream>
//
//// 1+2+3+4+5
//
//int sumtill(int num)
//{
//	if (num == 1)
//		return 1;
//	else
//		return num + sumtill(num - 1);
//}
//
//
//int main()
//{
//	auto num{ 5 };
//
//	std::cout << sumtill(num);
//	
//	return 0;
//}


//Excercise:
//1  Print the below pattern using while and for loop

//	  *
//   ***
//  *****
// *******
//*********

//2  Print the below pattern using while and for loop
//    ----
//   ----
//  ----
// ----
//----
// ----
//  ----
//   ----
//    ----

//3 Write a recursive function program to find factorial of a number



