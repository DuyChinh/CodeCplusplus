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

int cmp(char x)
{
    if(x == '+' || x == '-')
    {
        return 1;
    }
    if(x == '*' || x == '/')
    {
        return 2;
    }
    return 0;
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
    //cin >> t;
    t = 1;
    while(t--)
    {
        string s;
        cin >> s;
        string res="";
        stack<char> st;
        for(char x : s)
        {
            if(x == '(')
            {
                st.push(x);
            }
            else if(x == ')')
            {
                while(!st.empty() && st.top() != '(')
                {
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(isalpha(x))
            {
                res+=x;
            }
            else
            {
                while(!st.empty() && cmp(st.top()) >= cmp(x))
                {
                    res+=st.top();
                    st.pop();
                }
                st.push(x);
            }
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        cout << res << endl;
    }
    return 0;
}                      