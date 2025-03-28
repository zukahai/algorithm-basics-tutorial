#include <bits/stdc++.h>
using namespace std;
const int alp = 128;
bool vowel[alp];
int main()
{
    freopen("TUVUNG.inp", "r", stdin);
    freopen("TUVUNG.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    vowel['a'] = true;
    vowel['e'] = true;
    vowel['i'] = true;
    vowel['o'] = true;
    vowel['u'] = true;
    long long cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= s.size(); i++)
    {
        if (vowel[s[i - 1]])
            cnt1++;
        else
            cnt2++;
    }
    cout << cnt1 * cnt2;
}