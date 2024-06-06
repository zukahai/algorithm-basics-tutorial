/*
https://codeforces.com/contest/1452/problem/A
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int ans = max(x, y) * 2 - 1;
        if(x == y) ans++;
        cout << ans << endl;
    }
}