//CPP0262
//sum1 + sum2 = total_sum;
//sum1 - sum2 = m;
//--> sum1 = (total_sum+m)/2;
#include<bits/stdc++.h> 
typedef long long int ll;
using namespace std; 

bool checkCoprime(ll n, ll m)
{
	ll total_sum = ((n+1)*n)/2;
	ll sum1, sum2;
	sum1 = (total_sum+m)/2;
	sum2 = total_sum - sum1;
	if (total_sum < m)
	{
		return false;
	}
	if (sum1 + sum2 == total_sum && sum1 - sum2 == m)
	{
		if (__gcd(sum1, sum2) == 1)
		{
			return true;
		}
	}
	return false;
}

int main()
{ 
	int t; 
	cin >> t; 
	while(t--)
	{ 
		ll n, m;
		cin >> n >> m;
		if (checkCoprime(n, m) == true)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl; 
		}
	} 
	return 0;
}
