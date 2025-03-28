/*
https://tleoj.edu.vn/problem/wanted
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TRUYLUNG.inp", "r", stdin);
    freopen("TRUYLUNG.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    string s;
    cin >> n;
    long long x = 0, y = 0;
    int step = 1;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            y += step;
        }
        if (s[i] == 'D')
        {
            y -= step;
        }
        if (s[i] == 'L')
        {
            x -= step;
        }
        if (s[i] == 'R')
        {
            x += step;
        }
        
    }
    cout << x << " " << y << endl;
}