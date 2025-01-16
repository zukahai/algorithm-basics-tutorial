#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = i; j <= 3; j++) {
            for (int k = j; k <= 3; k++) {
                for (int l = k; l <= 3; l++) {
                    cout << i << " " << j << " " << k << " " << l << endl;
                }
            }
        }
    }
}