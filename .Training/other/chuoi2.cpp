#include <bits/stdc++.h>

using namespace std;

string removeChar(string s, int pos) {
    return s.substr(0, pos) + s.substr(pos + 1);
}

string del(string s, int x) {
    x %= 3;
    int last = -1;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] - '0') % 3 == x) {
            last = i;
            if (i < s.size() - 1 && s[i + 1] > s[i]) {
                return removeChar(s, i);
            }
        }
    }
    return removeChar(s, last);

}

string solve(string s) {
    vector<int> cnt(4, 0);
    int sum = 0;
    for (char c : s) {
        cnt[((c - '0') % 3)]++;
        sum += c - '0';
    }
    cnt[3] = cnt[0];

    int mod = sum % 3;
    mod = (mod == 0) ? 3 : mod;
    while (mod > 0) {
        bool flag = false;
        for (int i = min(3, mod); i >= 1; i--) {
            if (cnt[i] > 0) {
                s = del(s, i);
                cnt[i]--;
                mod -= i;
                flag = true;
                break;
            }
        }
        if (!flag) {
            mod += 3;
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;
}