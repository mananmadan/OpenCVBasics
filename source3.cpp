#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long arr[10000];
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + a, greater<int>());
	cout << arr[0] * arr[1];
}