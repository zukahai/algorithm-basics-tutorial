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

    string ans = "YES";
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            ans = "NO";
            break;
        }
    }

    cout << ans;
}
