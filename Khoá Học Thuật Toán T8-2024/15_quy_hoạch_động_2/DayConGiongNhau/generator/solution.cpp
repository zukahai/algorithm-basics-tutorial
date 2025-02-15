#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> dp(n, 1);

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        }
    }

    int max = dp[0];
    int end = 0;

    for (int i = 1; i < n; i++) {
        if (dp[i] > max) {
            max = dp[i];
            end = i;
        }
    }

    cout << max << endl;
    cout << a[end];

    
}
