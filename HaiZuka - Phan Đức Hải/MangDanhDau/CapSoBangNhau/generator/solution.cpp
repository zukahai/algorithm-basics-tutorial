#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }

    long long ans = 0;
    for (pair<int, int> p : cnt) {
        ans += 1LL * p.second * (p.second - 1) / 2;
    }

    cout << ans;
}
