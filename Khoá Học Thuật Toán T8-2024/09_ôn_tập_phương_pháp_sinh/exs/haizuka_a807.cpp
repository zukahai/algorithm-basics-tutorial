#include <bits/stdc++.h>

using namespace std;

string genSSDX(int len, int value) {
    string m = "";
    for (int i = 0; i < len; i++) {
        m += to_string(value);
    }
    return m;
}

int lenNum(string n) {
    return n.length();
}

int main() {
    string n;
    cin >> n;
    int len = lenNum(n);

    for (int value = 1; value <= 9; value++) {
        string ssdx = genSSDX(len, value);
        if (ssdx >= n) {
            cout << ssdx;
            return 0;
        }
    }


}