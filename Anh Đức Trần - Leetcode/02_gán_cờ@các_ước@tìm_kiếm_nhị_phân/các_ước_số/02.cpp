#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool flag = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] <= 57 && s[i] >= 48) {
            cout << s[i];
            flag = true;
        }
    }
    if (!flag) {
        cout << "-1";
    }
}