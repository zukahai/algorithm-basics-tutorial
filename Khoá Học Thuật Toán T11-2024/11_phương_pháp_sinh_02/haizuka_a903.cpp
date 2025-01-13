#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t;
    cin >> n;

    vector <long long> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while (a.back() <= n) {
        int k = a[index] % 10;
        
        if (k > 0) {
            t = a[index] * 10 + (k - 1);
            a.push_back(t);
        }
        
        if (k < 9) {
            t = a[index] * 10 + (k + 1);
            a.push_back(t);
        }
        index++;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= n)
            cout << a[i] << " ";
    }
}