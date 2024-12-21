#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    unordered_map <int, int> dem;
    for (int i = 0; i < n; i++)
        dem[a[i]]++;

    int res = 0;
    for (int i = 0; i < m; i++)
    {
        if (dem[b[i]] > 0)
        {
            res++;
        }
    }
    cout << res;

    return 0;
}
