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
int n, a[1005], x[1005] ;
vector<string> v;
void Try(int pos, int cnt)
{
    if(cnt >= 3)
    {
        string res = "";
        for(int i = 1; i < cnt; i++)
        {
            res+=to_string(x[i])+ " ";
        }
        v.push_back(res);
    }
    for(int j = pos; j <= n; j++)
    {
        if(a[j] > x[cnt-1])
        {
            x[cnt] = a[j];
            Try(j+1, cnt+1);
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
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1, 1);
    sort(v.begin(), v.end());
    for(string x : v)
    {
        cout << x << endl;
    }
    return 0;
}                      