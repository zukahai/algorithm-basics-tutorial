#include <bits/stdc++.h>

using namespace std;
int n;

// deQuy(index)
// Chính là vòng for thứ index
/*
Vòng for thứ 1 sẽ có vòng 2 lồng vòng
Vòng for thứ 2 sẽ có vòng 3 lồng vòng
Vòng for thứ 3 sẽ có vòng 4 lồng vòng
Vòng for thứ 4 sẽ có vòng 5 lồng vòng

Vòng for thứ index sẽ có vòng index + 1 lồng vòng
*/

int b[100];
// b[index]: Biến chạy của vòng for thứ index

void deQuy(int index) {
    if (index > n) {
        for (int i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= 3; i++) {
        b[index] = i;
        deQuy(index + 1);
    }
}

int main() {
    cin >> n;
    deQuy(1);
}