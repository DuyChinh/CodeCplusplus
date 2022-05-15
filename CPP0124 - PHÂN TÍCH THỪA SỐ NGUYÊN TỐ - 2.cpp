//CPP0124
#include <bits/stdc++.h>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using namespace std;

int main()
{
	faster();
	long long n;
	cin >> n;
	for (int i = 2; i <=sqrt(n); i++)
	{
		int count = 0;
		while (n % i == 0)
		{
			++count;
			n/=i;
		}
		if (count != 0)
		{
			cout << i << " " << count << endl;
		}
	}
	if (n!=1)
	{
		cout << n << " " << "1" << endl;
	}
}
