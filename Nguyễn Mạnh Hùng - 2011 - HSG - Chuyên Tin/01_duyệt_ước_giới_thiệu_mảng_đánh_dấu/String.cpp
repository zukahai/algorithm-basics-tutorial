#include <bits/stdc++.h>

using namespace std;

bool check(string key, string s) {
    int index = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == key[index]) {
            index++;
            if (index >= key.size()) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    string key;
    cin >> t;
    cin.ignore();
    getline(cin, key);
    cout << "Key = " << key << endl;
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        if (check(key, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}