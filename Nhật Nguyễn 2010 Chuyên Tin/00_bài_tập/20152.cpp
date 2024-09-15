#include <bits/stdc++.h>

using namespace std;

string toupper(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    return s;
}

string tolower(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

bool isPalindrome(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream cin("BAI152.INP");
    ofstream cout("BAI152.OUT");

    string s;
    getline(cin, s);
    if (isPalindrome(s)) {
        cout << toupper(s);
    } else {
        cout << tolower(s);
    }
}
