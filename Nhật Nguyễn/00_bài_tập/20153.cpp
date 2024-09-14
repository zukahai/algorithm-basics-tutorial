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
    int pos = p.find(s);
    if (pos == string::npos) {
        cout << "NO";
    } else {
        cout << pos;
    }


}