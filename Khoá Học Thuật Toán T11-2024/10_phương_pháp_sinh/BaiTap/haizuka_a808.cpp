#include <bits/stdc++.h>

using namespace std;

string gen(int len, int x) {
    string s = "";
    for (int i = 1; i <= len; i++) {
        s += (x + '0');
    }
    return s;
}

int main() {
    string n;
    cin >> n;
    int len = 1;
    while (true) {
        for (int i = 1; i <= 9; i++) {
            string s = gen(len, i);
            if (s > n && s.length() == n.length()) {
                return 0;
            }
            cout << s << " ";
        }
        len++;
    }
}