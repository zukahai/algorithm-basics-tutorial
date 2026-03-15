#include <bits/stdc++.h>

using namespace std;
int a[20];
int N = 0;
int main() {
    long long n, m;
    cin >> n;
    m = n;
    while (n > 0) {
        a[++N] = n % 10;
        n /= 10;
    }
    
    int index0 = -1;
    for (int i = N; i >= 1; i--) {
        if (a[i] == 0) {
            index0 = i;
            break;
        }
    }

    for (int i = 1; i <= index0; i++)
        a[i] = 1;
    
    long long t = 0;
    for (int i = N; i >= 1; i--) {
        t = t * 10 + a[i];
    }
    cout << t - m;
}