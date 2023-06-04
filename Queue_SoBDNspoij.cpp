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
typedef unsigned long long ll;
const long long int MOD = 1e9+7;

int main()
{
    faster();
    if (fopen("input.txt", "r"))            
    {                                       
        freopen("input.txt", "r", stdin);   
        freopen("output.txt", "w", stdout); 
    }
    vector<ll> res;
    queue<ll> qe;
    qe.push(1);
    //ll tmp = qe.front();
    while(1)
    {
        ll tmp = qe.front();
        qe.pop();
        if(tmp >= pow(2, 63))
        {
            break;
        }
        res.push_back(tmp);
        qe.push(tmp*10);
        qe.push(tmp*10+1);
    }
    int t;
    cin >> t;
    //t = 1;
    while(t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        for(ll it : res)
        {
            if(it < n)
            {
                ++cnt;
                //lower_bound
            }
        }
        cout << cnt << endl;
    }
    return 0;
}                      