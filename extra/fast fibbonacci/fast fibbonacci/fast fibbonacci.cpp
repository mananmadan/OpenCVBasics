// fast fibbonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//std::cout << "Hello World!\n"; 
	long long  n;
	long long fib[10000];
	cin >> n;
	if (n == 0 || n == 1)
		cout<< n;
	else
	{
		fib[0] = 0;
		fib[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
			//cout << "i   " << fib[i];
		}
		cout << fib[n];
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
