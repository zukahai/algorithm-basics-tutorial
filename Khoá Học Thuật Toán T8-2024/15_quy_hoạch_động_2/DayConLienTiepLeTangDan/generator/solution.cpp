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

    vector<long long> dp(n, 0);
    dp[0] = (a[0] % 2);

    for (int i = 1; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (a[i] > a[i - 1]) {
                dp[i] = dp[i - 1] + 1;
            } else {
                dp[i] = 1;
            }
        }
        else {
            dp[i] = 0;
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

    int start = end - max + 1;

    if (max == 0) 
        cout << "No odd number";
    else {
        for (int i = start; i <= end; i++) {
            cout << a[i] << " ";
        }
    }
    
}
