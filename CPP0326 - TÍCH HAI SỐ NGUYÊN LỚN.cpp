#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
	string newString = "";
	int n = s.length();
	for (int i = n - 1; i >= 0; i--)
	{
		newString += s[i];
	}
	return newString;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		a = reverse(a);
		b = reverse(b);
		int lenA = a.length();
		int lenB = b.length();
		char c[lenA+lenB] ;
		for (int i = 0; i < lenA+lenB; i++)
		{
			c[i] = '0';
		}
		int x = 0, bonus = 0;
		for (int ib = 0; ib < b.length(); ib++)
		{
			int ia, bonus = 0;
			for ( ia = 0; ia < a.length(); ia++)
			{
				x = (b[ib] - '0')*(a[ia] - '0')+ bonus + (c[ia+ib] - '0');
				c[ia+ib] = x % 10 + '0';
				bonus = x/10;
			}
			if (bonus > 0)
			{
				c[ia+ib] = bonus + '0';
			}
		}
		if (c[lenA + lenB - 1] != '0')
		{
			c[lenA+lenB] = '\0';
		}
		else
		{
			c[lenA+lenB - 1] = '\0';
		}
		string newString = "";
		for (int i = strlen(c) - 1; i >= 0; i--)
		{
			newString += c[i];
		}
		cout << newString << endl;
	}
	return 0;
}

