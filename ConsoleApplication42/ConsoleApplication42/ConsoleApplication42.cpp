// ConsoleApplication42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream> 
#include <vector> 
using namespace std;

int main()
{
	vector<int> myvector[6];
	myvector[1].push_back(1);
	myvector[1].push_back(2);
	myvector[1].push_back(3);
	myvector[1].push_back(4);
	myvector[1].push_back(5);

	// Vector becomes 1, 2, 3, 4, 5 

	myvector[1].clear();
	// vector becomes empty 

	// Printing the vector 
	for (auto it = myvector[1].begin(); it != myvector[1].end(); ++it)
		cout << ' ' << *it;
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
