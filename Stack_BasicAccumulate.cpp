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
    stack<int> st;
    vector<int> res;
    int t;
    cin >> t;
    //t = 1;
    while(t--)
    {
        string s;
        cin >> s;
        if(s == "show")
        {
            while(!st.empty())
            {
                res.push_back(st.top());
                st.pop();
                reverse(res.begin(), res.end());
            }
            if(res.size())
            {
                for(int x : res)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "EMPTY" << endl;
            }
        }
        else if(s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if(s == "pop")
        {
            if(!st.empty())
            {
                st.pop();
            }
        }
    }
    return 0;
}                      