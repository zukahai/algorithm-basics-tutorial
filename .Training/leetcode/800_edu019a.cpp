/*
https://tleoj.edu.vn/problem/edu019a
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("MATKHAU.inp", "r", stdin);
    freopen("MATKHAU.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int l = 0, r = -1;
    int dWord = 0;
    int dWordH = 0;
    int dNum = 0;
    long long ans = 0;
    while (s.size() - r > 0) // s.size() > r
    {
        if (r - l + 1 >= 6 && dWord > 0 && dNum > 0 && dWordH > 0) {
            ans += s.size() - r;
            if (s[l] >= '0' && s[l] <= '9') {
                dNum--;
            } else if (s[l] >= 'a' && s[l] <= 'z') {
                dWord--;
            } else if (s[l] >= 'A' && s[l] <= 'Z') {
                dWordH--;
            }
            l++;
        } else {
            r++;
            if (r < s.size()) {
                if (s[r] >= '0' && s[r] <= '9') {
                    dNum++;
                } else if (s[r] >= 'a' && s[r] <= 'z') {
                    dWord++;
                } else if (s[r] >= 'A' && s[r] <= 'Z') {
                    dWordH++;
                }
            }
        }
    }
    cout << ans << endl;
}