//                     @constant@
// ********   **      **    **   **      **   **      **
// **         **      **    **   ** *    **   **      **
// **         **********    **   **  *   **   **********
// **         **      **    **   **    * **   **      **
// ********   **      **    **   **      **   **      **
//                     _cinte_
//                ドアン　ズイ　チン               
//#include<bits/stdc++.h>
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

bool check(string s)
{
    for(int i = 1; i < s.length()-1; i++)
    {
        if(s[i] == 'A')
        {
            if(s[i+1] != 'E' && s[i-1]!='E')
            {
                return false;
            }
        }
        if(s[i] == 'E')
        {
            if(s[i-1]!='A'&& s[i+1]!= 'A')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    char c;
    cin >> c;
    string s = "";
    for(char j = 'A'; j <= c; j++)
    {
        s+=j;
    }
    do
    {
        if(check(s))
        {
            cout << s << endl;
        }
    } while (next_permutation(s.begin(), s.end()));
    
    return 0;
}                      