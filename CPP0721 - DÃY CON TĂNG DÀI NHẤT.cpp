#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n+1], b[n+1];
		int maxx = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = 1;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (a[i] > a[j])
				{
					b[i] = max(b[i], b[j]+1);
				}
			}
			maxx = max(maxx,b[i]);
		}
		cout << maxx << endl;
	}
	return 0;
}
