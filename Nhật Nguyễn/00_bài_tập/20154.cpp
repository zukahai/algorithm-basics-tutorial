#include <bits/stdc++.h>

using namespace std;

string sum(string a, string b) {
    string res = "";
    int carry = 0;
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    for (int i = a.size() - 1; i >= 0; i--) {
        int tmp = a[i] - '0' + b[i] - '0' + carry;
        carry = tmp / 10;
        res = (char)(tmp % 10 + '0') + res;
    }
    if (carry) res = "1" + res;
    return res;
}

int main() {
    ifstream cin("BAI153.INP");
    ofstream cout("BAI153.OUT");


    string s;
    getline(cin, s);
    string ans = "0";
    s = s + " ";
    string tmp = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            tmp += s[i];
        } else {
            if (tmp != "") {
                ans = sum(ans, tmp);
                tmp = "";
            }
        }
    }
    cout << ans;
}