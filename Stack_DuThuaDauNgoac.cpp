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

bool checkChar(char x)
{
    if(x == '-' || x == '+' || x == '/' || x == '*')
    {
        return true;
    }
    return false;
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
        stack<char> st;
        int ok = 0;
        for(char x : s)
        {
            if(x != ')')
            {
                st.push(x);
            }
            else
            {
                bool check = true;
                while(st.top() != '(')
                {
                    if(checkChar(st.top()))
                    {
                        check = false;
                    }
                    st.pop();
                }
                if(check == true)
                {
                    ok = 1;
                    break;
                }
                st.pop();
            }
        }
        if(ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}                      