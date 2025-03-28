/*
https://codeforces.com/contest/1472/problem/E
*/
#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

struct man {
  int h, w, id;
};

bool operator<(const man &a, const man &b) {
  return tie(a.h, a.w, a.id) < tie(b.h, b.w, b.id);
}

struct my_min {
  pii mn1, mn2;
};

vector<pair<int, my_min>> createPrefMins(const vector<man>& a) {
  vector<pair<int, my_min>> prefMin;
  my_min curMin{pii(INT_MAX, -1), pii(INT_MAX, -1)};
  for (auto x : a) {
    if (x.w < curMin.mn1.first) {
      curMin.mn2 = curMin.mn1;
      curMin.mn1 = pii(x.w, x.id);
    } else {
      curMin.mn2 = min(curMin.mn2, pii(x.w, x.id));
    }
    prefMin.emplace_back(x.h, curMin);
  }
  return prefMin;
}

int findAny(const vector<pair<int, my_min>> &mins, int h, int w, int id) {
  int l = -1, r = (int) mins.size();
  while (r - l > 1) {
    int m = (l + r) / 2;
    if (mins[m].first < h) {
      l = m;
    } else {
      r = m;
    }
  }
  if (l == -1) {
    return -1;
  }

  auto mn1 = mins[l].second.mn1;
  auto mn2 = mins[l].second.mn2;
  if (mn1.second != id) {
    return mn1.first < w ? mn1.second + 1 : -1;
  }
  return mn2.first < w ? mn2.second + 1 : -1;
}

void solve() {
  int n;
  cin >> n;
  vector<man> hor, ver;
  vector<pii> a;
  for (int i = 0; i < n; i++) {
    int h, w;
    cin >> h >> w;
    hor.push_back({h, w, i});
    ver.push_back({w, h, i});
    a.emplace_back(h, w);
  }

  sort(hor.begin(), hor.end());
  sort(ver.begin(), ver.end());

  auto horMins = createPrefMins(hor);
  auto verMins = createPrefMins(ver);

  for (int i = 0; i < n; i++) {
    auto[h, w] = a[i];
    int id = findAny(horMins, h, w, i);
    if (id == -1) {
      id = findAny(verMins, h, w, i);
    }
    cout << id << " ";
  }
  cout << endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}