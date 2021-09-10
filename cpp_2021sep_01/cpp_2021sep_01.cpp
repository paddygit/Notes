// cpp_sep_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Structure of a C++ code
//
//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//    return 0;
//}


//Datatypes
//#include <iostream>
//#include <bitset>
//using namespace std;
//int main()
//{
//
//	//bool
//
//	//bool bval = true;
//	//cout << bval;					//1
//	//cout << boolalpha << bval;	//true
//	//cout << sizeof(bval);			//1
//	
//	//char
//	//wchar_t
//
//	//char ch = 'a';
//	//cout << "\n" << sizeof(ch);		//1
//	//cout << "\n" << sizeof(wchar_t);	//2
//
//
//	//short
//	//int
//	//long
//	//cout << "\n" << sizeof(short);		//2
//	//cout << "\n" << sizeof(int);		//4
//	//cout << "\n" << sizeof(long);		//4
//	//cout << "\n" << sizeof(long long);	//8
//	//cout << "\n" << INT_MAX;			//2147483647
//	//cout << "\n" << INT_MIN;			//- 2147483648
//	//cout << "\n" << UINT_MAX;			//4294967295
//	//int ival = INT_MAX;
//	//bitset<32> bival(ival);
//	//cout << "\n" << bival;				//01111111111111111111111111111111
//	//int ival2 = ival + 1;
//	//cout << "\n" << ival2;				//- 2147483648
//	//bitset<32> bival1(ival2);
//	//cout << "\n" << bival1;				//10000000000000000000000000000000
//
//	//signed
//	//unsigned
//	// signed- and unsigned can be used for short, int and long
//
//	//signed int sival = 0;
//	//unsigned int uival = 0;
//	//sival = sival - 1;
//	//uival = uival - 1;
//	//cout << "\n" << sival;					//-1
//	//cout << "\n" << uival;					//4294967295
//
//	//float
//	//double
//	//long double
//	//float fpi;
//	//double dpi;
//	//long double ldpi;
//	//cout << "\n" << sizeof(fpi);		//4
//	//cout << "\n" << sizeof(dpi);		//8
//	//cout << "\n" << sizeof(ldpi);		//8
//
//	// to get a float result in a division 
//	//either of the values have to be float
//	//fpi = 22.0 / 7;
//	//dpi = 22 / 7.0;
//	//ldpi = 22.0 / 7.0;
//
//	//cout << "\n" << fpi;		//3.14286
//	//cout << "\n" << dpi;		//3.14286
//	//cout << "\n" << ldpi;		//3.14286
//	
//
//}

//Variables

//#include <iostream>
//using namespace std;
//int gvar = 7; //Global variable, not to be used always
//int main()
//{
//	int lvar = 5; //Local variable
//	cout << gvar << "\t" << lvar;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int gvar = 7; //Global variable, not to be used always
//int main()
//{
//	int gvar = 5; //Local variable by name gvar
//	{
//		int gvar = 8; //Local variable by name gvar
//		cout << gvar;
//	}
//	cout << "\n" << gvar;
//	return 0;
//}

// const and volatile
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int cvint = 5;
//
//	cvint += 2; //const variables cannot be modified.
//	Severity	Code	Description	Project	File	Line	Suppression State
//	Error	C3892	'cvint': you cannot assign to a variable that is const	cpp_sep_01	C : \Users\psone\source\repos\cpp_sep_01\cpp_sep_01.cpp	123
//	Error(active)	E0137	expression must be a modifiable lvalue	cpp_sep_01	C : \Users\psone\source\repos\cpp_sep_01\cpp_sep_01.cpp	123
//
//
//	cout << cvint;
//}

// A Complete Guide to Programming in C++ by Ulla Kirch-Prinz and Peter Prinz
// To display hexadecimal integer literals and
// decimal integer literals.
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	// cout outputs integers as decimal integers:
//	cout << "Value of 0xFF = " << 0xFF << " decimal"
//		<< endl; // Output: 255 decimal
//		// The manipulator hex changes output to hexadecimal
//		// format (dec changes to decimal format):
//	cout << "Value of 27 = " << hex << 27 << " hexadecimal"
//		<< endl; // Output: 1b hexadecimal
//	return 0;
//}


