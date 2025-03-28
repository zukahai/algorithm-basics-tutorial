#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("BAI150.INP");
    ofstream cout("BAI150.OUT");

    string s;
    getline(cin, s);
    cout << s.length() << endl;
    s += " ";

    string t = "";
    int c = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            t += s[i];
        } else {
            if (t.length() > 0) {
                c++;
                t = "";
            }
        }
    }

    cout << c;
}
