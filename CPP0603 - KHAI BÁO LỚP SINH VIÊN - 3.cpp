//CPP0602
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
public:
	string fullName;
	string id;
	string date;
	double gpa;
	
	friend istream &operator>>(istream &is, SinhVien &A)
	{
		getline(is >> ws, A.fullName);
		getline(is >> ws, A.id);
		is >> A.date;
		is >> A.gpa;
		return is;
	}
	
	friend ostream &operator<<(ostream &os, SinhVien A)
    {
    	os << "B20DCCN001 ";
    	string s1 = A.fullName;
    	for (int i = 0; i < s1.length(); i++)
    	{
    		s1[i] = tolower(s1[i]);
		}
    	stringstream ss(s1);
    	vector <string> v;
    	while (ss >> s1)
    	{
    		v.push_back(s1);
		}
		for (int i = 0; i < v.size(); i++)
		{
			v[i][0] = toupper(v[i][0]);
			cout << v[i] << " ";
		}
		
        os << A.id << " ";
        string s = A.date;
        if (s[1] == '/')
		{
			s.insert(0,"0");
		}
		if (s[4] == '/')
		{
			s.insert(3,"0");
		}
        os <<  s << " ";
        os << fixed << setprecision(2) << A.gpa;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}