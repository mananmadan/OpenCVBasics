#include<iostream>
#include<conio.h>
using namespace std;

int  main()
{
//	clrscr();
	int a[20], b[20], c[40];
	cout << " enter the no of terms in 1st array ";
	int d, e;
	cin >> d;
	for (int i = 0; i < d; i++)
	{
		cout << "enter the value of a[ " << i << "] ";
		cin >> a[i];
	}
	cout << " enter the no of terms in 2nd array ";
	cin >> e;
	for (int i = 0; i < e; i++)
	{
		cout << "enter the value of b[ " << i << "] ";
		cin >> b[i];
	}
	for (int j = 0; j < e + d; j++)
	{
		if (j < d)
			c[j] = a[j];
		else
			c[j] = b[j - d];
	}
	for (int i = 0; i < d + e; i++)
	{
		for (int j = 0; j < d + e - i; j++)
		{
			if (c[j] > c[j + 1])
			{
				c[j] = c[j] + c[j + 1];
				c[j + 1] = c[j] - c[j + 1];
				c[j] = c[j] - c[j + 1];
			}
		}
	}
	for (int i = 0; i < d + e; i++)
	{
		cout << " the c[" << i << "] is" << c[i] << "\n";
	}

//	getch();
}