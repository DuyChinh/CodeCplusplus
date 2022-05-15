#include <bits/stdc++.h>
using namespace std;

class Student 
{
public:
	string id, fullName, group, email;
public:
	friend istream &operator>>(istream &is, Student &A)
	{
		getline(is >> ws,A.id);
		getline(is >> ws,A.fullName);
		getline(is >> ws,A.group);
		getline(is >> ws,A.email);
		return is;
	}
	
	friend ostream &operator<<(ostream &os, Student &A)
	{
		os << A.id << " " << A.fullName << " ";
		os << A.group << " " << A.email << endl;
		return os;
	}
};

bool cmp(Student a, Student b)
{
	return a.id < b.id;
}

void arrange(Student p[], int n)
{
	sort(p, p+n, cmp);
}

int main()
{
	int n = 0;
	Student p[1001];
	while (cin >> p[n])
	{
		n++;
	}
	arrange(p, n);
	for (int i = 0; i < n; i++)
	{
		cout << p[i];
	}
	return 0;
}