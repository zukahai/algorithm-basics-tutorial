#include<bits/stdc++.h>
using namespace std;

int a[100005], b[100005];

int findLastIndex(int x, int n) {
    int l = 1, r = n, res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (b[mid] <= x) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int main()
{
    ifstream cin("HOTROQUE.INP");
    ofstream cout("HOTROQUE.INP");

    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) 
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    sort(a + 1, a + m + 1);
    sort(b + 1, b + n + 1);

    int res = 0;
    int r = n;
    for (int i = m; i >= 1; i--) {
        int idx = findLastIndex(a[i], r);
        if (idx == -1) break;
        res++;
        r = idx - 1;
    }

    cout << res << endl;

}
