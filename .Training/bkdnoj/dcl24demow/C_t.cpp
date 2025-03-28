#include <bits/stdc++.h>
using namespace std;

int parent[100], rankH[100], size[100];

void initialize();
int find(int u);
void unionSets(int u, int v);


void initialize() {
    for (int i = 0; i < 100; ++i) {
        parent[i] = i;
        rankH[i] = 0;
        size[i] = 1;
    }
}

int find(int u) {
    if (u != parent[u])
        parent[u] = find(parent[u]);
    return parent[u];
}

void unionSets(int u, int v) {
    int pu = find(u), pv = find(v);
    if (pu != pv) {
        if (rankH[pu] > rankH[pv]) {
            parent[pv] = pu;
            size[pu] += size[pv];
        } else if (rankH[pu] < rankH[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        } else {
            parent[pv] = pu;
            size[pu] += size[pv];
            rankH[pu]++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    initialize();
    
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        unionSets(a - 1, b - 1); 
    }

    map<int, int> groupSize;
    int maxSize = 0;
    for (int i = 0; i < 100; ++i) {
        int root = find(i);
        groupSize[root] = size[root];
        maxSize = max(maxSize, groupSize[root]);
    }

    cout << maxSize << endl;
    return 0;
}
