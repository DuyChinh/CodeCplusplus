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
int n, p, s, a[1005], mm, x[1005];
bool prime[100005];
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i*i <= 1000; i++)
    {
        if(prime[i])
        {
            for(int j = i*i; j <= 100000; j+=i)
            {
                prime[j] = false;
            }
        }
    }
}
vector<string> v;
void Try(int pos, int sum, int cnt)
{
    if(sum == s  && cnt - 1 == n)
    {
        string res = "";
        for(int i = 1; i < cnt; i++)
        {
            res+=to_string(x[i])+" ";
        }
        v.push_back(res);
        return;
    }
    for(int j = pos; j <= mm; j++)
    {
        if(sum <= s)
        {
            x[cnt] = a[j];
            Try(j+1, sum+a[j], cnt+1);
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
    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        cin >> n >> p >> s;
        int j = p+1,  m = 1;
        while(j <= s)
        {
            if(prime[j])
            {   
                a[m] = j;
                m++;
            }
            j++;
        }
        mm = m - 1;
        Try(1, 0, 1);
        sort(v.begin(), v.end());
        cout << v.size() << endl;
        for(auto x : v)
        {
            cout << x << endl;
        }
    }
    return 0;
}                      