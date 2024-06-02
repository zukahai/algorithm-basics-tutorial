#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3, 2));
    int ss = stoi(s.substr(6, 2));
    string ampm = s.substr(8, 2);
    if (hh == 12) {
        hh = 0;
    }
    if (ampm == "PM") {
        hh += 12;
    }
    cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ":" << setfill('0') << setw(2) << ss << endl;
    return 0;
}