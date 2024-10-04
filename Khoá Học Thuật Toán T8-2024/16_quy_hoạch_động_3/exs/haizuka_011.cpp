#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = (a[0] % 2 == 0) ? 1 : 0;

    for (int k = 1; k < n; k++) {
        if (a[k] % 2 == 0) {
            // if (a[k - 1] % 2 == 0) {
            //     dp[k] = dp[k - 1] + 1;
            // } else {
            //     dp[k] = 1;
            // }
            dp[k] = dp[k - 1] + 1;
        } else {
            dp[k] = 0;
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

    if (max == 0) {
        cout << "No even number";
        return 0;
    }

    int s = e - max + 1;

    for (int i = s; i <= e; i++) {
        cout << a[i] << " ";
    }

    
}

/*
dp[k]: Độ dài của dãy con chẵn liên tiếp dài nhất
Kết thúc tại k

dp[0] = (a[0] % 2 == 0) ? 1 : 0

Nếu a[k] chẵn:
	Nếu a[k - 1]  chẵn:
		dp[k] = dp[k - 1] + 1
	Ngược lại:
		dp[k] = 1
	---------------------
	dp[k] = dp[k - 1] + 1
Ngược lại:
	dp[k] = 0

*/
