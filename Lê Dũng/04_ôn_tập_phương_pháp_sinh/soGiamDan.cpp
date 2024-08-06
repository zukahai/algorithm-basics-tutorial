#include <bits/stdc++.h>

using namespace std;

string genMax(int n) {
    string res = "";
    int index = 9;
    while (n--) {
        res += char(index + '0');
        if (index < 0) return "-1";
        index--;
    }
    return res;
}

string genMin(int n) {
    string res = "";
    for (int i = 0; i < n; i++) {
        res = char(i + '0') + res;
        if (i > 9) return "-1";
    }
    return res;
}

bool compare(string s, string p) {
    while (s.length() < p.length()) 
        s = "0" + s;
    while (s.length() > p.length()) 
        p = "0" + p;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != p[i]) {
            return s[i] > p[i];
        }
    }
    return true;
}

string sub(string s, int index) {
    if (s[s.length() - 1] <= '0')
        return "-1";
    for (int i = index; i < s.length(); i++) {
        s[i] -= 1;
    }
    return s;
}

// 9876 

int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    string ans = genMax(n);
    string p = "";
    if (compare(ans, s) && ans != "-1") {
        for (int i = 0; i < ans.length(); i++) {
            do {
                if (p != "")
                    ans = p;
                p = sub(ans, i);
            } while (p != "-1" && compare(p, s));
            p = "";
        }
        cout << ans;
    } else {
        cout << genMin(n + 1);
    }
}