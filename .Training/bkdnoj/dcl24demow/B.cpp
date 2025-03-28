#include <bits/stdc++.h>

/*
input: 5

output:
5
4 1
3 2
3 1 1
2 2 1
2 1 1 1
1 1 1 1 1
*/

using namespace std;

vector<vector<int>> ans;
vector<int> x;
vector<int> t;

void solve(int index, int n, vector<int> v)
{
    for (int i = x[index - 1]; i <= n - t[index - 1]; i++)
    {
        x[index] = i;
        t[index] = t[index - 1] + i;
        if (t[index] == n)
        {
            vector<int> temp;
            for (int j = 1; j <= index; j++)
            {
                temp.push_back(x[j]);
            }
            ans.push_back(temp);
        }
        else
        {
            solve(index + 1, n, v);
        }
    }
}

bool compare(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            return a[i] < b[i];
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    x.resize(n + 1);
    t.resize(n + 1);
    x[0] = 1;
    t[0] = 0;
    solve(1, n, x);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size() / 2; j++)
        {
            int t = ans[i][j];
            ans[i][j] = ans[i][ans[i].size() - j - 1];
            ans[i][ans[i].size() - j - 1] = t;
        }
    }

    for (int i = 0; i < ans.size() - 1; i++)
        for (int j = i + 1; j < ans.size(); j++)
        {
            if (compare(ans[i], ans[j]))
                swap(ans[i], ans[j]);
        }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
