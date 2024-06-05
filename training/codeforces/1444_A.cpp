/*
https://codeforces.com/contest/1444/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

vector <long long> ans;

long long solve(long long a, int b) {
    if (a % b)
        return a;
    map <int, int> mp;
    int k = 2;
    long long N = b;
    while (N > 1 && k <= sqrt(b)) {
        while (N % k == 0) {
            mp[k]++;
            N /= k;
        }
        k++;
    }
    if (N > 1)
        mp[N]++;
    N = a;
    long long min = a;
    for (map <int, int> :: iterator it = mp.begin(); it != mp.end(); it++) {
        int o = it->first;
        for (int i = 0; i < it->second; i++)
            N /= o;
        long long k = o;
        while (N % o == 0) {
            k *= o;
            N /= o;
        }
        // cout << "K = " << k << endl;
        if (min > k)
            min = k;
    }
    return a / min;
}

int main() {
    int t, b;
    long long a;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        ans.push_back(solve(a, b));
    }
    for (auto x : ans)
        cout << x << endl;
}