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
        string s;
        cin >> s;
        stack<ll> st;
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(isdigit(s[i]))
            {
                st.push(s[i] - '0');
            }
            else
            {
                ll res1 = st.top();
                st.pop();
                ll res2 = st.top();
                st.pop();
                ll res;
                if(s[i] == '+')
                {
                    res = res1 + res2;
                }
                else if(s[i] == '-')
                {
                    res = res1 - res2;
                }
                else if(s[i] == '/')
                {
                    res = res1/res2;
                }
                else if(s[i] == '*')
                {
                    res = res1 * res2;
                }
                st.push(res);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}                      