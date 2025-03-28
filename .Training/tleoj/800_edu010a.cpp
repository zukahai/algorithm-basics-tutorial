#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("MATKHAU.inp", "r", stdin);
    freopen("MATKHAU.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9' && s[i] % 2 == 0) {
            sum += (s[i] - '0');
        }
    }
    cout << sum;
    cout << s.size();
}