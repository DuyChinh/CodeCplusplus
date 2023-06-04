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
int n, k, a[1005], total_sum = 0, cnt= 0;
bool check[1005], ok = false;

void Try(int pos, int sum)
{
    if(sum == total_sum)
    {
        cnt++;
    }
    if(cnt == k)
    {
        ok = true;
        return;
    }
    for(int j = pos; j <= n; j++)
    {
        if(!check[j])
        {
            check[j] = true;
            if(sum <= total_sum)
            {
                Try(j+1, sum+a[j]);
            }
            check[j] = false;
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
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ok = false;
        cnt = 0;
        total_sum = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            total_sum+=a[i];
        }
        if(total_sum % k != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            total_sum/=k;
            Try(1, 0);
            if(ok)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}                      