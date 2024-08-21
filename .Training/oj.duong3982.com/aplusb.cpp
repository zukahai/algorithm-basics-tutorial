#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    int d = 0;
    string res = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int x = a[i] - '0' + b[i] - '0' + d;
        d = x / 10;
        res = char(x % 10 + '0') + res;
    }
    if (d > 0)
        res = char(d + '0') + res;
    cout << res;
}