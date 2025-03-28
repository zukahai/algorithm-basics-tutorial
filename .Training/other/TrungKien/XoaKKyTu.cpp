#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int k;  
    cin >> k;

    deque<char> dq;

    for (int i = 0; i < n; i++) {
        while (k > 0 && !dq.empty() && dq.back() > s[i]) {
            dq.pop_back();
            k--;
        }
        dq.push_back(s[i]);
    }

    while (k > 0) {
        dq.pop_back();
        k--;
    }

    while (!dq.empty()) {
        cout << dq.front();
        dq.pop_front();
    }
}