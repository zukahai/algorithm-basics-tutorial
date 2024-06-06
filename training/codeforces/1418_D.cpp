/*
https://codeforces.com/contest/1418/problem/D
*/
#include <bits/stdc++.h>

using namespace std;

int get(const set<int> &x, const multiset<int> &len) {
    if (len.empty()) return 0;
    return *x.rbegin() - *x.begin() - *len.rbegin();
}

void add(int p, set<int> &x, multiset<int> &len) {
    x.insert(p);
    auto it = x.find(p);
    int prv = -1, nxt = -1;
    if (it != x.begin()) {
        --it;
        len.insert(p - *it);
        prv = *it;
        ++it;
    }
    ++it;
    if (it != x.end()) {
        len.insert(*it - p);
        nxt = *it;
    }
    if (prv != -1 && nxt != -1) {
        len.erase(len.find(nxt - prv));
    }
}

void rem(int p, set<int> &x, multiset<int> &len) {
    auto it = x.find(p);
    int prv = -1, nxt = -1;
    if (it != x.begin()) {
        --it;
        len.erase(len.find(p - *it));
        prv = *it;
        ++it;
    }
    ++it;
    if (it != x.end()) {
        len.erase(len.find(*it - p));
        nxt = *it;
    }
    x.erase(p);
    if (prv != -1 && nxt != -1) {
        len.insert(nxt - prv);
    }
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
#endif
    
    int n, q;
    cin >> n >> q;
    set<int> x;
    multiset<int> len;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        add(p, x, len);
    }
    
    cout << get(x, len) << endl;
    for (int i = 0; i < q; ++i) {
        int t, p;
        cin >> t >> p;
        if (t == 0) {
            rem(p, x, len);
        } else {
            add(p, x, len);
        }
        cout << get(x, len) << endl;
    }
    
    return 0;
}