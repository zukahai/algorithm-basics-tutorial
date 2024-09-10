#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string flag = "YES";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'A' || s[i] > 'Z') {
            flag = "NO";
            break;
        }
    }

    cout << flag;
}