//CPP0610
#include<bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    long long  x, y;
public:
	PhanSo(long long  x, long long y)
	{
		this->x = x;
		this->y = y; 
	}
	PhanSo()
	{
		
	}
	friend istream &operator>>(istream &is, PhanSo &A)
	{
		is >> A.x >> A.y;
		return is;
	}
	PhanSo operator + (PhanSo B)
	{
		PhanSo C;
		C.x = x*B.y+B.x*y;
		C.y = B.y*y;
		long long gcd = __gcd(C.x,C.y);
		C.x/=gcd;
		C.y/=gcd;
		return C;
	}

	friend ostream &operator<<(ostream &os, PhanSo A)
	{
		os << A.x << "/"<<A.y;
		return os;
	}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}