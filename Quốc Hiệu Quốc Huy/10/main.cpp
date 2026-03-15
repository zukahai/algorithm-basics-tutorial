#include <bits/stdc++.h>

using namespace std;

long long a[1000009];
map <long long, long long> dem;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dem[a[i]]++;
    }

    int res = 0;
    while (dem[res] > 0) {
        res += 2;
    }
    cout << res << endl;
}

