#include <bits/stdc++.h>

using namespace std;

bool check(vector <int> a, vector <int> b, int x) {
    int indexA = 0;
    int indexB = 0;
    while (indexB < b.size() && indexA < a.size()) {
        if (a[indexA] > b[indexB]) {
            if (a[indexA] - b[indexB] > x)
                return false;
            int minB = b[indexB];
            while (indexB < b.size() && b[indexB] <= a[indexA]) {
                indexB++;
            }
            if (indexB == b.size())
                return true;
            while (indexB < b.size()) {
                int maxB = b[indexB];
                int minD = min(abs(a[indexA] - minB), abs(a[indexA] - maxB));
                int maxD = max(abs(a[indexA] - minB), abs(a[indexA] - maxB));
                if (2 * minD + maxD <= x) {
                    indexB++;
                    minD = min(abs(a[indexA] - minB), abs(a[indexA] - maxB));
                    maxD = max(abs(a[indexA] - minB), abs(a[indexA] - maxB));
                } else {
                    break;
                }
            }

        } else {
            while (indexB < b.size() && b[indexB] - a[indexA] <= x) {
                indexB++;
            }
        }
        indexA++;
    }
    return indexB >= b.size();
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    vector <int> a;
    vector <int> b;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'P')
            a.push_back(i);
        if (s[i] == '*')
            b.push_back(i);
    }
    int l = 0;
    int r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(a, b, mid)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << res;
}