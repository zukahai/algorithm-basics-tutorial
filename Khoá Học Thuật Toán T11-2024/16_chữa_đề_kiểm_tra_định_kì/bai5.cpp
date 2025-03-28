// Nếu x là số siêu chính phương
// Thì x * 10 + y là số chính phương,
// Thì x * 10 + y cũng là số siêu chính phương

#include <bits/stdc++.h>

using namespace std;

bool isSquare(long long x) {
    int y = sqrt(x);
    return y * y == x;
}

int main() {
    vector<int> a = {1, 4, 9};
    int index = 0;
    long long n;
    cin >> n;
    while (index < a.size() && a.back() < n) {
        for (int i = 0; i < 10; i++) {
            int x = a[index] * 10 + i;
            if (isSquare(x)) {
                a.push_back(x);
            }
        }
        index++;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= n) {
            cout << a[i] << " ";
        }
    }
}