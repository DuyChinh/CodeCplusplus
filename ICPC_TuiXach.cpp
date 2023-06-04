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
    int n, c;
    cin >> n >> c;
    int a[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int cnt = 0;
    int l = 0, r = n - 1;
    while(l < r)
    {
        if(a[l] + a[r] <= c)
        {
            cnt++;
            l++;
            r--;
        }
        else
        {
            cnt++;
            r--;
        }
    }
    cout << cnt << endl;
    return 0;
}                      