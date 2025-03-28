#include <bits/stdc++.h>

using namespace std;

vector <long long> dsUoc(long long n) {
    vector <long long> res;
    for (int i = 1; 1ll * i * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            if (n / i != i)
                res.push_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    long long a, b;
    cin >> a >> b;
    vector <long long> dsua = dsUoc(a);
    vector <long long> dsub = dsUoc(b);
    vector <long long> dsuoc = dsua;

    for (auto x: dsub)
        dsuoc.push_back(x);

    map <long long, int> mp;
    for (auto x: dsuoc)
        mp[x]++;

    for (auto x: mp)
        if (x.second == 2) {
            cout << x.first << " ";
        }
}