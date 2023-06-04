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
int n, a[1005], x[1005];
vector<string> v;
void Try(int pos, int sum, int cnt)
{
    if(sum % 2 != 0)
    {
        string res = "";
        for(int i = 1; i < cnt; i++)
        {
            //cout << x[i] << " ";
            res+=to_string(x[i])+" ";
        }
        v.push_back(res);
    }
    for(int j = pos; j <= n; j++)
    {
        if(j <= n)
        {
            x[cnt] = a[j];
            Try(j+1, sum+a[j], cnt+1);
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
        v.clear();
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a+1, a+n+1, greater<int>());
        Try(1, 0, 1);
        sort(v.begin(), v.end());
        for(auto x : v)
        {
            cout << x << endl;
        }
    }
    return 0;
}                      