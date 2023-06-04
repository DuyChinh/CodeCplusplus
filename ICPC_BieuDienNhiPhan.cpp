//                     @constant@
// ********   **      **    **   **      **   **      **
// **         **      **    **   ** *    **   **      **
// **         **********    **   **  *   **   **********
// **         **      **    **   **    * **   **      **
// ********   **      **    **   **      **   **      **
//                     _cinte_
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

string convert(int n)
{
    if(n == 0)
    {
        return string(4, '0');
    }
    string s = "";
    while(n)
    {
        s+= to_string(n % 2);
        n/=2;
    }
    reverse(s.begin(), s.end());
    while(s.length() < 4)
    {
        s = '0' + s;
    }
    return s;
}

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    char a[5][5];
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++)
    {
        string res = convert(s[i] - '0');
        for(int k = 0; k <= 3; k++)
        {
            if(res[k] == '1')
            {
                a[k][i] = '*';
            }
            else
            {
                a[k][i] = '.';
            }
        }
    }
    for(int i = 0; i <= 3; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            cout << a[i][j] << " ";
            if(j == 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}                      
//1900
//. *  . .
//. .  . .
//. .  . .
//* *  . .