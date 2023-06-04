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
        int k;
        cin >> s >> k;
        stack <char> st;
        int cnt = 1;
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
                    st.push(x);
                    ++cnt;
                    if(cnt == k)
                    {
                        while(cnt--)
                        {
                            st.pop();
                            //xóa k kí tự giống nhau trong stack
                        }
                        cnt = 1;
                    }
                }
                else
                {
                    cnt = 1;
                    st.push(x);
                }
            }
        }
        string res = "";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        if(res.length())
        {
            reverse(res.begin(), res.end());
            for(char x : res)
            {
                cout << x;
            }
        }
        else
        {
            cout << "EMPTY" << endl;
        }
    }
    return 0;
}                      