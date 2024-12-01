#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<long long> v = {2, 3, 5, 7};
    int index = 0;
    while (index < v.size()) {
        int t = v[index];
        for (int i = 1; i <= 9; i++) {
            if (isPrime(t * 10 + i)) {
                v.push_back(t * 10 + i);
            }
        }
        index++;
    }

    vector <long long> res;
    int n;
    cin >> n;
    for (int i = 0; i < v.size(); i++) {
        string s = to_string(v[i]);
        if (s.length() == n) {
            res.push_back(v[i]);
        }
    }

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}