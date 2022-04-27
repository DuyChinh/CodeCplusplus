#include <bits/stdc++.h>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	faster();
	int t;
	long long test;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		map <int, int> mp;
		int i = 2;
		while (n > 1)
		{
			if (n % i == 0)
			{
				mp[i]++;
				n /= i;
			}
			else
			{
				i++;
			}
		}
		for (auto it : mp)
		{
			cout << it.first << " " << it.second << " ";
		}
		cout << endl;
	}

}
