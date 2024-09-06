#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << "YES";
        return 0;
    }
    
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1])
    {
        cout << "YES";
        return 0;
    }

    if (a[0] == a[n - 2] || a[1] == a[n - 1])
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";
}
