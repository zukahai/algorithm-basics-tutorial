#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            cout << "YES";
            return 0;
        }
        if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << "NO";
}
