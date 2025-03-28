#include <bits/stdc++.h>

using namespace std;

int c = 0;

void dfs(vector<vector<int>>& matrix, vector<vector<bool>>& b, int i, int j);

int connectedCell(vector<vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<bool>> b(m, vector<bool>(n));
    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!b[i][j] && matrix[i][j] == 1) {
                c = 0;
                dfs(matrix, b, i, j);
                ans = (ans < c) ? c : ans;
            }
        }
    }
    return ans;
}

void dfs(vector<vector<int>>& matrix, vector<vector<bool>>& b, int i, int j) {
    if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[0].size() || b[i][j] || matrix[i][j] == 0) {
        return;
    }
    c++;
    b[i][j] = true;
    dfs(matrix, b, i - 1, j - 1);
    dfs(matrix, b, i - 1, j);
    dfs(matrix, b, i - 1, j + 1);
    dfs(matrix, b, i, j - 1);
    dfs(matrix, b, i, j + 1);
    dfs(matrix, b, i + 1, j - 1);
    dfs(matrix, b, i + 1, j);
    dfs(matrix, b, i + 1, j + 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << connectedCell(matrix) << endl;
    return 0;
}

/*
4  
4       
1 1 0 0
0 1 1 0
0 0 1 0
1 0 0 0

*/