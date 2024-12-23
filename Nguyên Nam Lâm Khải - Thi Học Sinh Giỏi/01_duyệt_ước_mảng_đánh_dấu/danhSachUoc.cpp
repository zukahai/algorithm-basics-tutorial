#include <bits/stdc++.h>

using namespace std;

int a[1000];
int num = 0; // so luong uoc so cua n
int index = 1;

int main() {
    long long n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) { 
            // i la uoc cua n
            // n/i la uoc cua n
            a[index++] = i;
            num++;
            if (i != n / i) {
                a[index++] = n / i;
                num++;
            }
        }
    }

    sort(a + 1, a + num + 1);

    for (int i = 1; i <= num; i++) {
        cout << a[i] << " ";
    }
}