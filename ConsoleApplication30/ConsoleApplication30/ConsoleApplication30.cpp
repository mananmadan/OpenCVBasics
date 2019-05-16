// ConsoleApplication30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<string.h>
#include<unordered_map>
using namespace std;
int main()
{
	long long int size=0;
	cin >> size;
	while (true)
	{
		long long int x = 0;
		cin >> x;
		long long int p = 10000019;
		long long int hash = (((34 * x + 2) % p) % size);
		cout << hash;
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
