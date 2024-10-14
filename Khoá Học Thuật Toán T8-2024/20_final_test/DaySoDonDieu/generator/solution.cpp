#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b, c;
    b = c = a;
    sort(b.begin(), b.end());
    sort(c.begin(), c.end(), greater<int>());
    if (a == b || a == c)
        cout << "YES";
    else
        cout << "NO";

    
}
