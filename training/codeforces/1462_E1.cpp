/*
https://codeforces.com/contest/1462/problem/E1
*/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<ll> cnt(n + 1);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  ll ans = 0;
  for (int i = 2; i < n; i++) {
    ans += cnt[i - 1] * cnt[i] * cnt[i + 1];
  }
  for (int i = 1; i < n; i++) {
    ans += cnt[i] * (cnt[i] - 1) / 2 * cnt[i + 1];
  }
  for (int i = 2; i <= n; i++) {
    ans += cnt[i - 1] * cnt[i] * (cnt[i] - 1) / 2;
  }
  for (int i = 2; i < n; i++) {
    ans += cnt[i - 1] * cnt[i + 1] * (cnt[i + 1] - 1) / 2;
  }
  for (int i = 2; i < n; i++) {
    ans += cnt[i + 1] * cnt[i - 1] * (cnt[i - 1] - 1) / 2;
  }
  for (int i = 1; i <= n; i++) {
    ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
  }
  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}