#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    s = s + "A";
    string t = "";
    string max = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            t = t + s[i];
        } else {
            if (t.size() > max.size()) {
                max = t;
            }
            t = "";
        }
    }
    cout << max;
}