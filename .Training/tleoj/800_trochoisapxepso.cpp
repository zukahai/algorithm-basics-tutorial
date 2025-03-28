#include <bits/stdc++.h>
using namespace std;

int check(vector<vector<int>> a)
{
    int n = a.size();
    vector<int> row(n * n + 1);
    vector<int> col(n * n + 1);
    int row0 = -1, col0 = -1;
    for (int i = 0; i < n && row0 == -1; i++)
    {
        for (int j = 0; j < n && row0 == -1; j++)
        {
            if (a[i][j] == 0)
            {
                row0 = i;
                col0 = j;
            }
        }
    }
    for (int i = row0 + 1; i < n; i++)
    {
        a[i - 1][col0] = a[i][col0];
        a[i][col0] = 0;
    }
    for (int i = col0 + 1; i < n; i++)
    {
        a[row0][i - 1] = a[row0][i];
        a[row0][i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            row[a[i][j]] = i;
            col[a[i][j]] = j;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cur = a[i][j];
            int ori = i * n + j + 1;
            if (cur != ori && cur != 0)
            {
                count++;
                int row_ori = row[ori];
                int col_ori = col[ori];
                a[row_ori][col_ori] = cur;
                a[i][j] = ori;
                row[cur] = row_ori;
                col[cur] = col_ori;
                row[ori] = i;
                col[ori] = j;
            }
        }
    }
    return count % 2 == 0;
}

int main()
{
    ifstream cin("trochoisapxepso.inp");
    ofstream cout("trochoisapxepso.out");
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << check(a) << endl;
}