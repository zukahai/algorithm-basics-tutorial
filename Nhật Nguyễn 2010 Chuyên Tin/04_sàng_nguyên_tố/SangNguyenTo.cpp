#include <bits/stdc++.h>  

using namespace std;

int main() {
    vector <bool> b(1000009, true);
    b[0] = b[1] = false;

    for (int i = 2; i <= sqrt(1e6); i++) {
        if (b[i] == true) {
            for (int j = 2 * i; j <= 1e6; j += i) {
                b[j] = false;
            }
        }
    }

    int A, B;
    cin >> A >> B;

    int dem = 0;
    for (int i = sqrt(A); i <= sqrt(B); i++) {
        if (b[i] == true) {
            long long x =  i * i;
            if (x >= A && x <= B){
                dem++;
            }
        }
    }

    cout << dem;
}