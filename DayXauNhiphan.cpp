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
ll fibo[93];

void findChar(ll n, ll k)
{
    while(n > 2)
    {
        if(k <= fibo[n-2])
        {
            return findChar(n-2, k);
        }
        else
        {
            return findChar(n-1, k-fibo[n-2]);
        }
    }
    if(n == 1)
    {
        cout << '0';
    }
    else if(n == 2)
    {
        cout << '1';
    }
}

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n, k;
    cin >> n >> k;
    fibo[1]=fibo[2] = 1;
    for(int i = 3; i <= 92; i++)
    {
        fibo[i] = fibo[i-1]+ fibo[i-2];
    }
    findChar(n, k);
    return 0;
}                      