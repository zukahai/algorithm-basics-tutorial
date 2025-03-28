#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    int n;
    cin >> n;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // O(nlogN)

    string flag = "YES";

    for (int i = 0; i < n; i++) {
        if (i + 1 != a[i]) {
            flag = "NO";
            break;
        }
    }

    cout << flag;
}