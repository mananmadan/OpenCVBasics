// ConsoleApplication29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
    //cout << "Hello World!\n";
	long long a;
	long long b;
	long long x = 0;
	long long  ans=0;
	cin >> a;;
	cin >> b;
	if (a > b)
	{
		x = b;
	}
	else
		x = a;
	while (true)
	{
		for (long long i = 2; i <= x; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				ans = i;
			}
		}
		cout << "ans" << ans << endl;
		x++;
		cout << "the value of x is" << x;
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