// Reads integral decimal values and
// generates octal, decimal, and hexadecimal output.
//#include <iostream> // Declarations of cin, cout and
//using namespace std; // manipulators oct, hex, ...
//int main()
//{
//	int number;
//	cout << "Please enter an integer: ";
//	cin >> number;
//	cout << uppercase // for hex-digits
//		<< " octal \t decimal \t hexadecimal\n "
//		<< oct << number << " \t "
//		<< dec << number << " \t "
//		<< hex << number << endl;
//	return 0;
//}

// A Complete Guide to Programming in C++ by Ulla Kirch-Prinz and Peter Prinz
//#include <iostream>
//using namespace std;
//int main()
//{
//	double x = 12.0;
//	cout.precision(2); // Precision 2
//	cout << " By default: " << x << endl;
//	cout << " showpoint: " << showpoint << x << endl;
//	cout << " fixed: " << fixed << x << endl;
//	cout << " scientific: " << scientific << x << endl;
//	return 0;
//}

////https://www.cplusplus.com/reference/iomanip/setprecision/
//// setprecision example
//#include <iostream>     // std::cout, std::fixed
//#include <iomanip>      // std::setprecision
//
//int main() {
//	double f = 3.14159;
//	std::cout << std::setprecision(5) << f << '\n';
//	std::cout << std::setprecision(9) << f << '\n';
//	std::cout << std::fixed;
//	std::cout << std::setprecision(5) << f << '\n';
//	std::cout << std::setprecision(9) << f << '\n';
//	return 0;
//}

//if else 'else if'
//switch case
// < <= > >= == !=

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x = 29;
//	if (x % 2 == 0)
//	{
//		cout << x << " is even!";
//		if (x < 10) //nested if
//		{
//			cout << x << " is less than 10!";
//		}
//		else if (x < 20)
//		{
//			cout << x << " is less than 20!";
//		}
//		else
//		{
//			cout << x << " is greater than 20!";
//		}
//		
//	}
//	else
//	{
//		cout << x << " is odd!";
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char x = '/';
//	switch (x)
//	{
//	case '+':
//		//add
//		break;
//	case '-':
//		//substract
//		break;
//	case '/':
//		//divide
//		cout << "divide";
//		break;
//	case '*':
//		cout << "multiply";
//		break;
//	default:
//		//error message
//		cout << "default";
//		break;
//	}
//	return 0;
//}

//+ - * / %
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float a, b;
//	char symbol;
//	cout << "Enter the calculation: ";
//	cin >> a >> symbol >> b;
//	if(symbol == '/')
//		cout << a/b;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 5;
//	cout << "\n" << a++;
//	a = 5;
//	cout << "\n" << ++a;
//	a = 5;
//	cout << "\n" << --a;
//	a = 5;
//	cout << "\n" << a--;
//	cout << "\n" << a;
//	return 0;
//}

//?:
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int ival = 4;
//	cout << ((ival < 5) ? "Less than 5" : "5 or more");
//	return 0;
//}
// A Complete Guide to Programming in C++ by Ulla Kirch-Prinz and Peter Prinz
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int ival = 12345678;
//	cout <<'|' << setw(6)<<ival<<'|';
//	ival = 123456;
//	cout <<"\n"<<  '|' << setw(6) << ival << '|';
//	return 0;
//}


// A Complete Guide to Programming in C++ by Ulla Kirch-Prinz and Peter Prinz
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//
//	string s("spring flowers ");
//	cout << left // Left-aligned
//		<< setfill('?') // Fill character ?
//		<< setw(20) << s; // Field width 20
//
//	return 0;
//}

//Exercise: Make a compounding interest calculator
//Exercise: Create a menu driven calculator
//Exercise: Swap 2 variables without using third variable
