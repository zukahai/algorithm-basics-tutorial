#include <bits/stdc++.h>  

using namespace std;

int a[1000007];
int m = 0; // số lượng ước số của n

int main() {
    long long n;
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i ++) {
        if (n % i == 0) {

            a[m] = i;
            m++;

            if (n / i != i) {
                a[m] = n / i;
                m++;
            }
        }
    }

    sort(a, a + m); // O(n * logN)

    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
}