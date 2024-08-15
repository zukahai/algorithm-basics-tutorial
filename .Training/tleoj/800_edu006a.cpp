/*
https://tleoj.edu.vn/problem/edu006a
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> a(256, 0);

int main() {
    freopen("xau.inp", "r", stdin);
    freopen("xau.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        a[s[i]]++;
    }
    int charMax = 0;
    for (int i = 0; i < 256; i++) {
        if (a[i] > a[charMax]) {
            charMax = i;
        }
    }
    cout << (char)charMax << endl << a[charMax];

}