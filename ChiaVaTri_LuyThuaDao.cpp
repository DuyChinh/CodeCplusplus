//                     @constant@
// ********  *      *     *   *      *   *      *
// *         *      *     *   * *    *   *      *
// *         ********     *   *  *   *   ********
// *         *      *     *   *    * *   *      *
// ********  *      *     *   *      *   *      *
//                     _cinte_
//                ドアン　ズイ　チン               
//#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
typedef long long ll;
const ll MOD = 1e9+7;
ll reverseNumber(ll n)
{
    ll res = 0;
    while(n)
    {
        res =(res*10)+n%10;
        n/=10;
    }
    return res;
}

ll powMod(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b % 2 != 0)
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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << powMod(n, reverseNumber(n)) << endl;
    }
    return 0;
}                      