// ConsoleApplication40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
    //std::cout << "Hello World!\n"; 
	
	long long int finalarr[1000][1000];
	long long int no_of_edgea = 0;
	long long int no_of_edgeb = 0;
	cin >> no_of_edgea;
	cin >> no_of_edgeb;
	long long int *no_of_nodes=NULL;
    no_of_nodes = new  long long int [no_of_edgea+1];
	long long int *k = new long long int[no_of_edgea + 1];
	for (long long int m = 0; m <= no_of_edgea; m++)
	{
		k[m] = 0;
	}
	for (long long int i = 0; i < no_of_edgeb; i++)
	{
		long long int m = 0;
		long long int n = 0;
		cin >> m;
		cin >> n;
		finalarr[m - 1][k[m - 1]] = n;
		k[m - 1]++;
		finalarr[n - 1][k[n - 1]] = m;
		k[n - 1]++;

	}
	for (long long int i = 0; i < no_of_edgea; i++)
	{
		for (long long int m = 0; m < no_of_edgeb; m++)
		{
			cout << finalarr[i][m] <<" "<< endl;
		}
		cout << endl;
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
