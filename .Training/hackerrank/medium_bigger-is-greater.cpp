// 1234->1243->1324
#include <bits/stdc++.h>

using namespace std;

string solve(string s) {
    vector<int> a;
    vector<int> b(255, 0);
    vector<int> c(255, 0);
    for (int i = 0; i < s.length(); i++) {
        a.push_back(s[i]);
        b[s[i]]++;
        c[s[i]]++;
    }
    sort(a.begin(), a.end());
    int isFor = true;
    int index = -1;
    for (int i = s.length() - 1; i >= 0 && isFor; i--) {
        for (int j = 0; j < a.size(); j++)
            if (s[i] < a[j] && c[a[j]] < b[a[j]]) {
                c[s[i]] --;
                s[i] = a[j];
                c[a[j]]++;
                isFor = false;
                index = i;
                break;
            }
        if (!isFor)
            continue;
        
        c[s[i]] --;
    }
    if (index == -1)
        return "no answer";
    else {
        for (int i = index + 1; i < s.length(); i++) {
            for (int j = 0; j < a.size(); j++) {
                if (c[a[j]] < b[a[j]]) {
                    s[i] = a[j];
                    c[a[j]]++;
                    break;
                }
            }
        }
        return s;
    }
}

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--) {
        getline(cin, s);
        cout << solve(s) << endl;
    }
}