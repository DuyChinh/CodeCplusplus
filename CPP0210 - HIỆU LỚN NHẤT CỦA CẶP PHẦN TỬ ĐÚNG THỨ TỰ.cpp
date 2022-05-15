//CPP0210
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
		int a[n+1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int max = a[1] - a[0];
		int min_element = a[0];
		for (int i = 1; i < n; i++)
		{
			if (a[i] - min_element > max)
			{
				max = a[i] - min_element;
			}
			if (a[i] < min_element)
			{
				min_element = a[i];
			}
		}
		if (max < 0)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << max <<  endl;
		}
	}
}

