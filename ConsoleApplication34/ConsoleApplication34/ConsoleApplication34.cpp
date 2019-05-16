// ConsoleApplication34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<string>
#include<string.h>
#include<vector>
#include <iostream>
using namespace std;
long long int calculatehash(string s1, long long int x, long long int p)
{
	long long int count = s1.length();
	unsigned long long int hash = 0;
	for (long long int i = count - 1; i >= 0; i--)
	{
		hash = (hash*x + s1[i]) % p;
	}
	return hash;
}
long long int *precomputehash(string t, long long int length, long long int p, long long int x)
{
	long long int* arr;
		arr = new long long int[t.length() - length + 1];

	string s = t.substr((t.length() - length), (t.length() - 1));
	arr[t.length() - length] = calculatehash(s, x, p);
	long long int y = 1;
	for (long long int i = 1; i < length; i++)
	{
		y = (y*x) % p;
	}
	for (long long int i = t.length() - length - 1; i >= 0; i--)
	{
		arr[i] = (x*arr[i + 1] + t[i] - y * t[i + length]) % p;
	}
	return arr;
}


int main()
{
	unsigned long long int p = 4294967291;
	long long int x = 263;
	string P;
	string T;
	cin >> P;
	cin >> T;
	vector<long long int>result;
	long long int phash = calculatehash(P, x, p);
	long long int *arr = precomputehash(T, P.length(), p, x);
	for (long long int i = 0; i <= (T.length() - P.length()); i++)
	{
		if (phash != arr[i])
			continue;
		if (phash == arr[i])
		{
			if (T.substr(i, i + (P.length() - 1)) == P)
				result.push_back(i);
		}
	}
	for (unsigned long long int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	return 0;
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
