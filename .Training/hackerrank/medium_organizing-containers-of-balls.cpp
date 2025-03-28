#include <bits/stdc++.h>

using namespace std;

string organizingContainers(vector<vector<int>> container) {
    int n = container.size();
    vector<int> row(n), col(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            row[i] += container[i][j];
            col[j] += container[i][j];
        }
    }
    sort(row.begin(), row.end());
    sort(col.begin(), col.end());
    return row == col ? "Possible" : "Impossible";
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<vector<int>> container(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }
        }
        cout << organizingContainers(container) << endl;
    }
    return 0;
}