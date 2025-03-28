#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s, p;
    cin >> s >> p;
    cout << (s[s.size() - 1] - '0') * (p[p.size() - 1] - '0') % 10;
}
