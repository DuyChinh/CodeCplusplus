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
    //cin >> t;
    t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> res;
        queue<ll> qe;
        qe.push(1);
        while(1)
        {
            int tmp = qe.front();
            res.push_back(tmp);
            qe.pop();
            qe.push(tmp*10 + 0);
            qe.push(tmp*10 + 1);
            if(res.size() >= n)
            {
                break;
            }
        }
        for(int x : res)
        {
            cout << x << " ";
        }
    }
    return 0;
}                      