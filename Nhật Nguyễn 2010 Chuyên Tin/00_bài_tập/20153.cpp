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

int main() {

    ifstream cin("Bai153.inp");
    ofstream cout("Bai153.out");

    string p, s;
    getline(cin, p);
    getline(cin, s);
    p = toupper(p);
    s = toupper(s);

    // Vị trí của s trong p
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == s[0]) {
            bool found = true;
            for (int j = 1; j < s.size(); j++) {
                if (p[i + j] != s[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                cout << i;
                return 0;
            }
        }
    }

    cout << "NO";


}