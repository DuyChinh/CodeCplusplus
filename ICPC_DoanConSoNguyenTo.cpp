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
bool prime[2000005];
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i <= 20000; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*i; j <= 2000000; j+=i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    sieve();
    int a[100005];
    a[1] = 2;
    int j = 3, cnt = 2;
    while(cnt <= 100000)
    {
        if(prime[j])
        {
            a[cnt] = j;
            cnt++;
        }
        j+=2;
    }
    int start, end;
    string p;
    cin >> start >> end >> p;
    int total_cnt = 0;
    for(int i = start; i <= end; i++)
    {
        if(prime[a[i]] == true)
        {
            string res = to_string(a[i]);
            if(res.find(p) < 20)
            {
                total_cnt++;
            }
        }
    }
    cout << total_cnt << endl;
    return 0;
}                      