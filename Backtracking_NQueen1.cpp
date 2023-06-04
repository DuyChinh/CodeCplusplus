#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;
int n, cnt = 0;
int row[100], d1[100], d2[100], a[100];
int x[100][100];
void output()
{
    for(int i = 1; i <= n; i++)
    {
        x[i][a[i]] = 1;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }
    for(int i = 1; i <= 30; i++)
    {
        for(int j = 1; j <= 30; j++)
        {
            x[i][j]= 0;
        }
    }
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(row[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1)
        {
            a[i] = j;
            row[j] = d1[i-j+n] = d2[i+j-1] = 0;
            if(i == n)
            {
                //output();
                cnt++;
            }
            else
            {
                Try(i+1);
            }
            row[j] = d1[i-j+n] = d2[i+j-1] = 1;
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
    cin >> n;
    for(int i = 1; i <= 99; i++)
    {
        row[i] = d1[i] = d2[i] =1;
    }
    Try(1);
    cout << cnt << endl;
    return 0;
}