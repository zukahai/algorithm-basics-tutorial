#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int n, int x) {
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
    if (index != -1) {
        return index;
    }
    return r;
    
}

int main() { // O(nlogn)
    int a[6] = {1, 2, 2, 4, 4, 5};
    int s = 3;
    int n = 6;
    sort(a, a + n);
    // tim ra vi tri so cuoi cung nho hon hoac bang s - a[i]
    int count = 0;
    for (int i = 0; i < n; i++) {
        int j = binarySearch(a, n, s - a[i]);
        count += j + 1;
    }
    cout << count;
}


/*

    6
    1 2 2 3 4 5
    3
*/