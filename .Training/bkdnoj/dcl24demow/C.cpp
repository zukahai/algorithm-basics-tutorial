#include <bits/stdc++.h>

using namespace std;

int countT = 0;
vector<vector<int>> b(101, vector<int>(101, 0));
vector<int> check(101, 1);

void solve(int index)
{
    for (int i = 1; i <= 100; i++)
    {
        if (b[index][i] == 1 && check[i] == 1)
        {
            countT++;
            check[i] = 0;
            solve(i);
        }
    }
}

int main()
{
    int n, t1, t2;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t1 >> t2;
        b[t1][t2] = 1;
        b[t2][t1] = 1;
    }

    int max = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (check[i] == 1)
        {
            countT = 0;
            solve(i);
            check[i] = 0;
            if (countT > max)
            {
                max = countT;
            }
        }
    }
    cout << max;
}