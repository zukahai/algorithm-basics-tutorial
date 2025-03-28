#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int k = 1; k < n; k++) {
        if (a[k] > a[k - 1]) {
            dp[k] = dp[k - 1] + 1;
        }
    }

    int max = dp[0];
    int e = 0;

    for (int i = 1; i < n; i++) {
        if (dp[i] > max) {
            max = dp[i];
            e = i;
        }
    }

    int s = e - max + 1;
    for (int i = s; i <= e; i++) {
        cout << a[i] << " ";
    }
}

/*
dp[k]: Độ dài của dãy con dài nhất tăng liên tiếp
Kết thúc tại k

dp[0] = 1

Nếu a[k] > a[k - 1]:
	dp[k] = dp[k - 1] + 1
Ngược lại:
	dp[k] = 1
 */