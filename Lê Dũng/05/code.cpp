#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && a[s.top()] < a[i]) {
            s.pop();
        }
        l[i] = (!s.empty() ? s.top() : -1);
        s.push(i);
    }

    // xoá rỗng s
    while (!s.empty()) {
        s.pop();
    }

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && a[s.top()] < a[i]) {
            s.pop();
        }
        r[i] = (!s.empty() ? s.top() : n);
        s.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << r[i] << " ";
    }
    cout << endl;

    long long count = 0;
    for (int i = 0; i < n; i++) {
        count += (i - l[i] - 1) + (r[i] - i - 1);
    }
    cout << count;
}