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
    //t = 1;
    while(t--)
    {
        int s, e;
        cin >> s >> e;
        queue<pair<int, int>> qe;
        qe.push({s, 0});
        set<int> se;
        se.insert(s);
        while(!qe.empty())
        {
            pair<int, int> top = qe.front();
            qe.pop();
            if(top.first == e)
            {
                cout << top.second << endl;
                break;
            }
            if(top.first-1 == e || top.first * 2 == e)
            {
                cout << top.second + 1 << endl;
                break;
            }
            if(se.find(top.first*2) == se.end() && top.first < e)
            {
                qe.push({top.first*2, top.second+1});
                se.insert(top.first*2);
            }
            if(se.find(top.first-1) == se.end() && top.first > 1)
            {
                qe.push({top.first-1, top.second+1});
                se.insert(top.first-1);
            }
        }
    }
    return 0;
}                      