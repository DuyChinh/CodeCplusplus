#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
	string fullName;
	string id;
	string date;
	double gpa;
public:
	SinhVien()
	{
		this->fullName = "";
		this->id = "";
		this->date = "";
		this->gpa = 0;
	}
	
	void nhap()
	{
		fflush(stdin);
		getline(cin,fullName);
		cin >> id;
		cin >> date;
		cin >> gpa;
	}
	
	void standardB(string birth)
	{
		if(birth[1] == '/')
			birth.insert(0,"0");
		if(birth[4] == '/')
			birth.insert(3,"0");
		cout << birth << " ";
	}
	
	void xuat()
	{
		cout << "B20DCCN001 ";
		cout << fullName << " ";
		cout << id << " ";
		standardB(date);
		cout << fixed << setprecision(2) << gpa;
	}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
