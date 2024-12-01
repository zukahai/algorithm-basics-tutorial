#include<bits/stdc++.h>
using namespace std;

unordered_map <int, bool> mp;
unordered_map <int, bool> cnt;
int numMax = 0;
int maxLucky = 0;

bool isLucky(int n) {
    while (n > 0) {
        if (n % 10 != 4 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}

int convert(int n) {
    int res = 0;
    while (n > 0) {
        int d = n % 10;
        res += d * (d + 1);
        n /= 10;
    }
    return res;
}

void solve(int n) {
    mp[n] = 1;
    if (isLucky(n)) {
        for (unordered_map<int, bool>::iterator it = mp.begin(); it != mp.end(); it++) {
            cnt[it->first] = true;
        }
        mp.clear();
        return;
    }
    n = convert(n);
    if (mp.find(n) != mp.end()) {
        for (unordered_map <int, bool>::iterator it = mp.begin(); it != mp.end(); it++) {
            cnt[it->first] = false;
        }
        if (maxLucky < mp.size()) {
            maxLucky = mp.size();
            numMax = n;
        }
        mp.clear();
        return;
    }
    solve(n);
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= b; i++) {
        if (cnt.find(i) == cnt.end()) {
            solve(i);
        } 
    }

    int sum = 0;

    for (int i = a; i <= b; i++) {
        sum += cnt[i];
    }

    cout << sum;

}
