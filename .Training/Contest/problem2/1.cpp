#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector <long long> res = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while (res.back() < b) {
        long long x = res[index];
        int start = 0;
        if ((x % 10) % 2 == 0) {
            start = 1;
        }
        for (int i = start; i < 10; i += 2) {
            res.push_back(x * 10 + i);
        }
        index++;
    }

    int cnt = 0;
    for (auto x : res) {
        if (x >= a && x <= b) {
            cnt++;
        }
    }
    cout << cnt;
}