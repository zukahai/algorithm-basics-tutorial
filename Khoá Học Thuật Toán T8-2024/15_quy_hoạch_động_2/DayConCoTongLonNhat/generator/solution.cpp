#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = a[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(a[i], dp[i - 1] + a[i]);
    }

    long long max_sum = dp[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (dp[i] > max_sum) {
            max_sum = dp[i];
            index = i;
        }
    }

    vector<long long> result;

    while (max_sum != 0) {
        result.push_back(a[index]);
        max_sum -= a[index];
        index--;
    }

    reverse(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
}
