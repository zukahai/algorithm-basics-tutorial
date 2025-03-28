#include<bits/stdc++.h>
using namespace std;

map <int, bool> mp;
vector <int> cnt(10000005, 2);

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
    if (cnt[n] != 2) {
        for (map <int, bool>::iterator it = mp.begin(); it != mp.end(); it++) {
            cnt[it->first] = cnt[n];
        }
        mp.clear();
        return;
    }
    mp[n] = 1;
    if (isLucky(n)) {
        for (map<int, bool>::iterator it = mp.begin(); it != mp.end(); it++) {
            cnt[it->first] = true;
        }
        mp.clear();
        return;
    }
    n = convert(n);
    if (mp.find(n) != mp.end()) {
        for (map <int, bool>::iterator it = mp.begin(); it != mp.end(); it++) {
            cnt[it->first] = false;
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
        if (cnt[i] == 2) {
            solve(i);
        } 
    }

    int sum = 0;

    for (int i = a; i <= b; i++) {
        sum += cnt[i];
    }

    cout << sum;

}
