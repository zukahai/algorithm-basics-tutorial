#include <bits/stdc++.h>

using namespace std;

int main() {
    bool d[256];
    memset(d, false, sizeof(d));
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        d[s[i]] = true;
    }

    string res = "NO";

    for (char c = 'a'; c <= 'z'; c++) {
        if (d[c] && d[c - 32]) {
            res = "YES";
            break;
        }
    }

    cout << res;
}