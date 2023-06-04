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
//queue: FIFO
//deque: double end queue
//push_front()
//push_back()
//pop_front()
//pop_back()
//front()
//back();
int main()
{
    faster();
    if (fopen("input.txt", "r"))            
    {                                       
        freopen("input.txt", "r", stdin);   
        freopen("output.txt", "w", stdout); 
    }
    int t;
    cin >> t;
    //t = 1;
    deque<int> de;
    int x;
    while(t--)
    {
        string s;
        cin >> s;
        if(s == "PUSH")
        {
            cin >> x;
            de.push_back(x);
        }
        else if(s == "POP")
        {
            if(!de.empty())
            {
                de.pop_front();
            }
        }
        else if(s == "PRINTFRONT")
        {
            if(de.empty())
            {
                cout << "NONE" << endl;
            }
            else
            {
                cout << de.front() << endl;
            }
        }
    }
    return 0;
}                      