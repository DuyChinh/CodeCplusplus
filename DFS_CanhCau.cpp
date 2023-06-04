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
vector<int> adj[1005];
bool visited[1005];
vector<pair<int, int>> edge;
void DFS(int u)
{
    visited[u] = true;
    for(int v : adj[u])
    {
        if(!visited[v])
        {
            visited[v] = true;
            DFS(v);
        }
    }
}

void DFS2(int u, int s, int t)
{
    visited[u] = true;
    for(int v : adj[u])
    {
        if((u == s && v == t)||((u == t) && (v==s)))
        {
            continue;
        }
        if(!visited[v])
        {
            visited[v] = true;
            DFS2(v, s, t);
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
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        edge.push_back({x, y});
    }
    memset(visited, false, sizeof(visited));
    int cnt1 = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            ++cnt1;
            DFS(i);
        }
    }
    int res = 0;
    for(auto it : edge)
    {
        int u = it.first, v = it.second;
        memset(visited, false, sizeof(visited));
        int cnt2 = 0;
        for(int j = 1; j <= n; j++)
        {
            if(!visited[j])
            {
                ++cnt2;
                DFS2(j, u, v);
            }
        }
        if(cnt2 > cnt1)
        {
            ++res;
        }
    }
    cout << res << endl;
    return 0;
}                      