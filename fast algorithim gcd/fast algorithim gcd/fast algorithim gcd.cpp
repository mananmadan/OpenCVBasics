// fast algorithim gcd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm> 
using namespace std;
long long gcd(long long  a, long long b)
{
	if (b == 0)
		return a;
	else
	{
		//cout << "first  " << b << "second  " << a % b << endl << endl;			
		return gcd(b, a%b);
	}
	int main()
	{
		long long num1;
		cin >> num1;
		long long num2;
		cin >> num2;
		cout<<gcd(num1, num2)<<endl;

    
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
