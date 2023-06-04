//                     @constant@
// ********   **      **    **   **      **   **      **
// **         **      **    **   ** *    **   **      **
// **         **********    **   **  *   **   **********
// **         **      **    **   **    * **   **      **
// ********   **      **    **   **      **   **      **
//                     _cinte_
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
int x[20];
ll a[1000005];
int cnt = 0;
void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == 15)
        {
            ll res = 0;
            for(int i = 1; i <= 15; i++)
            {
                if(x[i] == 1)
                {
                    x[i] = 9;
                }
                res = (res*10) + x[i];
            }
            a[++cnt] = res;
        }
        else
        {
            Try(i+1);
        }
    }
}

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Try(1);
    // for(int i = 1; i <= cnt; i++)
    // {
    //     cout << a[i] << endl;
    // }
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(int i = 2; i <= cnt; i++)
        {
            if(a[i] % n == 0)
            {
                cout << a[i] << endl;
                break;
            }
        }
    }
    return 0;
}                      