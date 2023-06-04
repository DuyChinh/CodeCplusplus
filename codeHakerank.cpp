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
int n, a[50][50], x[1005], res = 1e9, cmin = 1e9;
bool visited[1005];

void Try(int i, int sum)
{
    for(int j = 2; j <= n; j++)
    {
        if(!visited[j])
        {
            x[i] = j;
            visited[j] = true;
            sum+=a[x[i-1]][x[i]];
            if(i == n)
            {
                sum += a[x[i]][1];
                res = min(res, sum);
            }
            else if(sum + (n-i+1)*cmin < res)
            {
                Try(i+1, sum);
            }
            visited[j] = false;
            sum-=a[x[i-1]][x[i]];
        }
    }
}

int main()
{
    faster();
    if (fopen("input.txt", "r"))            
    {                                       
        freopen("input.txt", "r", stdin);   
        freopen("output.txt", "w", stdout); 
    }
    int t;
    //cin >> t;
    t = 1;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if(a[i][j])
                {
                    cmin = min(cmin, a[i][j]);
                }
            }
        }
        x[1] = 1;
        Try(2, 0);
        cout << res << endl;
    }
    return 0;
}                      