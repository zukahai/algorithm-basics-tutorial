#include <bits/stdc++.h>  

using namespace std;

bool isSquare(long long n) {
    long long x = sqrt(n);
    return x * x == n;
}

int main() {
    long long n;
    cin >> n;
    vector <long long> a;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (n / i != i)
                a.push_back(n / i);
        }
    }

    sort(a.begin(), a.end());  // O(nlogn)

    for (int i = 0; i < a.size(); i++)
        if (isSquare(a[i]))
            cout << a[i] << " ";
}