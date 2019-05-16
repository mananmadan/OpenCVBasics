// ConsoleApplication35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void computeLPSArray(char* pat,long long int M, long long int* lps);

// Prints occurrences of txt[] in pat[] 
void KMPSearch(char* pat, char* txt)
{
	long long int M = strlen(pat);
	long long int N = strlen(txt);

	// create lps[] that will hold the longest prefix suffix 
	// values for pattern 
	long long int *lps;
	lps = new long long int[M];

	// Preprocess the pattern (calculate lps[] array) 
	computeLPSArray(pat, M, lps);

	long long  int i = 0; // index for txt[] 
	long long int j = 0; // index for pat[] 
	while (i < N) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}

		if (j == M) {
			cout<< i - j<<" ";
			j = lps[j - 1];
		}

		// mismatch after j matches 
		else if (i < N && pat[j] != txt[i]) {
			// Do not match lps[0..lps[j-1]] characters, 
			// they will match anyway 
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
}

// Fills lps[] for given patttern pat[0..M-1] 
void computeLPSArray(char* pat, long long int M, long long int* lps)
{
	// length of the previous longest prefix suffix 
	long long int len = 0;

	lps[0] = 0; // lps[0] is always 0 

	// the loop calculates lps[i] for i = 1 to M-1 
	long long int i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len]) 
		{
			// This is tricky. Consider the example. 
			// AAACAAAA and i = 7. The idea is similar 
			// to search step. 
			if (len != 0) {
				len = lps[len - 1];

				// Also, note that we do not increment 
				// i here 
			}
			else // if (len == 0) 
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

// Driver program to test above function 
int main()
{
	char txt[500000];
	char pat[500000];
	cin >> pat;
	cin >> txt;
	KMPSearch(pat, txt);
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
