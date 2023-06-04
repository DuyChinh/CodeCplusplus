//                     @constant@
// ********  *      *     *   *      *   *      *
// *         *      *     *   * *    *   *      *
// *         ********     *   *  *   *   ********
// *         *      *     *   *    * *   *      *
// ********  *      *     *   *      *   *      *
//                     _cinte_
//                ドアン　ズイ　チン               
//#include<bits/stdc++.h>
//Chia de tri
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
typedef long long ll;
const long long  int MOD = 1e9+7;

ll powMod1(ll a, ll b)
{
    if(b == 0)
    {
        return 1;
    }
    ll tmp = pow(a, b/2);
    tmp = (tmp*tmp)%MOD;
    return (tmp *(a*(b%2))) % MOD;
}

ll powMod2(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b % 2 != 1)
        {
            res*=a;
            res%=MOD;
        }
        a*=a;
        a%=MOD;
        b/=2;
    }
    return res;
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
    cout << powMod1(n, k);
    return 0;
}                      