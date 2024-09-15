#include <bits/stdc++.h>

using namespace std;

int main() {
    // ifstream cin("BAI151.INP");
    // ofstream cout("BAI151.OUT");

    string s;
    getline(cin, s);
    cout << s.length() << endl;
    reverse(s.begin(), s.end());
    cout << s;
}
