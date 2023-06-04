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

struct Matrix
{
    ll a[10][10];
};

Matrix productMatrix(Matrix x, Matrix y)
{
    Matrix b;
    for(int k = 0; k < 2; k++)
    {
        for(int i = 0; i < 2; i++)
        {
            b.a[k][i] = 0;
            for(int j = 0; j < 2; j++)
            {
                b.a[k][i] += x.a[k][j]*y.a[j][i];
                b.a[k][i]%=MOD;
            }
        }
    }
    return b;
}

Matrix powMod(Matrix a, ll n)
{
    if(n == 1)
    {
        return a;
    }
    Matrix tmp = powMod(a, n/2);
    if(n % 2 == 0)
    {
        return productMatrix(tmp, tmp);
    }
    return productMatrix(productMatrix(tmp, tmp), a);
}

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin >> n;
    Matrix c;
    c.a[0][0] = c.a[0][1] = c.a[1][0] = 1;
    c.a[1][1] = 0;
    Matrix b = powMod(c, n-1);
    cout << b.a[0][0] << endl;
    return 0;
}                      