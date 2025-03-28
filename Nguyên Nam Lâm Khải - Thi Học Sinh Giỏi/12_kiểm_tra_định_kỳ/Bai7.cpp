#include <bits/stdc++.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> a = {2, 3, 5, 7};
    int index = 0;
    // a.back()   a[a.size() - 1]
    while (a.back() <= n && index < a.size()) {
        for (int i = 1; i <= 9; i += 2) {
            int x = a[index] * 10 + i;
            if (isPrime(x))
                a.push_back(x);
        }
        index++;
    }

    long long min = 1e18;
    for (int i = 0; i < a.size(); i++) {
        if (min > abs(a[i] - n)) {
            min = abs(a[i] - n);
        }
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (min == abs(a[i] - n)) {
            cout << a[i] << " ";
        }
    }
}

// a = 3, b = 5
// a = 5, b = 2
// => abs(a - b)
// Tìm những bạn cao nhất trong lớp