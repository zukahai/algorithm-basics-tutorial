#include <bits/stdc++.h>
using namespace std;

bool bk[1001][1001];
bool visited[1001];
int n;

void deQuy(int a) {
    visited[a] = true;
    for (int v = 1; v <= n; v++) {
        if (bk[a][v] == true && visited[v] != true) {
            deQuy(v);
        }
    }

}

int main() {
    int m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        bk[u][v] = true;
        bk[v][u] = true;
    }

    int a, b;
    cin >> a >> b;
    deQuy(a);
    if (visited[b] == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}