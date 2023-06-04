//                     @constant@
// ********   **      **    **   **      **   **      **
// **         **      **    **   ** *    **   **      **
// **         **********    **   **  *   **   **********
// **         **      **    **   **    * **   **      **
// ********   **      **    **   **      **   **      **
//                     _cinte_
#include<bits/stdc++.h>
#define faster() ios_base :: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define endl '\n'
#define fio()                               \
    if (fopen("input.txt", "r"))            \
    {                                       \
        freopen("input.txt", "r", stdin);   \
        freopen("output.txt", "w", stdout); \
    }
typedef long long ll;
const long long int MOD = 1e9+7;

bool checkA(int a, int b, int c)
{
    if(a == b || a == c || b == c)
    {
        return false;
    }
    if(a + b > c && a + c > b && b + c > a)
    {
        return true;
    }
    return false;
}

int main()
{
    faster();
    fio();
    int n;
    cin >> n;
    int cntv = 0;
    ll a[n + 1];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            ll tmp = a[i] * a[i] + a[j] * a[j];
            ll x = sqrt(tmp);
            if(x * x == tmp && binary_search(a, a + n, x))
            {
                if(checkA(a[i], a[j], *lower_bound(a, a + n, x))) cntv++;
            }
        }
    }
    int cntN = 0;
    int cntT = 0;
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            ll tmp = a[i] * a[i] + a[j] * a[j];
            ll tmp2;
            double x = sqrt(tmp);
            ll y = a[i] + a[j];
            int idx = lower_bound(a, a + n, x) - a;
            int idxTG = lower_bound(a, a + n, y) - a;
            //Nếu thằng idxTG không tìm thấy thằng lớn hơn hoặc bằng tức idxTG = n thì những thằng từ j đến n đều là tam giác
            
            //Nếu thằng idx = n thì những thằng từ j đến n đều là tam giác nhọn
            idx -= 1;
            idxTG -= 1;
            cntN += idx - j;
            cntT += idxTG - idx;
        }
    }
    cout << cntN << " " << cntv << " " << cntT - cntv;
    return 0;
}
//a^2 < b^2 + c^2

//a^2 > b^2 + c^2