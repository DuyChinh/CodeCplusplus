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
int n, m;
char a[1001][1001];
int dx[4] = {-1, 0, 0 , 1};
int dy[4] = {0, -1, 1, 0};
void DFS(int i, int j)
{
    cout << i << " " << j << endl;
    a[i][j] = 'o';
    for(int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <=n && a[i1][j1] == 'x')
        {
            DFS(i1, j1);
        }
    }
}

bool BFS(int i, int j)
{
    //cout << i << " " << j << endl;
    queue<pair<int, int>> qe;
    qe.push({i, j});
    a[i][j] = 'x';
    while(!qe.empty())
    {
        pair<int, int> v = qe.front();
        qe.pop();
        for(int k = 0; k < 4; k++)
        {
            int i1 = v.first+dx[k];
            int j1 = v.second+dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 'x')
            {
                if(a[i1][j1] == 'B')
                {
                    return true;
                }
                qe.push({i1, j1});
                a[i1][j1] = 'x';
            }
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
    cin >> n >> m;
    int s, t;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'A')
            {
                s = i; t = j;
            }
        }
    }
    if(BFS(s, t))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}     
//Test Case:
// 6 6
// x x x o o o
// o o x o o o 
// o x x x x o
// o o o o o x
// x x o x o x
// x o x x o x       
//output = 4;    