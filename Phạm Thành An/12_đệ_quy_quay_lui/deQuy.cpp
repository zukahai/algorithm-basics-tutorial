#include <bits/stdc++.h>

using namespace std;

int n;
int x[100];

void deQuy(int index) {
    for (int i = 1; i <= 3; i++) {
        x[index] = i;
        if (index == n) {
            for (int j = 1; j <= n; j++) {
                cout << x[j] << " ";
            }
            cout << endl;
        } else {
            deQuy(index + 1);
        }
    }
}

int main() {
    cin >> n;
    deQuy(1);
    return 0;
}