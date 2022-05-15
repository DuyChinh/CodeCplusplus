#include iostream
#include bitsstdc++.h
using namespace std;

long long sumDigits(long long n)
{
	long long sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n=10;
	}
	return sum;
}

void checkSmith(long long n)
{
	long long sum1 = sumDigits(n);
	long long sum2 = 0;
	long long ok = n;
	for (int i = 2; ii =n; i++)
	{
		while (n % i == 0)
		{
			n=i;
			sum2 += sumDigits(i);
		}
	}
	if (n != 1)
	{
		sum2 += sumDigits(n);
	}
	if (ok == n)
	{
		cout  NO  endl;
	}
	else if (sum1 == sum2)
	{
		cout  YES  endl;
	}
	else if (ok != n && sum1 != sum2)
	{
	    cout  NO  endl;
	}
}

int main()
{
	int t;
	cin  t;
	while (t--)
	{
		long long n;
		cin  n;
		checkSmith(n);
	}
	return 0;
}