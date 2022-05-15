#include bitsstdc++.h
using namespace std;
int a[100], ok, n, k;

void create()
{
	for (int i = 1; i = k ; i++)
	{
		a[i] = i;
	}
}

void generate()
{
	int i = k;
	while(i = 1 && a[i] == n - k + i)
	{
		i--;
	}
	if (i == 0)
	{
		ok = 0;
	}
	else
	{
		a[i]++;
		for (int j = i + 1; j = k; j++)
		{
			a[j] = a[j-1] + 1;
		}
	}
}

int main()
{
	int t;
	cin  t;
	while(t--)
	{
		cin  n  k;
		ok = 1;
		create();
		while(ok)
		{
			for (int i = 1; i = k; i++)
			{
				cout  a[i];
			}
			cout   ;
			generate();
		}
		cout  endl;
	}
	return 0;
}