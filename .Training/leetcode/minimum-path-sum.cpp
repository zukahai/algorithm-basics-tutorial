#include <bits/stdc++.h>

using namespace std;

int minPathSum(vector<vector<int>> grid)
{
    for (int i = 1; i < grid.size(); i++)
        grid[i][0] += grid[i - 1][0];
    for (int j = 1; j < grid[0].size(); j++)
        grid[0][j] += grid[0][j - 1];

    for (int i = 1; i < grid.size(); i++)
        for (int j = 1; j < grid[0].size(); j++)
            grid[i][j] = min(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];

    // for (int i = 0; i < grid.size(); i++)
    // {
    //     for (int j = 0; j < grid[0].size(); j++)
    //         cout << grid[i][j] << " ";
    //     cout << endl;
    // }
    return grid[grid.size() - 1][grid[0].size() - 1];
}

int main()
{
    vector<vector<int>> a = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    cout << minPathSum(a);
}