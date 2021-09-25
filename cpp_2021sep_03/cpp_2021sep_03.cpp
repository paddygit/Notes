// cpp_2021sep_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//factorial of 5 = 5 * 4 *3 * 2 * 1
//int factorial(int number)
//{
//	if (number == 1)
//		return 1;
//	else
//		return ( number * factorial(number - 1) );
//}

void tempfun1(int* num);
void tempfun2(int& num);


int main()
{
	//program to find factorial of a number
	//int number = 5;
	//int result = factorial(number);
	//cout << result;

	// can we give a float to switch? NO. Switch can only take in an int, long, char.


	//Session will cover POINTERS, REFERENCES and ARRAYS

	//References
	//int variablea = 5;
	//cout << &variablea << endl;// & is called reference operator
	//int& variableb{ variablea }; // reference of a variable
	//cout << &variableb << endl;
	//variableb = 10;
	//int variablec{ variableb };
	//cout << variablec << endl;

	//char a = 'A';

	////Pointers
	//int* pvariabled = &variablea;
	//cout << pvariabled << endl;
	//cout << *pvariabled << endl;
	////POinter of pointer
	//int** pvariablef = &pvariabled;
	//cout<< pvariablef << endl;
	//cout << **pvariablef << endl;
	//char* b = &a;
	//cout << *b;

	//Arrays
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//cout << &arr[0] <<endl;
	//cout << &arr[1] << endl;
	//cout << &arr[2] << endl;
	//cout << &arr[3] << endl;
	//cout << &arr[4] << endl;

	//char arr1[6] = { 'a', 'b', 'c', 'd', 'e', '\0' };

	//char* carr = arr1;

	//cout << *carr << endl;
	//cout << *(carr + 1) << endl;
	//cout << *(carr + 2) << endl;
	//cout << *(carr + 3) << endl;
	//cout << *(carr + 4) << endl;

	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << arr[i] << " ";
	//}

	//cout << endl;

	//int* parr = arr;
	//cout << *parr << endl;
	//cout << *parr+1 << endl;
	//cout << *parr + 2 << endl;
	//cout << *parr + 3 << endl;
	//cout << *parr + 4 << endl;

	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << *parr+i << " ";
	//

	//2 dimentional and multi dimentional arrays
	//int arr2b2[2][2] = { 1 ,2, 3,4 };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 2; j++)
	//	{
	//		cout << "i : " << i << " j : " << j << " value : " << arr2b2[i][j] << endl;
	//	}
	//}

	//int arr2b2[2][2] = { {1 ,2} , {3,4 } };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 2; j++)
	//	{
	//		cout << "i : " << i << " j : " << j << " value : " << arr2b2[i][j] << endl;
	//	}
	//}
	//         i  j
	//int arr2b2[2][3] = { {1 ,2,5} , {3,4,6 } };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << "i : " << i << " j : " << j << " value : " << arr2b2[i][j] << endl;
	//	}
	//}
	//int arr2b2[2][2] = { {1 ,2} , {3,4 } };
	//int(*parr2b2)[2];
	//parr2b2 = arr2b2; //int* parr2b2 =  *(arr2b2 +0)
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 2; j++)
	//	{
	//		cout << "i : " << i << " j : " << j << " value : " << *(*(parr2b2 + i)+j) << endl;
	//	}
	//}

	//int arr2b2[2][2] = { {1 ,2} , {3,4 } };
	//int* parr2b2;
	//parr2b2 = *arr2b2; //int* parr2b2 =  *(arr2b2 +0)
	////                  i j 
	//for (int k = 0; k < 2*2; k++)
	//{
	//	cout << "k : " << k << " : "<< *(parr2b2 + k) << endl;
	//}

	int number = 1;
	tempfun1(&number); // *num = &number
	cout << number << endl;

	tempfun2(number); // &num = number ****preffered
	cout << number;

	return 0;
}

void tempfun1(int* num)
{
	*num += 2;
}

void tempfun2(int& num)
{
	num += 3;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
