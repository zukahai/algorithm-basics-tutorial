#include <bits/stdc++.h>

using namespace std;

string removeChar(string s, int pos) {
    return s.substr(0, pos) + s.substr(pos + 1);
}

string del(string s, int x) {
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
    vector<int> cnt(3, 0);
    int sum = 0;
    for (char c : s) {
        cnt[((c - '0') % 3)]++;
        sum += c - '0';
    }

    if (sum % 3 == 0) {
        if (cnt[0] > 0)
            return del(s, 0);
        if (cnt[1] > 0 && cnt[2] > 0)
            return del(del(s, 1), 2);
        if (cnt[1] >= 3)
            return del(del(del(s, 1), 1), 1);
        if (cnt[2] >= 3)
            return del(del(del(s, 2), 2), 2);
    } else if (sum % 3 == 1) {
        if (cnt[1] > 0) {
            return del(s, 1);
        }
        if (cnt[2] >= 2)
            return del(del(s, 2), 2);
    } else {
        if (cnt[2] > 0)
            return del(s, 2);
        if (cnt[1] >= 2)
            return del(del(s, 1), 1);
    }
}

int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;
}