#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> mp;
unordered_map<int, int> index;
vector<int> c, d;

int main() {
    int a, b, k, p;
    cin >> a >> b >> k >> p;
    a %= b;
    index[a] = -1;
    while (true) {
        a *= 10;
        c.push_back(a % b);
        d.push_back(a / b);
        if (index.find(a % b) != index.end()) {
            break;
        }
        index[a % b] = c.size() - 1;
        a = a % b;
    }

    vector <int> v;
    for (int i = index[c.back()] + 1; i < c.size(); i++) {
        v.push_back(d[i]);
    }

    if (k - 1 < index[c.back()] + 1) {
        for (int i = k - 1; i < min(p, k + 1); i++) {
            cout << d[i];
        }
        p -= min(p, k) - k + 2;
        if (p <= 0)
            return 0;
    }

    if (c.back() != 0)
        k--;
    k -= index[c.back()] + 1;
    k %= v.size();
    string res = "";
    while (p--) {
        res += char(v[k] + '0');
        k++;
        k %= v.size();
    }
    cout << res;
}