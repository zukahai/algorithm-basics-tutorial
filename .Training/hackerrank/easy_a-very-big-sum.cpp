#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    long long sum = 0;
    long long t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        sum += t;
    }
    cout << sum;
}