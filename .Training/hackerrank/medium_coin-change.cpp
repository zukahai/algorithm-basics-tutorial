#include <bits/stdc++.h>

using namespace std;

long getWays(int n, vector<long> c) {
    vector<long> ways(n + 1, 0);
    ways[0] = 1;
    for (int i = 0; i < c.size(); i++) {
        for (int j = c[i]; j <= n; j++) {
            ways[j] += ways[j - c[i]];
        }
    }
    return ways[n];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }
    long ways = getWays(n, c);
    cout << ways << "\n";
    return 0;
}

/*
7 4
2 3 5 7 

0: 1
1: 0
2: 1
3: 1
4: 1
5: 2
6: 2
7: 3
*/
