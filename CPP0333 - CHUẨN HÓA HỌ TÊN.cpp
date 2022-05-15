////CPP0333
#include <bits/stdc++.h>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
	faster();
	string s;
	getline(cin >> ws, s);
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	while (ss >> s)
	{
		v.push_back(s);
	}
	int p = v.size();
	for (int i = 0; i < p - 2; i++)
	{
		v[i][0] = toupper(v[i][0]);
		cout << v[i] << " ";
	}
	v[p-2][0] = toupper(v[p-2][0]);
	cout << v[p-2] << ", ";
	for (int i = 0; i < v[p-1].length(); i++)
	{
		v[p-1][i] = toupper(v[p-1][i]);
	}
	cout << v[p-1];
	return 0;
}
