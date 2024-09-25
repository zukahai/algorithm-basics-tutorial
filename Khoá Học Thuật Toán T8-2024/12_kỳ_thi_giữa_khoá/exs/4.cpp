#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector <long long> res = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while (res[res.size() - 1] <= n) {
        long long t = res[index];
        int k = t % 10;
        if (k % 2 == 0) {
            res.push_back(t * 10 + k / 2);
        }
        if (k * 2 <= 9) {
            res.push_back(t * 10 + k * 2);
        }
        index++;
    }

    for (auto x: res)
        if (x <= n)
            cout << x << " ";
    
}