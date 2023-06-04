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
int n, s, a[1005], x[1005];
vector<string> v;
void Try(int pos, int sum, int cnt)
{
    if(sum == s)
    {
        string res = "";
        for(int i = 1; i < cnt; i++)
        {
            res+=to_string(x[i]) + " ";
        }
        res.erase(res.end()-1);
        v.push_back(res);
    }
    for(int j = pos; j <= n; j++)
    {
        if(sum <= s)
        {
            x[cnt] = a[j];
            Try(j, sum+ a[j], cnt+1);
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
        cin >> n >> s;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        Try(1, 0, 1);
        if(v.size() == 0)
        {
            cout << -1;
        }
        else
        {
            cout << v.size() << " ";
            for(auto x : v)
            {
                cout << "{";
                cout  << x << "}" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}                      