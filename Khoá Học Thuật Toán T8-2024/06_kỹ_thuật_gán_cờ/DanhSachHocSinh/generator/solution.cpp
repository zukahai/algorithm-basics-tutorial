#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int m, n;
    cin >> m >> n;
    vector <long long> b(m), c(n);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    map <long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[c[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp[b[i]]++;
    }
    int flag = 0;
    for (auto x : mp)
    {
        if (x.second == 2)
        {
            cout << x.first << " ";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "-1";
    }
    
}
