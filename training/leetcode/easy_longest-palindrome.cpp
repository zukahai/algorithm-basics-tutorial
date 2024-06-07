#include <bits/stdc++.h>

using namespace std;

int solve(string s) {
    int a[256];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < s.length(); i++) {
        a[s[i]]++;
    }
    int count = 0;
    bool hasOld = false;
    for (int i = 0; i < 256; i++) {
        if (a[i] % 2 == 0) {
            count += a[i];
        } else {
            count += a[i] - 1;
            hasOld = true;
        }
    }
    return count + hasOld;
}

int main() {
    string s = "aaabbb";
    cout << solve(s);
}