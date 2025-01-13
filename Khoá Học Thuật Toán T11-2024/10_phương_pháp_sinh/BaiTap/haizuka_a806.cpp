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
    for (int i = 1; i <= 9; i++) {
        string s = gen(n.length(), i);
        if (s >= n) {
            cout << s;
            return 0;
        }
    }
}