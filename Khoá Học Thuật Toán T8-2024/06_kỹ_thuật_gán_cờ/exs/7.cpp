#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i != n / i) {
                a.push_back(n / i);
            }
        }
    }

    sort(a.begin(), a.end());

    int flag = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
            flag = 1;
        }
    }

    if (flag == 0) {
        cout << "-1";
    }
    
}
