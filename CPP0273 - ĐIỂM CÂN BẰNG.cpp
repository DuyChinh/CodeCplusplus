//CPP0273
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n+1];
		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum+=a[i];
		}
		long long left = 0;
		int ok = -1;
		for (int i = 0; i < n; i++)
		{
			if (sum - a[i] == (left*2))
			{
				ok = i+1;
				break;
			}
			left += a[i];
		}
		cout << ok << endl;
	}
	return 0;
}

