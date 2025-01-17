#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'P') {
            int j = i;
            while (j < n && s[j] != '*') {
                j++;
            }
            if (j < n) {
                res = max(res, (j - i));
            }
            j = i;
            while (j >= 0 && s[j] != '*') {
                j--;
            }
            if (j >= 0) {
                res = max(res, (i - j));
            }
            
        }
    }

    cout << res;
}