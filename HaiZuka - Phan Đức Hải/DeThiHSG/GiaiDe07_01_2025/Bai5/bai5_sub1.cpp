#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'P') {
            int d2 = 0;
            for (int j = i + 1; j < n; j++) {
                if (s[j] == 'P') {
                    break;
                }
                if (s[j] == '*') {
                    d2 = j - i;
                }
            }
            int d1 = 0;
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == 'P') {
                    break;
                }
                if (s[j] == '*') {
                    d1 = i - j;
                }
            }
            int min = d1 < d2 ? d1 : d2;
            int max = d1 > d2 ? d1 : d2;
            int d = 2 * min + max;
            res = d > res ? d : res;
            i += d2;
        }
    }
    cout << res;
}