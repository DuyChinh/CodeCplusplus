//                      @constant@
// ********   **      **    **   **      **   **      **
// **         **      **    **   ** *    **   **      **
// **         **********    **   **  *   **   **********
// **         **      **    **   **    * **   **      **
// ********   **      **    **   **      **   **      **
//                       _cinte_
//                ドアン　ズイ　チン               
#include<bits/stdc++.h>
#include<set>
#include<map>
#include <cmath>
#include <cstdio>
#include <vector>
#include<cstring>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
typedef long long ll;
const long long int MOD = 1e9+7;

int main()
{
    faster();
    if (fopen("input.txt", "r"))            
    {                                       
        freopen("input.txt", "r", stdin);   
        freopen("output.txt", "w", stdout); 
    }
    vector<ll> res;
    queue<ll> qe;
    qe.push(8);
    ll tmp = 8;
    while(tmp <= 1e18)
    {
        tmp = qe.front();
        qe.pop();
        res.push_back(tmp);
        qe.push(tmp*10 + 0);
        qe.push(tmp*10 + 8);
    }
    ll ans[300];
    for(int i = 1; i <= 200; i++)
    {
        for(ll x : res)
        {
            if(x % i == 0)
            {
                ans[i] = x;
                break;
            }
        }
    }
    int t;
    cin >> t;
    //t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}                      