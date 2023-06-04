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
#include<cstring>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
typedef long long ll;
const long long int MOD = 1e9+7;
int n, s, a[1005], x[1005], check = false;

void Try(int pos, int sum, int cnt)
{
    if(sum == s)
    {
        check = true;
        cout << "[";
        for(int i = 1; i < cnt-1; i++)
        {
            cout << x[i] << " ";
        }
        cout << x[cnt-1] << "]" << " ";
    }
    for(int j = pos; j <= n; j++)
    {
        if(sum <= s)
        {
            x[cnt] = a[j];
            Try(j, sum+a[j], cnt+1);
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
    int t;
    cin >> t;
    while(t--)
    {
        check = false;
        cin >> n >> s;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        Try(1, 0, 1);
        if(!check)
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}                      