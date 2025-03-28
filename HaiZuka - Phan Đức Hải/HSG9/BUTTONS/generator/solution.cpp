#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    string s;
    cin >> s;
    map<char, int> cnt;
    for (char c : s) cnt[c] ++;
    int gcd = cnt[s[0]];
    for (auto x : cnt)
        gcd = __gcd(gcd, x.second);

    string ans = "";
    for (auto x : cnt)
        ans += string(x.second / gcd, x.first);

    cout << ans;
}
