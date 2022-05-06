#include <iostream>
#include <set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		multiset <int> se;
		int a[n+1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < k; i++)
		{
			se.insert(a[i]);
		}
		cout << *se.rbegin() << " ";
		for (int i = k; i < n; i++)
		{
			se.erase(se.find(a[i - k]));
			se.insert(a[i]);
			cout << *se.rbegin() << " ";
		}
		cout << endl;
	}
	return 0;
}