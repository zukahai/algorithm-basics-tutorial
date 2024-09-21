#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

long long solve(long long a, long long b) {
    a %= m;
    if (b == 0) return 1;
    long long res = 1;

    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % m;
            b--;
        } else {
            a = (a * a) % m;
            b /= 2;
        }
    }

    return res;
}

long long gt(long long n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = (res * i) % m;
    }
    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    map<char, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    long long res = gt(s.size());

    for (auto x: mp)
    {
        res = (res * solve(gt(x.second), m - 2)) % m;
    }

    cout << res;

    
}
