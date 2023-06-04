//                      @constant@
// ********   **      **    **   **      **   **      **
// **         **      **    **   ** *    **   **      **
// **         **********    **   **  *   **   **********
// **         **      **    **   **    * **   **      **
// ********   **      **    **   **      **   **      **
//                       _cinte_        
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
void evaluate(string s)
{
    stack<ll> st;
    for(char x : s)
    {
        if(isdigit(x))
        {
            st.push(x - '0');
        }
        else
        {
            ll tmp1 = st.top();
            st.pop();
            ll tmp2 = st.top();
            st.pop();
            if(x == '+')
            {
                st.push(tmp1+tmp2);
            }
            else if(x == '-')
            {
                st.push(tmp2-tmp1);
            }
            else if(x == '*')
            {
                st.push(tmp1*tmp2);
            }
            else if(x == '/')
            {
                st.push(tmp2/tmp1);
            }
        }
    }
    cout << st.top() << endl;
}

int priority(char x)
{
    if(x == '-' || x == '+')
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
        string  res = "";
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
                    res+= st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(isdigit(x))
            {
                res+=x;
            }
            else 
            {
                while(!st.empty() && priority(st.top()) >= priority(x))
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
        for(int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
        evaluate(res);
    }
    return 0;
}                      