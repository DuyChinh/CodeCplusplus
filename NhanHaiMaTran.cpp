//                     @constant@
// ********  *      *     *   *      *   *      *
// *         *      *     *   * *    *   *      *
// *         ********     *   *  *   *   ********
// *         *      *     *   *    * *   *      *
// ********  *      *     *   *      *   *      *
//                     _cinte_
//                ドアン　ズイ　チン               
//#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
typedef long long ll;

int main()
{
    faster();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n, m, p;
    cin >> n >> m >> p;
    int a[100][100], b[100][100], c[100][100];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < p; i++)
        {
            c[k][i] = 0;
            for(int j = 0; j < m; j++)
            {
                c[k][i] += a[k][j]*b[j][i];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cout<< c[i][j]<< " ";
        }
        cout << endl;
    }    
    return 0;
}                      