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

    long long max = 0;
    long long res = 0;
    for (pair<long long, long long> x: dem) {
        if (x.second > max) {
            max = x.second;
            res = x.first;
        }
    }
    cout << res;
}

