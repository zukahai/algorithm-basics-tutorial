#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[6] = {1, 4, 9, 16, 25, 36};
    int n = 6;
    int x = 1;

    // Tìm vị của x trong mảng a, nếu không có in ra -
    int l = 0, r = n - 1;
    int index = -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            index = m;
            break;
        } else {
            if (a[m] > x) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
    }

    cout << index;

}

/*

l ... m ... r

1 đến 100


8
1 3 4 7 10 12 34 100
1000

[0, 7] -> 3 -> a[3] < 1000
[4, 7] -> 5 -> a[5] < 1000
[6, 7] -> 6 -> a[6] < 1000
[7, 7] -> 7 -> a[7] < 1000
[8, 7]

// 1000000 -> 500000 -> 250000 -> 125000 -> 62500 -> 31250 -> 15625 ->
7812 -> 3906 -> 1953 -> 976 -> 488 -> 244 -> 122 -> 61 -> 30 -> 15
 -> 7 -> 3 -> 1

 */

