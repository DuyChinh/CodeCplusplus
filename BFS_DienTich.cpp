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
    int n, m;
    cin >> n >> m;
    char a[n+1][m+1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    int element = 0;
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, -1, 1, 0};
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == '.')
            {
                element = 1;
                queue<pair<int, int>> qe;
                qe.push({i, j});
                a[i][j] = '#';
                while(!qe.empty())
                {
                    pair<int, int> st = qe.front();
                    qe.pop();
                    for(int i = 0; i < 4; i++)
                    {
                        int u = st.first + dx[i];
                        int v = st.second + dy[i];
                        if(u >= 1 && u <= n && v >= 1 && v <= m && a[u][v] == '.')
                        {
                            ++element;
                            qe.push({u, v});
                            a[u][v] = '#';
                        }
                    }
                }
                cout << element << " ";
            }
        }
    }
    return 0;
}                      