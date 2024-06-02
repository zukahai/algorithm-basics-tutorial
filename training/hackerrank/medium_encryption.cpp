/*
https://www.hackerrank.com/challenges/encryption/problem?isFullScreen=true
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, p;
    getline(cin, s);
    p = "";
    for (int i = 0; i < s.length(); i++)
        if (s[i] != ' ')
            p += s[i];
    int row = floor(sqrt(p.length()));
    int col = ceil(sqrt(p.length()));

    if (row * col < p.length())
        row++;

    for (int j = 0; j < col; j++) {
        s = "";
        for (int i = j; i < p.length(); i += col)
            s += p[i];
        cout << s << " ";
    }
}