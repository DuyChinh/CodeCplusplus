#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n, int k)
{
	int begin = 0, end = n - 1;
	int mid;
	int pos = -1;
	while (begin <= end)
	{
		mid =  (begin+end)/2;
		if (a[mid] == k)
		{
			return 1;
		}
		if (a[mid] > k)
		{
			end = mid - 1;
		}
		else
		{
			begin = mid + 1;
		}
	}
	return pos;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n+1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << search(a, n , k);
		cout << endl;
	}
	return 0;
}
