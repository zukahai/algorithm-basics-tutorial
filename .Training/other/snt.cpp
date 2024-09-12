#include <bits/stdc++.h>

using namespace std;

bool A[10000009];

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 2; i <= b; i++) {
        A[i] = 1;
    }
    
    A[0] = A[1] = 0;

    for (int i = 2; i <= b; i++) {
        if (A[i]) {
            for (int j = i * i; j <= b; j += i) {
                A[j] = 0;
            }
        }
    }

    int count = 0;

    for (int i = a; i <= b; i++) {
        if (A[i]) {
            count++;
        }
    }

    cout << count;

}