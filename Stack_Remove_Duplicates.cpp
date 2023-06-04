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
        string s;
        cin >> s;
        stack<char> st;
        for(char x : s)
        {
            if(st.empty())
            {
                st.push(x);
            }
            else
            {
                if(x == st.top())
                {
                    st.pop();
                }
                else
                {
                    st.push(x);
                }
            }
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        if(res.size())
        {
            reverse(begin(res), end(res));
            cout << res << endl;
        }
        else
        {
            cout << "EMPTY" << endl;
        }
    }
    return 0;
}                      