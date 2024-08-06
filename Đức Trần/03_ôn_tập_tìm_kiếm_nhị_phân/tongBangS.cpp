/*
    6
    1 2 2 3 4 5
    3
*/

#include <bits/stdc++.h>

using namespace std;

int binarySearchFirst(int a[], int n, int x) {
    int l = 0, r = n - 1;
    int index = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            index = m;
            r = m - 1;
        } else {
            if (a[m] < x) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
    }
    return index;
}

int binarySearchLast(int a[], int n, int x) {
    int l = 0, r = n - 1;
    int index = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            index = m;
            l = m + 1;
        } else {
            if (a[m] < x) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
    }
    return index;
}
// l .. m .. r

int main() {
    int n = 6;
    int a[6] = {1, 2, 2, 4, 4, 5};
    int s = 4;

    sort(a, a + n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        int x = s - a[i];
        int first = binarySearchFirst(a, n, x);
        int last = binarySearchLast(a, n, x);
        if (first != -1 && last != -1) {
            count += last - first + 1;
        }
    }
    cout << count / 2;
}

