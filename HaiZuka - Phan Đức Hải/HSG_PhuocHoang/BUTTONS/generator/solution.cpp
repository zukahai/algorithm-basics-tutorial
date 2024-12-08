#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ifstream cin("BUTTONS.INP");
    // ofstream cout("BUTTONS.OUT");

    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    string s;
    cin >> s;
    map<char, int> cnt;
    for (int i = 0; i < s.size(); i++)
        cnt[s[i]]++;
    int gcd = cnt[s[0]];
    for (map<char, int>::iterator  it = cnt.begin(); it != cnt.end(); it++) {
        gcd = __gcd(gcd, it->second);
    }

    string ans = "";
    for (map<char, int>::iterator  it = cnt.begin(); it != cnt.end(); it++) {
        ans += string(it->second / gcd, it->first);
    }
    cout << ans;
}
