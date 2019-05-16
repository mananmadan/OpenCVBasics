// ConsoleApplication28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int fibbonacislow(int n)
{
	if (n <= 1)
	{	//arr[n] = n;
	return n;
	}
	else
	{
	//	arr[n] = arr[n - 1] + arr[n - 2];
		return fibbonacislow(n - 1)+ fibbonacislow(n - 2);
	}
	
}
int fibonaccifast(int n)
{
	int arr[10000];
	arr[0] = 0;
	arr[1] = 1;
		for (int i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	return arr[n-1];

}
int main()
{
   // cout << "Hello World!\n";
	int n;
	cin >> n;
	n = 3;
	while (true)
	{
		cout << "fast" <<"  "<<fibonaccifast(n) << endl;
		cout << "slow" <<"  "<<fibbonacislow(n - 1) << endl;
		cout << "number" << "  " << n << endl << endl;
		n++;
	}
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
