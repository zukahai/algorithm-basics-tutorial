#include <bits/stdc++.h>
using namespace std;

vector <int> listDivisor(int n) {
    vector <int> res;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            if (i * i != n) res.push_back(n / i);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    unordered_map<int, bool> cnt;
    vector<int> divisors = listDivisor(a[0]);

    for (int i = 0; i < divisors.size(); ++i) {
        cnt[divisors[i]] = 1;
    }

    int max = 0;

    for (int i = 1; i < n; i++) {
        vector<int> divisors = listDivisor(a[i]);
        for (int j = 0; j < divisors.size(); ++j) {
            if (cnt[divisors[j]]) {
                if (divisors[j] > max) {
                    max = divisors[j];
                }
            }
            cnt[divisors[j]] = 1;
        }
        b[i] = max;
    }
    cnt.clear();
    max = 0;
    divisors = listDivisor(a[n - 1]);
    for (int i = 0; i < divisors.size(); ++i) {
        cnt[divisors[i]] = 1;
    }

    for (int i = n - 2; i >= 0; i--) {
        vector<int> divisors = listDivisor(a[i]);
        for (int j = 0; j < divisors.size(); ++j) {
            if (cnt[divisors[j]]) {
                if (divisors[j] > max) {
                    max = divisors[j];
                }
            }
            cnt[divisors[j]] = 1;
        }
        c[i] = max;
    }

    int res = 0;

    for (int i = 1; i < n - 1; i++) {
        if (b[i] + c[i + 1] > res) {
            res = b[i] + c[i + 1];
        }
    }

    cout << res;
    
}
