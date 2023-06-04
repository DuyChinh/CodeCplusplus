//                     @constant@
// ********   **      **    **   **      **   **      **
// **         **      **    **   ** *    **   **      **
// **         **********    **   **  *   **   **********
// **         **      **    **   **    * **   **      **
// ********   **      **    **   **      **   **      **
//                     _cinte_
//                ドアン　ズイ　チン               
//#include<bits/stdc++.h>
#include<set>
#include<map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
typedef long long ll;
const long long int MOD = 1e9+7;
ll n, k, sum = 0;

struct Matrix
{
    ll a[30][30];
    friend istream &operator>>(istream &is, Matrix &obj)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                is >> obj.a[i][j];
            }
        }
        return is;
    }
    friend ostream &operator<<(ostream &os, Matrix &obj)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j  < n; j++)
            {
                os << obj.a[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }
    friend Matrix operator *(Matrix x, Matrix y)
    {
        Matrix c;
        for(int k = 0; k < n; k++)
        {
            for(int i = 0; i < n; i++)
            {
                c.a[k][i] = 0;
                for(int j = 0; j < n; j++)
                {
                    c.a[k][i] += x.a[k][j] * y.a[j][i];
                    c.a[k][i]%=MOD;
                }
            }
        }
        return c;
    }
};

Matrix powMod(Matrix a, ll b)
{
    if(b == 1)
    {
        return a;
    }
    Matrix tmp = powMod(a, b/2);
    if(b % 2 == 0)
    {
        return tmp*tmp;
    }
    return tmp*tmp*a;
}

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin >> n >> k;
    Matrix a;
    cin >> a;
    Matrix c = powMod(a, k);
    for(int i = 0; i < n; i++)
    {
        sum+=c.a[i][n-1];
        sum%=MOD;
    }
    cout << sum << endl;
    return 0;
}                      