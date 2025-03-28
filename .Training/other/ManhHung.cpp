#include <bits/stdc++.h>

using namespace std;

bool check(string s, string x) {
    string p = "";
    while (p.size() < s.size()) {
        p += x;
        if (p == s) 
            return true;
    }
    return false;   
}

int main() {
    string s;
    getline(cin, s);
    string x = "";
    for (int i = 0; i < s.size(); i++) {
        x += s[i];
        if (check(s, x)) {
            cout << x;
            return 0;
        }
    }
}