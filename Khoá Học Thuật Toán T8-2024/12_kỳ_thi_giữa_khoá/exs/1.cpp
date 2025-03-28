#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    char lca = a[a.size() - 1];
    char lcb = b[b.size() - 1];
    int res = (lca - 48) * (lcb - 48) % 10;
    cout << res;
}