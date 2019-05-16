// hashmaps problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include<string>
#include<string.h>
#include<unordered_map>
#include<algorithm> 
#include<list>
using namespace std;
class myobeject
{
public:
	string s1;
	long long int number;
};
long long int calculatehash(long long int x, long long int size)
{
	long long int p = 10000019;
	long long int hash = (((34 * x + 2) % p) % size);
	return hash;
}
int main()
{
	//cout << "Hello World!\n"; 
	unordered_multimap<int, myobeject > mp;
	long long int n;
	cin >> n;
	for (long long int i = 0; i < n; i++)
	{
		string s1;
		string s2;
		string s3;
		cin >> s1;
		if (s1 == "add")
		{
			cin >> s2;
			cin >> s3;
			long long int mynum = stoi(s2);
			myobeject m1;
			m1.number = mynum;
			m1.s1 = s3;
			mp.insert(make_pair((calculatehash(mynum, n)), m1));

		}
		else if (s1 == "find")
		{
			cin >> s2;
			long long int mynum = stoi(s2);
			auto it = mp.find(calculatehash(mynum, n));
			long long int count = mp.count(calculatehash(mynum, n));
			int flag1 = 0;
			int flag2 = 1;
			if (it == mp.end())
			{
				cout << "not found" << endl;
				flag2 = 2;

			}


			for (int i = 0; i < count; i++)
			{
				if ((it->second).number == mynum)
				{
					cout << (it->second).s1 << endl;
					flag1 = 1;
					break;
				}
				it++;
			}


			if (flag1 != 1 && flag2 != 2)
				cout << "not found" << endl;


		}
		else if (s1 == "del")
		{
			cin >> s2;
			long long int mynum = stoi(s2);
			/*
			auto it = mp.find(calculatehash(mynum, n));
			long long int count = mp.count(calculatehash(mynum, n));
			for (int i = 0; i < count; i++)
			{
				if ((it->second).number == mynum)
				{
					mp.erase(it);
			//		flag1 = 1;
					break;
				}
				it++;
			}

			*/
			mp.erase(calculatehash(mynum, n));
		
		}


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
