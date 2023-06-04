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
int father[1005];
vector<int> res;
bool DFS(int u)
{
    visited[u] = true;
    res.push_back(u);
    sort(adj[u].begin(), adj[u].end());
    for(int v : adj[u])
    {
        if(!visited[v])
        {
            father[v] = u;
            if(DFS(v))
            {
                return true;
            }
        }
        else if(v!=father[u])
        {
            return true;
        }
    }
    return false;
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
        int n, m;
        cin >> n >> m;
        int ok = 0;
        for(int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(visited, false, sizeof(visited));
        if(DFS(1))
        {
            ok = 1;
        }
        if(ok)
        {
            res.push_back(1);
            for(int v : res)
            {
                cout << v << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        res.clear();
        for(int i = 1; i <= n; i++)
        {
            adj[i].clear();
            father[i] = 0;
        }
    }
    return 0;
}                      