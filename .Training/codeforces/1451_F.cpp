/*
https://codeforces.com/contest/1451/problem/F
*/
#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 105;
 
int n, m;
int a[N][N], xorsum[2 * N];
 
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while(t--)
    {
        memset(xorsum, 0, sizeof(xorsum));
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                xorsum[i + j] ^= a[i][j];
            }
        }
        int flag = 1;
        for(int i = 1; i <= n + m; i++)
            flag &= (xorsum[i] == 0);
        if(!flag)
            cout << "Ashish" << endl;
        else
            cout << "Jeel" << endl;
    }
    return 0;
}