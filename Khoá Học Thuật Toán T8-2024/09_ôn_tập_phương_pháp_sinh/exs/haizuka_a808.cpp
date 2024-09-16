#include <bits/stdc++.h>

using namespace std;

string genSSDX(int len, int value) {
    string m = "";
    for (int i = 0; i < len; i++) {
        m += to_string(value);
    }
    return m;
}
/*
a > b: 1
a = b: 0
a < b: -1
*/
int compare(string a, string b) {
    if (a.length() < b.length())
        return -1;
    if (a.length() > b.length())
        return 1;
    if (a < b)
        return -1;
    if (a > b)
        return 1;
    return 0;    
}

int main() {
    string n;
    cin >> n;
    int len = 1;
    while(true) {
        for (int value = 1; value <= 9; value++) {
            string ssdx = genSSDX(len, value);
            if (compare(ssdx, n) <= 0) {
                cout << ssdx << " ";
            } else {
                return 0;
            }
        }
        len++;
    }
}