#include <bits/stdc++.h>

using namespace std;

vector <vector <int>> a;

vector <int> getArray(vector <vector <int>> a, int k) {
    int m = a.size();
    int n = a[0].size();
    vector <int> ans;
    for (int i = k; i < n - k; i++)
        ans.push_back(a[k][i]);
    for (int i = k + 1; i < m - k - 1; i++)
        ans.push_back(a[i][n - k - 1]);
    for (int i = n - k - 1; i >= k; i--)
        ans.push_back(a[m - k - 1][i]);
    for (int i = m - k - 2; i >= k + 1; i--)
        ans.push_back(a[i][k]);
    return ans;
}

vector <int> move(vector<int> a, int r) {
    r %= a.size();
    vector <int> ans;
    for (int i = r; i < a.size(); i++)
        ans.push_back(a[i]);
    for (int i = 0; i <= r - 1; i++)
        ans.push_back(a[i]);
    return ans;
}

vector <vector <int>> solveK(vector <vector <int>> a, vector<int> t, int k) {
    int index = 0;
    int m = a.size();
    int n = a[0].size();
    for (int i = k; i < n - k; i++)
        a[k][i] = t[index++];
    for (int i = k + 1; i < m - k - 1; i++)
        a[i][n - k - 1] = t[index++];
    for (int i = n - k - 1; i >= k; i--)
        a[m - k - 1][i] = t[index++];
    for (int i = m - k - 2; i >= k + 1; i--)
        a[i][k] = t[index++];
    return a;
}

void print(vector<int> a) {
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}
 
int main() {
    int m, n, r;
    cin >> m >> n >> r;
    vector<int> t(n);
    for (int i = 0; i < m; i++) {
        a.push_back(t);
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    for (int k = 0; k < min(m, n) / 2; k++) {
        a = solveK(a, move(getArray(a, k), r), k);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}