#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5;
int a[MAX], p[MAX], n, k;
bool check(int val)
{
    int min_val = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < val)
            p[i] = p[i - 1] - 1;
        else
            p[i] = p[i - 1] + 1;
        if (i >= k)
        {
            min_val = min(min_val, p[i - k]);
            if (p[i] > min_val)
                return true;
        }
    }
    return false;
}
int main()
{
    freopen("TRUNGTAM.inp", "r", stdin);
    freopen("TRUNGTAM.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = n;
    while (l < r)
    {
        int m = (l + r) / 2 + 1;
        if (check(m))
            l = m;
        else
            r = m - 1;
    }
    cout << l;
}