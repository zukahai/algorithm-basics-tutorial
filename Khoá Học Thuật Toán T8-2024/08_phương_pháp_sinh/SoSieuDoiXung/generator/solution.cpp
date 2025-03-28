#include<bits/stdc++.h>
using namespace std;

string gen(char c, int n) {
    string res = "";
    for (int i = 0; i < n; i++) {
        res += c;
    }
    return res;
}

string solve(string s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] > s[0])
            return gen(s[0] + 1, s.size());
        if (s[i] < s[0])
            return gen(s[0], s.size());
    }
    return gen(s[0], s.size());
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    getline(cin, s);
    cout << solve(s);
}
