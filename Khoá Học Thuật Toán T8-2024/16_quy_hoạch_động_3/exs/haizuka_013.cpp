#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    vector <long long> dp(n, 0);

    dp[0] = a[0];
    for (int k = 1; k < n; ++k) {
        if (dp[k - 1] + a[k] > a[k]) {
            dp[k] = dp[k - 1] + a[k];
        } else {
            dp[k] = a[k];
        }
    }

    long long max = dp[0];
    int s = 0, e = 0;
    for (int i = 0; i < n; ++i) {
        if (dp[i] > max) {
            max = dp[i];
            e = i;
        }
    }

    long long sum = 0;
    for (int i = e; i >= 0; --i) {
        sum += a[i];
        if (sum == max) {
            s = i;
            break;
        }
    }
    for (int i = s; i <= e; ++i) {
        cout << a[i] << " ";
    }
    

    return 0;
}
