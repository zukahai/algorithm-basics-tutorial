#include <bits/stdc++.h>

using namespace std;

string decToBin(int n) {
    string bin = "";
    while (n > 0) {
        bin = to_string(n % 2) + bin;
        n /= 2;
    }
    return bin;
}

long long solve(int a, int b) {
    string binA = decToBin(a);
    string binB = decToBin(b);
    while (binA.size() < binB.size()) {
        binA = "0" + binA;
    }
    while (binB.size() < binA.size()) {
        binB = "0" + binB;
    }
    for (int i = binA.size() - 1; i >= 0; i--) {
        if (binA[i] != binB[i]) {
            long long ans = 1;
            for (int j = binA.size() - i - 2; j >= 0; j--) {
                ans *= 2;
            }
            return ans;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
}