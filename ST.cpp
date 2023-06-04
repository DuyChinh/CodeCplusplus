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

int solve(int s)
{
    queue<pair<int, int>> qe;
    qe.push({s, 0});
    map<int, int> mp;
    mp[s]++;
    while(!qe.empty())
    {
        auto top = qe.front(); qe.pop();
        if(top.first == 1)
        {
            return top.second;
        }
        if(top.first - 1 == 1)
        {
            return  top.second + 1;
        }
        for(int i = 2; i <= sqrt(top.first); i++)
        {
            if(top.first % i == 0 && !mp[top.first/i])
            {
                qe.push({top.first/i, top.second+1});
                mp[top.first/i]++;
            }
        }
        if(!mp[top.first-1] && top.first > 1)
        {
            qe.push({top.first-1, top.second+1});
            mp[top.first-1]++;
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
    cin >> t;
    // t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}                      