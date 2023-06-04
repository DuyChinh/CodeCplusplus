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
    int cnt = 0;
    t = 1;
    while(t--)
    {
        //Step 1: ) ---> ( --> push in stack
        string s;
        cin >> s;
        stack<char> st;
        for(char x : s)
        {
            if(x == '(')
            {
                st.push(x);
                //2 ( --> theses correct
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    ++cnt;
                    st.push('(');
                }
            }
        }
        cout << st.size()/2 + cnt;
        //2 ( --> ()
    }
    return 0;
}                      