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
        string ans = "";
        stack<char> st, mark;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                mark.push(s[i-1]);
            }
            else if(s[i] == ')')
            {
                string res="";
                while(!st.empty())
                {
                    char c1, c2;
                    c1 = st.top();
                    st.pop();
                    c2 = st.top();
                    st.pop();
                    if(mark.top() == '-')
                    {
                        res = c1 + res;
                        if(c2 == '-')
                        {
                            res = '+' + res;
                        }
                        else 
                        {
                            res = '-' + res;
                        }
                    }
                    else
                    {
                        res = c1 + res;
                        res = c2 + res;
                    }
                    if(c2 == '(')
                    {
                        for(int j = 1; j < res.size(); j++)
                        {
                            st.push(res[j]);
                        }
                        break;
                    }
                }
                mark.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
} 
