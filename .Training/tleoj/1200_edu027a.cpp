#include <bits/stdc++.h>
using namespace std;
pair<int, int> s(int n)
{
    int a = 0, b = 0;
    while (n)
    {
        a += n % 10;
        n /= 10;
        if (n == 0)
            swap(a, b);
        b += n % 10;
        n /= 10;
    }
    return make_pair(b, a);
}
int cnt_dig(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans++;
        n /= 10;
    }
    return ans;
}
int main()
{
    freopen("CHUAN1.inp", "r", stdin);
    freopen("CHUAN1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, ans = 0;
    cin >> a >> b;
    for (int i = 1; i < 1e7; i++)
    {
        pair<int, int> x = s(i);
        int dif = x.first - x.second;
        dif = 1 - dif;
        if (cnt_dig(i) % 2 == 1)
            dif = -dif;
        if (dif >= 0 && dif <= 9)
            if (i * 10 + dif >= a && i * 10 + dif <= b)
                ans++;
    }
    cout << ans;
}