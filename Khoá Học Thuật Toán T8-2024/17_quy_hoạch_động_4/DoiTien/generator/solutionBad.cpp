#include<bits/stdc++.h>
using namespace std;

#define MAX 10000000

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int m, n;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        while (m >= a[i])
        {
            m -= a[i];
            count++;
        }
    }

    cout << (m == 0 ? count : -1);
    

    
}
