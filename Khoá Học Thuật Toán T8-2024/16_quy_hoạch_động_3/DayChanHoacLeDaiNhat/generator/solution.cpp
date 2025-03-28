#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        if ((a[i] + a[i - 1]) % 2 == 0) {
            dp[i] = dp[i - 1] + 1;
        }
    }

    int max = 0;
    int e = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > max) {
            e = i;
            max = dp[i];
        }
    }

    cout << max << endl;
    int s = e - max + 1;   
    for (int i = s; i <= e; i++) {
        cout << a[i] << " ";
    }
    
}
