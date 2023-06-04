//                     @constant@
// ********  *      *     *   *      *   *      *
// *         *      *     *   * *    *   *      *
// *         ********     *   *  *   *   ********
// *         *      *     *   *    * *   *      *
// ********  *      *     *   *      *   *      *
//                     _cinte_
//                ドアン　ズイ　チン               
//#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
typedef long long ll;

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    cin >> s;
    int a[100005] = {0};
    vector<int> v;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1')
        {
            a['1']++;
        }
        else if(s[i] == '0')
        {
            if(a['1'] > 0)
            {
                v.push_back(a['1']);
                a['1'] = 0;
            }
        }
    }
    if(a['1'] > 0)
    {
        v.push_back(a['1']);
    }
    sort(v.begin(), v.end(), greater<int>());
    ll cnt = 0;
    for(int i = 0; i < v.size(); i+=2)
    {
        cnt+=v[i];
    }
    cout << cnt << endl;
    return 0;
}                      