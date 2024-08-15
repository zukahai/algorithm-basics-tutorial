#include <bits/stdc++.h>

using namespace std;

int beautifulPairs(vector<int> A, vector<int> B) {
    int n = A.size();
    int ans = 0;
    vector<int> cnt(1001);
    for (int i = 0; i < n; i++) {
        cnt[A[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (cnt[B[i]] > 0) {
            cnt[B[i]]--;
            ans++;
        }
    }
    return ans == n ? ans - 1 : ans + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    cout << beautifulPairs(A, B) << endl;
    return 0;
}