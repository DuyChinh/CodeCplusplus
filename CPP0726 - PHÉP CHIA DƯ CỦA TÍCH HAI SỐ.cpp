//Phep nhan An Do
#include <bits/stdc++.h>
using namespace std;
long long product(long long a, long long b, long long c)
{
	long long sum = 0;
	while(b!=0)
	{
		if (b % 2 == 1)
		{
			sum+=a;
			sum%=c;
		}
		a+=a;
		a%=c;
		b/=2;
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		cout << product(a, b, c) << endl;
	}
	return 0;
}