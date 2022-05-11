#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMin(int a[], int n, int x)
{
	int minn = n+1 , left = 0, right = 0, sum = 0;
	while (right < n)
	{
		while(sum <= x && right < n)
		{
			sum += a[right++];
		}
		while (sum > x && left < n)
		{
			minn = min(right - left, minn);
			sum -= a[left++];
		}
	}
	return minn;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n+1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		if (findMin(a, n, x) == n + 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << findMin(a, n, x) << endl;
		}
	}
	return 0;
}

