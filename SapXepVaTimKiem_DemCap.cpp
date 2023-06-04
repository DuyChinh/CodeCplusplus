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
int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while(t--)
    {
        int n, dif;
        cin >> n >> dif;
        int a[n+1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        int cnt = 0;
        for(int i = 1; i <=n; i++)
        {
            int x = a[i] + dif;
            auto it = lower_bound(a+i+1, a+n+1, x);
            int pos = it - a;
            cnt+=pos-1-i;
        }
        cout << cnt << endl;
    }
    return 0;
}