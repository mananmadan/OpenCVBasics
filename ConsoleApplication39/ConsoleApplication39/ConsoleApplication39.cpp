// ConsoleApplication39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
#include<cmath>
using namespace std;

#define MAX 500

int multiply(int x, int res[], int res_size);

void factorial(int n)
{
	int res[MAX];

	res[0] = 1;
	int res_size = 1;

	for (int x = 2; x <= n; x++)
	{
		res_size = multiply(x, res, res_size);
	}

	cout << "Factorial of given number is \n";
//	long long int factorialans = res[res_size-1];
	long long unsigned int sum = 0;
	for (int i = res_size - 1; i >= 0; i--)
	{
		cout << res[i];
		sum = sum + res[i] * pow(10, i);
	}
	cout << "fact" << " " << sum << endl;
}

int multiply(int x, int res[], int res_size)
{
	int carry = 0;

	for (int i = 0; i < res_size; i++)
	{
		int prod = res[i] * x + carry;
		res[i] = prod % 10;
		carry = prod / 10;
	}

	while (carry)
	{
		res[res_size] = carry % 10;
		carry = carry / 10;
		res_size++;
	}
	return res_size;
}

int main()
{
	factorial(50);
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
