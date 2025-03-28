#include <bits/stdc++.h>

using namespace std;

int sherlockAndAnagrams(string s) {
    int n = s.size();
    int ans = 0;
    for (int len = 1; len < n; len++) {
            map<string, int> mp;
        for (int i = 0; i < n - len + 1; i++) {
            string sub = s.substr(i, len);
            sort(sub.begin(), sub.end());
            mp[sub]++;
        }
        for (auto& [key, value] : mp) {
            ans += value * (value - 1) / 2;
        }
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << sherlockAndAnagrams(s) << endl;
    }
    return 0;
}
