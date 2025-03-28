#include <bits/stdc++.h>

using namespace std;

string taoSdx(int value, int len) {
    char ch = value + '0';
    string res(len, ch);
    return res;
}

int compare(string s, string p) { // > 1, < -1, = 0
    if (s.size() == p.size()) {
       if (s > p) return 1;
       if (s < p) return -1;
       return 0;
    } else {
        if (s.size() > p.size()) return 1;
        if (s.size() < p.size()) return -1;
    }
}

int main() {
    string n;
    cin >> n;
    int len = 1;
    for (int len = 1; len <= 100; len++) {
        for (int value = 1; value <= 9; value++) {
            string sdx = taoSdx(value, len);
            if (compare(sdx, n) <= 0) {
                cout << sdx << " ";
            } else return 0;
        }
    }

}